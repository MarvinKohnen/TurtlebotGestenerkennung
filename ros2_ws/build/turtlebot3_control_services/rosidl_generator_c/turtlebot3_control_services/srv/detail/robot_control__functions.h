// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlebot3_control_services:srv/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_CONTROL_SERVICES__SRV__DETAIL__ROBOT_CONTROL__FUNCTIONS_H_
#define TURTLEBOT3_CONTROL_SERVICES__SRV__DETAIL__ROBOT_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtlebot3_control_services/msg/rosidl_generator_c__visibility_control.h"

#include "turtlebot3_control_services/srv/detail/robot_control__struct.h"

/// Initialize srv/RobotControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlebot3_control_services__srv__RobotControl_Request
 * )) before or use
 * turtlebot3_control_services__srv__RobotControl_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Request__init(turtlebot3_control_services__srv__RobotControl_Request * msg);

/// Finalize srv/RobotControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
void
turtlebot3_control_services__srv__RobotControl_Request__fini(turtlebot3_control_services__srv__RobotControl_Request * msg);

/// Create srv/RobotControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlebot3_control_services__srv__RobotControl_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
turtlebot3_control_services__srv__RobotControl_Request *
turtlebot3_control_services__srv__RobotControl_Request__create();

/// Destroy srv/RobotControl message.
/**
 * It calls
 * turtlebot3_control_services__srv__RobotControl_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
void
turtlebot3_control_services__srv__RobotControl_Request__destroy(turtlebot3_control_services__srv__RobotControl_Request * msg);

/// Check for srv/RobotControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Request__are_equal(const turtlebot3_control_services__srv__RobotControl_Request * lhs, const turtlebot3_control_services__srv__RobotControl_Request * rhs);

/// Copy a srv/RobotControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Request__copy(
  const turtlebot3_control_services__srv__RobotControl_Request * input,
  turtlebot3_control_services__srv__RobotControl_Request * output);

/// Initialize array of srv/RobotControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlebot3_control_services__srv__RobotControl_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Request__Sequence__init(turtlebot3_control_services__srv__RobotControl_Request__Sequence * array, size_t size);

/// Finalize array of srv/RobotControl messages.
/**
 * It calls
 * turtlebot3_control_services__srv__RobotControl_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
void
turtlebot3_control_services__srv__RobotControl_Request__Sequence__fini(turtlebot3_control_services__srv__RobotControl_Request__Sequence * array);

/// Create array of srv/RobotControl messages.
/**
 * It allocates the memory for the array and calls
 * turtlebot3_control_services__srv__RobotControl_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
turtlebot3_control_services__srv__RobotControl_Request__Sequence *
turtlebot3_control_services__srv__RobotControl_Request__Sequence__create(size_t size);

/// Destroy array of srv/RobotControl messages.
/**
 * It calls
 * turtlebot3_control_services__srv__RobotControl_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
void
turtlebot3_control_services__srv__RobotControl_Request__Sequence__destroy(turtlebot3_control_services__srv__RobotControl_Request__Sequence * array);

/// Check for srv/RobotControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Request__Sequence__are_equal(const turtlebot3_control_services__srv__RobotControl_Request__Sequence * lhs, const turtlebot3_control_services__srv__RobotControl_Request__Sequence * rhs);

/// Copy an array of srv/RobotControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Request__Sequence__copy(
  const turtlebot3_control_services__srv__RobotControl_Request__Sequence * input,
  turtlebot3_control_services__srv__RobotControl_Request__Sequence * output);

/// Initialize srv/RobotControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlebot3_control_services__srv__RobotControl_Response
 * )) before or use
 * turtlebot3_control_services__srv__RobotControl_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Response__init(turtlebot3_control_services__srv__RobotControl_Response * msg);

/// Finalize srv/RobotControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
void
turtlebot3_control_services__srv__RobotControl_Response__fini(turtlebot3_control_services__srv__RobotControl_Response * msg);

/// Create srv/RobotControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlebot3_control_services__srv__RobotControl_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
turtlebot3_control_services__srv__RobotControl_Response *
turtlebot3_control_services__srv__RobotControl_Response__create();

/// Destroy srv/RobotControl message.
/**
 * It calls
 * turtlebot3_control_services__srv__RobotControl_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
void
turtlebot3_control_services__srv__RobotControl_Response__destroy(turtlebot3_control_services__srv__RobotControl_Response * msg);

/// Check for srv/RobotControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Response__are_equal(const turtlebot3_control_services__srv__RobotControl_Response * lhs, const turtlebot3_control_services__srv__RobotControl_Response * rhs);

/// Copy a srv/RobotControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Response__copy(
  const turtlebot3_control_services__srv__RobotControl_Response * input,
  turtlebot3_control_services__srv__RobotControl_Response * output);

/// Initialize array of srv/RobotControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlebot3_control_services__srv__RobotControl_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Response__Sequence__init(turtlebot3_control_services__srv__RobotControl_Response__Sequence * array, size_t size);

/// Finalize array of srv/RobotControl messages.
/**
 * It calls
 * turtlebot3_control_services__srv__RobotControl_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
void
turtlebot3_control_services__srv__RobotControl_Response__Sequence__fini(turtlebot3_control_services__srv__RobotControl_Response__Sequence * array);

/// Create array of srv/RobotControl messages.
/**
 * It allocates the memory for the array and calls
 * turtlebot3_control_services__srv__RobotControl_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
turtlebot3_control_services__srv__RobotControl_Response__Sequence *
turtlebot3_control_services__srv__RobotControl_Response__Sequence__create(size_t size);

/// Destroy array of srv/RobotControl messages.
/**
 * It calls
 * turtlebot3_control_services__srv__RobotControl_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
void
turtlebot3_control_services__srv__RobotControl_Response__Sequence__destroy(turtlebot3_control_services__srv__RobotControl_Response__Sequence * array);

/// Check for srv/RobotControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Response__Sequence__are_equal(const turtlebot3_control_services__srv__RobotControl_Response__Sequence * lhs, const turtlebot3_control_services__srv__RobotControl_Response__Sequence * rhs);

/// Copy an array of srv/RobotControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlebot3_control_services
bool
turtlebot3_control_services__srv__RobotControl_Response__Sequence__copy(
  const turtlebot3_control_services__srv__RobotControl_Response__Sequence * input,
  turtlebot3_control_services__srv__RobotControl_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLEBOT3_CONTROL_SERVICES__SRV__DETAIL__ROBOT_CONTROL__FUNCTIONS_H_
