// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from consai2_msgs:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "consai2_msgs/msg/robot_commands__rosidl_typesupport_introspection_c.h"
#include "consai2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "consai2_msgs/msg/robot_commands__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `commands`
#include "consai2_msgs/msg/robot_command.h"
// Member `commands`
#include "consai2_msgs/msg/robot_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t RobotCommands__rosidl_typesupport_introspection_c__size_function__RobotCommand__commands(
  const void * untyped_member)
{
  const consai2_msgs__msg__RobotCommand__Sequence * member =
    (const consai2_msgs__msg__RobotCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * RobotCommands__rosidl_typesupport_introspection_c__get_const_function__RobotCommand__commands(
  const void * untyped_member, size_t index)
{
  const consai2_msgs__msg__RobotCommand__Sequence * member =
    (const consai2_msgs__msg__RobotCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RobotCommands__rosidl_typesupport_introspection_c__get_function__RobotCommand__commands(
  void * untyped_member, size_t index)
{
  consai2_msgs__msg__RobotCommand__Sequence * member =
    (consai2_msgs__msg__RobotCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RobotCommands__rosidl_typesupport_introspection_c__resize_function__RobotCommand__commands(
  void * untyped_member, size_t size)
{
  consai2_msgs__msg__RobotCommand__Sequence * member =
    (consai2_msgs__msg__RobotCommand__Sequence *)(untyped_member);
  consai2_msgs__msg__RobotCommand__Sequence__fini(member);
  return consai2_msgs__msg__RobotCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommands, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_yellow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommands, is_yellow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai2_msgs__msg__RobotCommands, commands),  // bytes offset in struct
    NULL,  // default value
    RobotCommands__rosidl_typesupport_introspection_c__size_function__RobotCommand__commands,  // size() function pointer
    RobotCommands__rosidl_typesupport_introspection_c__get_const_function__RobotCommand__commands,  // get_const(index) function pointer
    RobotCommands__rosidl_typesupport_introspection_c__get_function__RobotCommand__commands,  // get(index) function pointer
    RobotCommands__rosidl_typesupport_introspection_c__resize_function__RobotCommand__commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_members = {
  "consai2_msgs__msg",  // message namespace
  "RobotCommands",  // message name
  3,  // number of fields
  sizeof(consai2_msgs__msg__RobotCommands),
  RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_type_support_handle = {
  0,
  &RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai2_msgs, msg, RobotCommands)() {
  RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai2_msgs, msg, RobotCommand)();
  if (!RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_type_support_handle.typesupport_identifier) {
    RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
