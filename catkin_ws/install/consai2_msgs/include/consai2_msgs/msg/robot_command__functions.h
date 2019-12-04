// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai2_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef CONSAI2_MSGS__MSG__ROBOT_COMMAND__FUNCTIONS_H_
#define CONSAI2_MSGS__MSG__ROBOT_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "consai2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "consai2_msgs/msg/robot_command__struct.h"

/// Initialize msg/RobotCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * consai2_msgs__msg__RobotCommand
 * )) before or use
 * consai2_msgs__msg__RobotCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_consai2_msgs
bool
consai2_msgs__msg__RobotCommand__init(consai2_msgs__msg__RobotCommand * msg);

/// Finalize msg/RobotCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_consai2_msgs
void
consai2_msgs__msg__RobotCommand__fini(consai2_msgs__msg__RobotCommand * msg);

/// Create msg/RobotCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * consai2_msgs__msg__RobotCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_consai2_msgs
consai2_msgs__msg__RobotCommand *
consai2_msgs__msg__RobotCommand__create();

/// Destroy msg/RobotCommand message.
/**
 * It calls
 * consai2_msgs__msg__RobotCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_consai2_msgs
void
consai2_msgs__msg__RobotCommand__destroy(consai2_msgs__msg__RobotCommand * msg);


/// Initialize array of msg/RobotCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * consai2_msgs__msg__RobotCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_consai2_msgs
bool
consai2_msgs__msg__RobotCommand__Sequence__init(consai2_msgs__msg__RobotCommand__Sequence * array, size_t size);

/// Finalize array of msg/RobotCommand messages.
/**
 * It calls
 * consai2_msgs__msg__RobotCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_consai2_msgs
void
consai2_msgs__msg__RobotCommand__Sequence__fini(consai2_msgs__msg__RobotCommand__Sequence * array);

/// Create array of msg/RobotCommand messages.
/**
 * It allocates the memory for the array and calls
 * consai2_msgs__msg__RobotCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_consai2_msgs
consai2_msgs__msg__RobotCommand__Sequence *
consai2_msgs__msg__RobotCommand__Sequence__create(size_t size);

/// Destroy array of msg/RobotCommand messages.
/**
 * It calls
 * consai2_msgs__msg__RobotCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_consai2_msgs
void
consai2_msgs__msg__RobotCommand__Sequence__destroy(consai2_msgs__msg__RobotCommand__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CONSAI2_MSGS__MSG__ROBOT_COMMAND__FUNCTIONS_H_