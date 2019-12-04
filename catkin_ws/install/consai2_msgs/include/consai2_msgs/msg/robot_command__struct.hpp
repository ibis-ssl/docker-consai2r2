// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai2_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef CONSAI2_MSGS__MSG__ROBOT_COMMAND__STRUCT_HPP_
#define CONSAI2_MSGS__MSG__ROBOT_COMMAND__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__consai2_msgs__msg__RobotCommand __attribute__((deprecated))
#else
# define DEPRECATED__consai2_msgs__msg__RobotCommand __declspec(deprecated)
#endif

namespace consai2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_
{
  using Type = RobotCommand_<ContainerAllocator>;

  explicit RobotCommand_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->vel_surge = 0.0;
      this->vel_sway = 0.0;
      this->vel_angular = 0.0;
      this->kick_power = 0.0;
      this->chip_enable = false;
      this->dribble_power = 0.0;
    }
  }

  explicit RobotCommand_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->vel_surge = 0.0;
      this->vel_sway = 0.0;
      this->vel_angular = 0.0;
      this->kick_power = 0.0;
      this->chip_enable = false;
      this->dribble_power = 0.0;
    }
  }

  // field types and members
  using _robot_id_type =
    uint8_t;
  _robot_id_type robot_id;
  using _vel_surge_type =
    double;
  _vel_surge_type vel_surge;
  using _vel_sway_type =
    double;
  _vel_sway_type vel_sway;
  using _vel_angular_type =
    double;
  _vel_angular_type vel_angular;
  using _kick_power_type =
    double;
  _kick_power_type kick_power;
  using _chip_enable_type =
    bool;
  _chip_enable_type chip_enable;
  using _dribble_power_type =
    double;
  _dribble_power_type dribble_power;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint8_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__vel_surge(
    const double & _arg)
  {
    this->vel_surge = _arg;
    return *this;
  }
  Type & set__vel_sway(
    const double & _arg)
  {
    this->vel_sway = _arg;
    return *this;
  }
  Type & set__vel_angular(
    const double & _arg)
  {
    this->vel_angular = _arg;
    return *this;
  }
  Type & set__kick_power(
    const double & _arg)
  {
    this->kick_power = _arg;
    return *this;
  }
  Type & set__chip_enable(
    const bool & _arg)
  {
    this->chip_enable = _arg;
    return *this;
  }
  Type & set__dribble_power(
    const double & _arg)
  {
    this->dribble_power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai2_msgs::msg::RobotCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai2_msgs::msg::RobotCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai2_msgs::msg::RobotCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai2_msgs::msg::RobotCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai2_msgs::msg::RobotCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai2_msgs::msg::RobotCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai2_msgs::msg::RobotCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai2_msgs::msg::RobotCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai2_msgs::msg::RobotCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai2_msgs::msg::RobotCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai2_msgs__msg__RobotCommand
    std::shared_ptr<consai2_msgs::msg::RobotCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai2_msgs__msg__RobotCommand
    std::shared_ptr<consai2_msgs::msg::RobotCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->vel_surge != other.vel_surge) {
      return false;
    }
    if (this->vel_sway != other.vel_sway) {
      return false;
    }
    if (this->vel_angular != other.vel_angular) {
      return false;
    }
    if (this->kick_power != other.kick_power) {
      return false;
    }
    if (this->chip_enable != other.chip_enable) {
      return false;
    }
    if (this->dribble_power != other.dribble_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_

// alias to use template instance with default allocator
using RobotCommand =
  consai2_msgs::msg::RobotCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace consai2_msgs

#endif  // CONSAI2_MSGS__MSG__ROBOT_COMMAND__STRUCT_HPP_
