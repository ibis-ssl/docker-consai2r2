#!/bin/bash
if [ -e /userdir/colcon_ws/install ]; then
    source /userdir/colcon_ws/install/setup.bash
else
    echo "/userdir/colcon_ws/install/setup.bash does not exist. Build colcon project first."
fi

ros2 launch consai2_examples joystick_examples.launch.py
