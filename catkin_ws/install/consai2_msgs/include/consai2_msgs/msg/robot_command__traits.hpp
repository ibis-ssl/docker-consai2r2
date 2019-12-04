// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from consai2_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef CONSAI2_MSGS__MSG__ROBOT_COMMAND__TRAITS_HPP_
#define CONSAI2_MSGS__MSG__ROBOT_COMMAND__TRAITS_HPP_

#include "consai2_msgs/msg/robot_command__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai2_msgs::msg::RobotCommand>()
{
  return "consai2_msgs::msg::RobotCommand";
}

template<>
struct has_fixed_size<consai2_msgs::msg::RobotCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<consai2_msgs::msg::RobotCommand>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // CONSAI2_MSGS__MSG__ROBOT_COMMAND__TRAITS_HPP_
