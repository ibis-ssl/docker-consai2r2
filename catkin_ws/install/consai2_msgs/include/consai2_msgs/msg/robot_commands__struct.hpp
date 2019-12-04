// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai2_msgs:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#ifndef CONSAI2_MSGS__MSG__ROBOT_COMMANDS__STRUCT_HPP_
#define CONSAI2_MSGS__MSG__ROBOT_COMMANDS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'commands'
#include "consai2_msgs/msg/robot_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai2_msgs__msg__RobotCommands __attribute__((deprecated))
#else
# define DEPRECATED__consai2_msgs__msg__RobotCommands __declspec(deprecated)
#endif

namespace consai2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommands_
{
  using Type = RobotCommands_<ContainerAllocator>;

  explicit RobotCommands_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_yellow = false;
    }
  }

  explicit RobotCommands_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_yellow = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_yellow_type =
    bool;
  _is_yellow_type is_yellow;
  using _commands_type =
    std::vector<consai2_msgs::msg::RobotCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<consai2_msgs::msg::RobotCommand_<ContainerAllocator>>::other>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_yellow(
    const bool & _arg)
  {
    this->is_yellow = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<consai2_msgs::msg::RobotCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<consai2_msgs::msg::RobotCommand_<ContainerAllocator>>::other> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai2_msgs::msg::RobotCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai2_msgs::msg::RobotCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai2_msgs::msg::RobotCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai2_msgs::msg::RobotCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai2_msgs::msg::RobotCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai2_msgs::msg::RobotCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai2_msgs::msg::RobotCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai2_msgs::msg::RobotCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai2_msgs::msg::RobotCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai2_msgs::msg::RobotCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai2_msgs__msg__RobotCommands
    std::shared_ptr<consai2_msgs::msg::RobotCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai2_msgs__msg__RobotCommands
    std::shared_ptr<consai2_msgs::msg::RobotCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommands_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_yellow != other.is_yellow) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommands_

// alias to use template instance with default allocator
using RobotCommands =
  consai2_msgs::msg::RobotCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace consai2_msgs

#endif  // CONSAI2_MSGS__MSG__ROBOT_COMMANDS__STRUCT_HPP_
