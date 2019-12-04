// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from consai2_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice
#include "consai2_msgs/msg/robot_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
consai2_msgs__msg__RobotCommand__init(consai2_msgs__msg__RobotCommand * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // vel_surge
  // vel_sway
  // vel_angular
  // kick_power
  // chip_enable
  // dribble_power
  return true;
}

void
consai2_msgs__msg__RobotCommand__fini(consai2_msgs__msg__RobotCommand * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // vel_surge
  // vel_sway
  // vel_angular
  // kick_power
  // chip_enable
  // dribble_power
}

consai2_msgs__msg__RobotCommand *
consai2_msgs__msg__RobotCommand__create()
{
  consai2_msgs__msg__RobotCommand * msg = (consai2_msgs__msg__RobotCommand *)malloc(sizeof(consai2_msgs__msg__RobotCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(consai2_msgs__msg__RobotCommand));
  bool success = consai2_msgs__msg__RobotCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
consai2_msgs__msg__RobotCommand__destroy(consai2_msgs__msg__RobotCommand * msg)
{
  if (msg) {
    consai2_msgs__msg__RobotCommand__fini(msg);
  }
  free(msg);
}


bool
consai2_msgs__msg__RobotCommand__Sequence__init(consai2_msgs__msg__RobotCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  consai2_msgs__msg__RobotCommand * data = NULL;
  if (size) {
    data = (consai2_msgs__msg__RobotCommand *)calloc(size, sizeof(consai2_msgs__msg__RobotCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = consai2_msgs__msg__RobotCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        consai2_msgs__msg__RobotCommand__fini(&data[i - 1]);
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
consai2_msgs__msg__RobotCommand__Sequence__fini(consai2_msgs__msg__RobotCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      consai2_msgs__msg__RobotCommand__fini(&array->data[i]);
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

consai2_msgs__msg__RobotCommand__Sequence *
consai2_msgs__msg__RobotCommand__Sequence__create(size_t size)
{
  consai2_msgs__msg__RobotCommand__Sequence * array = (consai2_msgs__msg__RobotCommand__Sequence *)malloc(sizeof(consai2_msgs__msg__RobotCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = consai2_msgs__msg__RobotCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
consai2_msgs__msg__RobotCommand__Sequence__destroy(consai2_msgs__msg__RobotCommand__Sequence * array)
{
  if (array) {
    consai2_msgs__msg__RobotCommand__Sequence__fini(array);
  }
  free(array);
}
