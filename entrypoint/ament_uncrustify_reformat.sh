#!/bin/bash
source /opt/ros/dashing/setup.bash

rosdep install --from-paths /userdir/colcon_ws/src --ignore-src -r -y

cd /userdir/colcon_ws/src

ament_uncrustify --reformat
