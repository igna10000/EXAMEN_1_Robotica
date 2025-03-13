// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interface:srv/Aibo.idl
// generated code does not contain a copyright notice
#include "interface/srv/detail/aibo__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface/srv/detail/aibo__struct.h"
#include "interface/srv/detail/aibo__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // input_array
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // input_array

// forward declare type support functions


using _Aibo_Request__ros_msg_type = interface__srv__Aibo_Request;

static bool _Aibo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Aibo_Request__ros_msg_type * ros_message = static_cast<const _Aibo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input_array
  {
    size_t size = ros_message->input_array.size;
    auto array_ptr = ros_message->input_array.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Aibo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Aibo_Request__ros_msg_type * ros_message = static_cast<_Aibo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input_array
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->input_array.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->input_array);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->input_array, size)) {
      fprintf(stderr, "failed to create array for field 'input_array'");
      return false;
    }
    auto array_ptr = ros_message->input_array.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface
size_t get_serialized_size_interface__srv__Aibo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Aibo_Request__ros_msg_type * ros_message = static_cast<const _Aibo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input_array
  {
    size_t array_size = ros_message->input_array.size;
    auto array_ptr = ros_message->input_array.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Aibo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface__srv__Aibo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface
size_t max_serialized_size_interface__srv__Aibo_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: input_array
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface__srv__Aibo_Request;
    is_plain =
      (
      offsetof(DataType, input_array) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Aibo_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface__srv__Aibo_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Aibo_Request = {
  "interface::srv",
  "Aibo_Request",
  _Aibo_Request__cdr_serialize,
  _Aibo_Request__cdr_deserialize,
  _Aibo_Request__get_serialized_size,
  _Aibo_Request__max_serialized_size
};

static rosidl_message_type_support_t _Aibo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Aibo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface, srv, Aibo_Request)() {
  return &_Aibo_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interface/srv/detail/aibo__struct.h"
// already included above
// #include "interface/srv/detail/aibo__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // output_array
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // output_array

// forward declare type support functions


using _Aibo_Response__ros_msg_type = interface__srv__Aibo_Response;

static bool _Aibo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Aibo_Response__ros_msg_type * ros_message = static_cast<const _Aibo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output_array
  {
    size_t size = ros_message->output_array.size;
    auto array_ptr = ros_message->output_array.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Aibo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Aibo_Response__ros_msg_type * ros_message = static_cast<_Aibo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output_array
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->output_array.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->output_array);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->output_array, size)) {
      fprintf(stderr, "failed to create array for field 'output_array'");
      return false;
    }
    auto array_ptr = ros_message->output_array.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface
size_t get_serialized_size_interface__srv__Aibo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Aibo_Response__ros_msg_type * ros_message = static_cast<const _Aibo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name output_array
  {
    size_t array_size = ros_message->output_array.size;
    auto array_ptr = ros_message->output_array.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Aibo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface__srv__Aibo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface
size_t max_serialized_size_interface__srv__Aibo_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: output_array
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface__srv__Aibo_Response;
    is_plain =
      (
      offsetof(DataType, output_array) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Aibo_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface__srv__Aibo_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Aibo_Response = {
  "interface::srv",
  "Aibo_Response",
  _Aibo_Response__cdr_serialize,
  _Aibo_Response__cdr_deserialize,
  _Aibo_Response__get_serialized_size,
  _Aibo_Response__max_serialized_size
};

static rosidl_message_type_support_t _Aibo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Aibo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface, srv, Aibo_Response)() {
  return &_Aibo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface/srv/aibo.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Aibo__callbacks = {
  "interface::srv",
  "Aibo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface, srv, Aibo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface, srv, Aibo_Response)(),
};

static rosidl_service_type_support_t Aibo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Aibo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface, srv, Aibo)() {
  return &Aibo__handle;
}

#if defined(__cplusplus)
}
#endif
