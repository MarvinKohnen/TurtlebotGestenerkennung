// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlebot3_control_services:srv/GenerateHeatmap.idl
// generated code does not contain a copyright notice
#include "turtlebot3_control_services/srv/detail/generate_heatmap__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
turtlebot3_control_services__srv__GenerateHeatmap_Request__init(turtlebot3_control_services__srv__GenerateHeatmap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // coordinate_set
  return true;
}

void
turtlebot3_control_services__srv__GenerateHeatmap_Request__fini(turtlebot3_control_services__srv__GenerateHeatmap_Request * msg)
{
  if (!msg) {
    return;
  }
  // coordinate_set
}

bool
turtlebot3_control_services__srv__GenerateHeatmap_Request__are_equal(const turtlebot3_control_services__srv__GenerateHeatmap_Request * lhs, const turtlebot3_control_services__srv__GenerateHeatmap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // coordinate_set
  if (lhs->coordinate_set != rhs->coordinate_set) {
    return false;
  }
  return true;
}

bool
turtlebot3_control_services__srv__GenerateHeatmap_Request__copy(
  const turtlebot3_control_services__srv__GenerateHeatmap_Request * input,
  turtlebot3_control_services__srv__GenerateHeatmap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // coordinate_set
  output->coordinate_set = input->coordinate_set;
  return true;
}

turtlebot3_control_services__srv__GenerateHeatmap_Request *
turtlebot3_control_services__srv__GenerateHeatmap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_control_services__srv__GenerateHeatmap_Request * msg = (turtlebot3_control_services__srv__GenerateHeatmap_Request *)allocator.allocate(sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Request));
  bool success = turtlebot3_control_services__srv__GenerateHeatmap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlebot3_control_services__srv__GenerateHeatmap_Request__destroy(turtlebot3_control_services__srv__GenerateHeatmap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlebot3_control_services__srv__GenerateHeatmap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence__init(turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_control_services__srv__GenerateHeatmap_Request * data = NULL;

  if (size) {
    data = (turtlebot3_control_services__srv__GenerateHeatmap_Request *)allocator.zero_allocate(size, sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlebot3_control_services__srv__GenerateHeatmap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlebot3_control_services__srv__GenerateHeatmap_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence__fini(turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlebot3_control_services__srv__GenerateHeatmap_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence *
turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence * array = (turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence *)allocator.allocate(sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence__destroy(turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence__are_equal(const turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence * lhs, const turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlebot3_control_services__srv__GenerateHeatmap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence__copy(
  const turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence * input,
  turtlebot3_control_services__srv__GenerateHeatmap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlebot3_control_services__srv__GenerateHeatmap_Request * data =
      (turtlebot3_control_services__srv__GenerateHeatmap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlebot3_control_services__srv__GenerateHeatmap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlebot3_control_services__srv__GenerateHeatmap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlebot3_control_services__srv__GenerateHeatmap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtlebot3_control_services__srv__GenerateHeatmap_Response__init(turtlebot3_control_services__srv__GenerateHeatmap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
turtlebot3_control_services__srv__GenerateHeatmap_Response__fini(turtlebot3_control_services__srv__GenerateHeatmap_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
turtlebot3_control_services__srv__GenerateHeatmap_Response__are_equal(const turtlebot3_control_services__srv__GenerateHeatmap_Response * lhs, const turtlebot3_control_services__srv__GenerateHeatmap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
turtlebot3_control_services__srv__GenerateHeatmap_Response__copy(
  const turtlebot3_control_services__srv__GenerateHeatmap_Response * input,
  turtlebot3_control_services__srv__GenerateHeatmap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

turtlebot3_control_services__srv__GenerateHeatmap_Response *
turtlebot3_control_services__srv__GenerateHeatmap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_control_services__srv__GenerateHeatmap_Response * msg = (turtlebot3_control_services__srv__GenerateHeatmap_Response *)allocator.allocate(sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Response));
  bool success = turtlebot3_control_services__srv__GenerateHeatmap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlebot3_control_services__srv__GenerateHeatmap_Response__destroy(turtlebot3_control_services__srv__GenerateHeatmap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlebot3_control_services__srv__GenerateHeatmap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence__init(turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_control_services__srv__GenerateHeatmap_Response * data = NULL;

  if (size) {
    data = (turtlebot3_control_services__srv__GenerateHeatmap_Response *)allocator.zero_allocate(size, sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlebot3_control_services__srv__GenerateHeatmap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlebot3_control_services__srv__GenerateHeatmap_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence__fini(turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlebot3_control_services__srv__GenerateHeatmap_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence *
turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence * array = (turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence *)allocator.allocate(sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence__destroy(turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence__are_equal(const turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence * lhs, const turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlebot3_control_services__srv__GenerateHeatmap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence__copy(
  const turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence * input,
  turtlebot3_control_services__srv__GenerateHeatmap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlebot3_control_services__srv__GenerateHeatmap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlebot3_control_services__srv__GenerateHeatmap_Response * data =
      (turtlebot3_control_services__srv__GenerateHeatmap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlebot3_control_services__srv__GenerateHeatmap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlebot3_control_services__srv__GenerateHeatmap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlebot3_control_services__srv__GenerateHeatmap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
