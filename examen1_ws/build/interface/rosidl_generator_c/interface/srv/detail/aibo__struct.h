// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:srv/Aibo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__AIBO__STRUCT_H_
#define INTERFACE__SRV__DETAIL__AIBO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_array'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Aibo in the package interface.
typedef struct interface__srv__Aibo_Request
{
  rosidl_runtime_c__double__Sequence input_array;
} interface__srv__Aibo_Request;

// Struct for a sequence of interface__srv__Aibo_Request.
typedef struct interface__srv__Aibo_Request__Sequence
{
  interface__srv__Aibo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__srv__Aibo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output_array'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Aibo in the package interface.
typedef struct interface__srv__Aibo_Response
{
  rosidl_runtime_c__double__Sequence output_array;
} interface__srv__Aibo_Response;

// Struct for a sequence of interface__srv__Aibo_Response.
typedef struct interface__srv__Aibo_Response__Sequence
{
  interface__srv__Aibo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__srv__Aibo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__SRV__DETAIL__AIBO__STRUCT_H_
