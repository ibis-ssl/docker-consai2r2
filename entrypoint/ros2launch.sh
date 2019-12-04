#!/bin/bash
if [ -e /userdir/catkin_ws/devel ]; then
    source /userdir/catkin_ws/devel/setup.bash
else
    echo "/userdir/catkin_ws/devel/setup.bash does not exist. Build catkin project first."
fi

ros2 launch consai2_examples joystick_examples.launch.py
