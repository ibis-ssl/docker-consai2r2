// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from consai2_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "consai2_msgs/msg/robot_command__rosidl_typesupport_introspection_c.h"
#include "consai2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "consai2_msgs/msg/robot_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_member_array[7] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommand, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_surge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommand, vel_surge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_sway",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommand, vel_sway),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommand, vel_angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kick_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommand, kick_power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "chip_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommand, chip_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dribble_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommand, dribble_power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_members = {
  "consai2_msgs__msg",  // message namespace
  "RobotCommand",  // message name
  7,  // number of fields
  sizeof(consai2_msgs__msg__RobotCommand),
  RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_type_support_handle = {
  0,
  &RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai2_msgs, msg, RobotCommand)() {
  if (!RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_type_support_handle.typesupport_identifier) {
    RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCommand__rosidl_typesupport_introspection_c__RobotCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
