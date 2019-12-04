#!/bin/bash
source /opt/ros/dashing/setup.bash

EXE=${@:-""}

cd /userdir/catkin_ws/ && colcon build ${EXE}
