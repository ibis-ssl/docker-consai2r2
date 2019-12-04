// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai2_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef CONSAI2_MSGS__MSG__ROBOT_COMMAND__STRUCT_H_
#define CONSAI2_MSGS__MSG__ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RobotCommand in the package consai2_msgs.
typedef struct consai2_msgs__msg__RobotCommand
{
  uint8_t robot_id;
  double vel_surge;
  double vel_sway;
  double vel_angular;
  double kick_power;
  bool chip_enable;
  double dribble_power;
} consai2_msgs__msg__RobotCommand;

// Struct for a sequence of consai2_msgs__msg__RobotCommand.
typedef struct consai2_msgs__msg__RobotCommand__Sequence
{
  consai2_msgs__msg__RobotCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai2_msgs__msg__RobotCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI2_MSGS__MSG__ROBOT_COMMAND__STRUCT_H_
