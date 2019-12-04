// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai2_msgs:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#ifndef CONSAI2_MSGS__MSG__ROBOT_COMMANDS__STRUCT_H_
#define CONSAI2_MSGS__MSG__ROBOT_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'commands'
#include "consai2_msgs/msg/robot_command__struct.h"

// Struct defined in msg/RobotCommands in the package consai2_msgs.
typedef struct consai2_msgs__msg__RobotCommands
{
  std_msgs__msg__Header header;
  bool is_yellow;
  consai2_msgs__msg__RobotCommand__Sequence commands;
} consai2_msgs__msg__RobotCommands;

// Struct for a sequence of consai2_msgs__msg__RobotCommands.
typedef struct consai2_msgs__msg__RobotCommands__Sequence
{
  consai2_msgs__msg__RobotCommands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai2_msgs__msg__RobotCommands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI2_MSGS__MSG__ROBOT_COMMANDS__STRUCT_H_
