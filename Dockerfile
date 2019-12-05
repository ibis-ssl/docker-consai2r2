FROM future731/ros2_dashing

RUN apt-get update && apt-get upgrade -y && apt-get install -y --no-install-recommends \
    cmake g++ vim tmux x11-apps mesa-utils python-pip
# ros-${ROS_DISTRO}-catkin python-wstools python-pygraphviz python-catkin-tools \
# ros-${ROS_DISTRO}-navigation ros-${ROS_DISTRO}-bfl ros-${ROS_DISTRO}-move-base-msgs libprotobuf-dev libprotoc-dev protobuf-compiler
# RUN pip2 install protobuf
# RUN cd /userdir/catkin_ws/src && rosdep init && rosdep update && rosdep install -r -y --from-paths . --ignore-src
# RUN cd /userdir/catkin_ws && catkin build
    #\
    # && apt-get clean \
    # && rm -rf /var/lib/apt/lists/
RUN apt-get install -y --no-install-recommends python-rosdep
# これらはrosdepによって最終的に入れられるので開発用途以外では不要
RUN apt-get install -y --no-install-recommends libprotobuf-dev libprotoc-dev protobuf-compiler
RUN rosdep init && rosdep update

COPY entrypoint/ros2launch.sh /
COPY entrypoint/colcon_build.sh /
