FROM ibisssl/ros2-dashing

RUN apt-get update && apt-get upgrade -y && apt-get install -y --no-install-recommends \
    cmake g++ vim tmux x11-apps mesa-utils python-pip
    # && apt-get clean \
    # && rm -rf /var/lib/apt/lists/
RUN apt-get install -y --no-install-recommends python-rosdep
# これらはrosdepによって最終的に入れられるので開発用途以外では不要
RUN apt-get install -y --no-install-recommends libprotobuf-dev libprotoc-dev protobuf-compiler python3-protobuf
RUN rosdep init && rosdep update

COPY entrypoint/ros2launch.sh /
COPY entrypoint/colcon_build.sh /
COPY entrypoint/colcon_test.sh /
COPY entrypoint/colcon_clean.sh /
COPY entrypoint/ament_uncrustify_reformat.sh /
