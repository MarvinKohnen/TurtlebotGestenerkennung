// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlebot3_control_services:srv/GetLatestMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlebot3_control_services/srv/detail/get_latest_map__rosidl_typesupport_introspection_c.h"
#include "turtlebot3_control_services/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlebot3_control_services/srv/detail/get_latest_map__functions.h"
#include "turtlebot3_control_services/srv/detail/get_latest_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot3_control_services__srv__GetLatestMap_Request__init(message_memory);
}

void turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_fini_function(void * message_memory)
{
  turtlebot3_control_services__srv__GetLatestMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_control_services__srv__GetLatestMap_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_members = {
  "turtlebot3_control_services__srv",  // message namespace
  "GetLatestMap_Request",  // message name
  1,  // number of fields
  sizeof(turtlebot3_control_services__srv__GetLatestMap_Request),
  turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_member_array,  // message members
  turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_type_support_handle = {
  0,
  &turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot3_control_services
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_control_services, srv, GetLatestMap_Request)() {
  if (!turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_type_support_handle.typesupport_identifier) {
    turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlebot3_control_services__srv__GetLatestMap_Request__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlebot3_control_services/srv/detail/get_latest_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlebot3_control_services/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlebot3_control_services/srv/detail/get_latest_map__functions.h"
// already included above
// #include "turtlebot3_control_services/srv/detail/get_latest_map__struct.h"


// Include directives for member types
// Member `map_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot3_control_services__srv__GetLatestMap_Response__init(message_memory);
}

void turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_fini_function(void * message_memory)
{
  turtlebot3_control_services__srv__GetLatestMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_member_array[1] = {
  {
    "map_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot3_control_services__srv__GetLatestMap_Response, map_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_members = {
  "turtlebot3_control_services__srv",  // message namespace
  "GetLatestMap_Response",  // message name
  1,  // number of fields
  sizeof(turtlebot3_control_services__srv__GetLatestMap_Response),
  turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_member_array,  // message members
  turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_type_support_handle = {
  0,
  &turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot3_control_services
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_control_services, srv, GetLatestMap_Response)() {
  if (!turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_type_support_handle.typesupport_identifier) {
    turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlebot3_control_services__srv__GetLatestMap_Response__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlebot3_control_services/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlebot3_control_services/srv/detail/get_latest_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_service_members = {
  "turtlebot3_control_services__srv",  // service namespace
  "GetLatestMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_Request_message_type_support_handle,
  NULL  // response message
  // turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_service_type_support_handle = {
  0,
  &turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_control_services, srv, GetLatestMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_control_services, srv, GetLatestMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot3_control_services
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_control_services, srv, GetLatestMap)() {
  if (!turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_service_type_support_handle.typesupport_identifier) {
    turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_control_services, srv, GetLatestMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot3_control_services, srv, GetLatestMap_Response)()->data;
  }

  return &turtlebot3_control_services__srv__detail__get_latest_map__rosidl_typesupport_introspection_c__GetLatestMap_service_type_support_handle;
}
