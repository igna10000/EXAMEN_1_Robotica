// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interface:srv/Aibo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interface/srv/detail/aibo__rosidl_typesupport_introspection_c.h"
#include "interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interface/srv/detail/aibo__functions.h"
#include "interface/srv/detail/aibo__struct.h"


// Include directives for member types
// Member `input_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interface__srv__Aibo_Request__init(message_memory);
}

void interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_fini_function(void * message_memory)
{
  interface__srv__Aibo_Request__fini(message_memory);
}

size_t interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__size_function__Aibo_Request__input_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__get_const_function__Aibo_Request__input_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__get_function__Aibo_Request__input_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__fetch_function__Aibo_Request__input_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__get_const_function__Aibo_Request__input_array(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__assign_function__Aibo_Request__input_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__get_function__Aibo_Request__input_array(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__resize_function__Aibo_Request__input_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_message_member_array[1] = {
  {
    "input_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__srv__Aibo_Request, input_array),  // bytes offset in struct
    NULL,  // default value
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__size_function__Aibo_Request__input_array,  // size() function pointer
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__get_const_function__Aibo_Request__input_array,  // get_const(index) function pointer
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__get_function__Aibo_Request__input_array,  // get(index) function pointer
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__fetch_function__Aibo_Request__input_array,  // fetch(index, &value) function pointer
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__assign_function__Aibo_Request__input_array,  // assign(index, value) function pointer
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__resize_function__Aibo_Request__input_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_message_members = {
  "interface__srv",  // message namespace
  "Aibo_Request",  // message name
  1,  // number of fields
  sizeof(interface__srv__Aibo_Request),
  interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_message_member_array,  // message members
  interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_message_type_support_handle = {
  0,
  &interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Aibo_Request)() {
  if (!interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_message_type_support_handle.typesupport_identifier) {
    interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interface__srv__Aibo_Request__rosidl_typesupport_introspection_c__Aibo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interface/srv/detail/aibo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interface/srv/detail/aibo__functions.h"
// already included above
// #include "interface/srv/detail/aibo__struct.h"


// Include directives for member types
// Member `output_array`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interface__srv__Aibo_Response__init(message_memory);
}

void interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_fini_function(void * message_memory)
{
  interface__srv__Aibo_Response__fini(message_memory);
}

size_t interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__size_function__Aibo_Response__output_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__get_const_function__Aibo_Response__output_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__get_function__Aibo_Response__output_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__fetch_function__Aibo_Response__output_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__get_const_function__Aibo_Response__output_array(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__assign_function__Aibo_Response__output_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__get_function__Aibo_Response__output_array(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__resize_function__Aibo_Response__output_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_message_member_array[1] = {
  {
    "output_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__srv__Aibo_Response, output_array),  // bytes offset in struct
    NULL,  // default value
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__size_function__Aibo_Response__output_array,  // size() function pointer
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__get_const_function__Aibo_Response__output_array,  // get_const(index) function pointer
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__get_function__Aibo_Response__output_array,  // get(index) function pointer
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__fetch_function__Aibo_Response__output_array,  // fetch(index, &value) function pointer
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__assign_function__Aibo_Response__output_array,  // assign(index, value) function pointer
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__resize_function__Aibo_Response__output_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_message_members = {
  "interface__srv",  // message namespace
  "Aibo_Response",  // message name
  1,  // number of fields
  sizeof(interface__srv__Aibo_Response),
  interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_message_member_array,  // message members
  interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_message_type_support_handle = {
  0,
  &interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Aibo_Response)() {
  if (!interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_message_type_support_handle.typesupport_identifier) {
    interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interface__srv__Aibo_Response__rosidl_typesupport_introspection_c__Aibo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interface/srv/detail/aibo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_service_members = {
  "interface__srv",  // service namespace
  "Aibo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_Request_message_type_support_handle,
  NULL  // response message
  // interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_Response_message_type_support_handle
};

static rosidl_service_type_support_t interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_service_type_support_handle = {
  0,
  &interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Aibo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Aibo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Aibo)() {
  if (!interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_service_type_support_handle.typesupport_identifier) {
    interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Aibo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Aibo_Response)()->data;
  }

  return &interface__srv__detail__aibo__rosidl_typesupport_introspection_c__Aibo_service_type_support_handle;
}
