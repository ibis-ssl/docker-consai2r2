#!/bin/bash

OPT=${DOCKER_OPTION} ## -it --cpuset-cpus 0-2
iname=${DOCKER_IMAGE:-"ibisssl/consai2r2"} ## name of image (should be same as in build.sh)
cname=${DOCKER_CONTAINER:-"consai2r2"} ## name of container (should be same as in exec.sh)

DEFAULT_USER_DIR="$(pwd)"

EXE=${@:-"/bin/bash"}

## --net=mynetworkname
## docker inspect -f '{{.NetworkSettings.Networks.mynetworkname.IPAddress}}' ${cname}
## docker inspect -f '{{.NetworkSettings.Networks.mynetworkname.Gateway}}' ${cname}

if [ "$DOCKER_ROS_IP" == "" ]; then
#    export DOCKER_ROS_IP=127.0.0.1
    export DOCKER_ROS_IP=localhost
fi

NET_OPT="--net=host --env=DOCKER_ROS_IP --env=DOCKER_ROS_MASTER_URI"
# for gdb
# NET_OPT="--net=host --env=DOCKER_ROS_IP --env=DOCKER_ROS_MASTER_URI --cap-add=SYS_PTRACE --security-opt=seccomp=unconfined"
# NET_OPT="--net=host --env=NVIDIA_DRIVER_CAPABILITIES --env=NVIDIA_VISIBLE_DEVICES"

xhost +si:localuser:root

if [ "$(docker container ls -aq -f name=${cname})" ]; then
    echo "'docker rm ${cname}' is executed."
    docker rm ${cname}
fi

ARG="${OPT}    \
    --privileged     \
    ${NET_OPT}       \
    --env=DOCKER_ROS_SETUP=/colcon_ws/devel/setup.bash \
    --env=DISPLAY  \
    --env=QT_X11_NO_MITSHM=1 \
    --volume=/tmp/.X11-unix:/tmp/.X11-unix:rw \
    --name=${cname} \
    --volume=${PROGRAM_DIR:-$DEFAULT_USER_DIR}:/userdir \
    -w=/userdir \
    ${iname} ${EXE}"

    # --volume="${PROGRAM_DIR:-$DEFAULT_USER_DIR}/root/.bashrc:/root/.bashrc" \
if type lsusb; then
    echo "lsusb can be executed."
    ARG="$(python3 usb_mount_arg.py) ${ARG}"
fi

if type nvidia-smi; then
    echo "Nvidia driver environment detected."
    ARG="--gpus=all ${ARG}"
fi
if [ -f ./root/.bash_history ]; then
    ARG="--volume=${PROGRAM_DIR:-$DEFAULT_USER_DIR}/root/.bash_history:/root/.bash_history ${ARG}"
fi

if [ -f ./root/.bashrc ]; then
    ARG="--volume=${PROGRAM_DIR:-$DEFAULT_USER_DIR}/root/.bashrc:/root/.bashrc ${ARG}"
fi

docker run ${ARG}
