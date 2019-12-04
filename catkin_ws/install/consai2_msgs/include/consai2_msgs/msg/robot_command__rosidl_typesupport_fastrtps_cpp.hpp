// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from consai2_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef CONSAI2_MSGS__MSG__ROBOT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CONSAI2_MSGS__MSG__ROBOT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "consai2_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "consai2_msgs/msg/robot_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace consai2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai2_msgs
cdr_serialize(
  const consai2_msgs::msg::RobotCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  consai2_msgs::msg::RobotCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai2_msgs
get_serialized_size(
  const consai2_msgs::msg::RobotCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai2_msgs
max_serialized_size_RobotCommand(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace consai2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_consai2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, consai2_msgs, msg, RobotCommand)();

#ifdef __cplusplus
}
#endif

#endif  // CONSAI2_MSGS__MSG__ROBOT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
