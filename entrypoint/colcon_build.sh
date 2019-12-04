#!/bin/bash
source /opt/ros/dashing/setup.bash

EXE=${@:-""}

cd /userdir/colcon_ws/ && colcon build ${EXE}
