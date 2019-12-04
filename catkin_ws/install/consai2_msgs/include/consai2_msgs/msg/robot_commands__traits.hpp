// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from consai2_msgs:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#ifndef CONSAI2_MSGS__MSG__ROBOT_COMMANDS__TRAITS_HPP_
#define CONSAI2_MSGS__MSG__ROBOT_COMMANDS__TRAITS_HPP_

#include "consai2_msgs/msg/robot_commands__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai2_msgs::msg::RobotCommands>()
{
  return "consai2_msgs::msg::RobotCommands";
}

template<>
struct has_fixed_size<consai2_msgs::msg::RobotCommands>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<consai2_msgs::msg::RobotCommands>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // CONSAI2_MSGS__MSG__ROBOT_COMMANDS__TRAITS_HPP_
