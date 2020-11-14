#!/bin/bash
VAR=${@:-""}
source entrypoint/ros_distro.bash
docker build . ${VAR} --build-arg ROS_DISTRO=${ROS_DISTRO} -f ./Dockerfile -t ibisssl/consai2r2
