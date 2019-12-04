// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai2_msgs:msg/RobotCommands.idl
// generated code does not contain a copyright notice
#include "consai2_msgs/msg/robot_commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `commands`
#include "consai2_msgs/msg/robot_command__functions.h"

bool
consai2_msgs__msg__RobotCommands__init(consai2_msgs__msg__RobotCommands * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    consai2_msgs__msg__RobotCommands__destroy(msg);
    return false;
  }
  // is_yellow
  // commands
  if (!consai2_msgs__msg__RobotCommand__Sequence__init(&msg->commands, 0)) {
    consai2_msgs__msg__RobotCommands__destroy(msg);
    return false;
  }
  return true;
}

void
consai2_msgs__msg__RobotCommands__fini(consai2_msgs__msg__RobotCommands * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_yellow
  // commands
  consai2_msgs__msg__RobotCommand__Sequence__fini(&msg->commands);
}

consai2_msgs__msg__RobotCommands *
consai2_msgs__msg__RobotCommands__create()
{
  consai2_msgs__msg__RobotCommands * msg = (consai2_msgs__msg__RobotCommands *)malloc(sizeof(consai2_msgs__msg__RobotCommands));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai2_msgs__msg__RobotCommands));
  bool success = consai2_msgs__msg__RobotCommands__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
consai2_msgs__msg__RobotCommands__destroy(consai2_msgs__msg__RobotCommands * msg)
{
  if (msg) {
    consai2_msgs__msg__RobotCommands__fini(msg);
  }
  free(msg);
}


bool
consai2_msgs__msg__RobotCommands__Sequence__init(consai2_msgs__msg__RobotCommands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  consai2_msgs__msg__RobotCommands * data = NULL;
  if (size) {
    data = (consai2_msgs__msg__RobotCommands *)calloc(size, sizeof(consai2_msgs__msg__RobotCommands));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai2_msgs__msg__RobotCommands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai2_msgs__msg__RobotCommands__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
consai2_msgs__msg__RobotCommands__Sequence__fini(consai2_msgs__msg__RobotCommands__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      consai2_msgs__msg__RobotCommands__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

consai2_msgs__msg__RobotCommands__Sequence *
consai2_msgs__msg__RobotCommands__Sequence__create(size_t size)
{
  consai2_msgs__msg__RobotCommands__Sequence * array = (consai2_msgs__msg__RobotCommands__Sequence *)malloc(sizeof(consai2_msgs__msg__RobotCommands__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = consai2_msgs__msg__RobotCommands__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
consai2_msgs__msg__RobotCommands__Sequence__destroy(consai2_msgs__msg__RobotCommands__Sequence * array)
{
  if (array) {
    consai2_msgs__msg__RobotCommands__Sequence__fini(array);
  }
  free(array);
}
