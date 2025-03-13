// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:srv/Aibo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__AIBO__TRAITS_HPP_
#define INTERFACE__SRV__DETAIL__AIBO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/srv/detail/aibo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Aibo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input_array
  {
    if (msg.input_array.size() == 0) {
      out << "input_array: []";
    } else {
      out << "input_array: [";
      size_t pending_items = msg.input_array.size();
      for (auto item : msg.input_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Aibo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_array.size() == 0) {
      out << "input_array: []\n";
    } else {
      out << "input_array:\n";
      for (auto item : msg.input_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Aibo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::srv::Aibo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface::srv::Aibo_Request & msg)
{
  return interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface::srv::Aibo_Request>()
{
  return "interface::srv::Aibo_Request";
}

template<>
inline const char * name<interface::srv::Aibo_Request>()
{
  return "interface/srv/Aibo_Request";
}

template<>
struct has_fixed_size<interface::srv::Aibo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface::srv::Aibo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface::srv::Aibo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Aibo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: output_array
  {
    if (msg.output_array.size() == 0) {
      out << "output_array: []";
    } else {
      out << "output_array: [";
      size_t pending_items = msg.output_array.size();
      for (auto item : msg.output_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Aibo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_array.size() == 0) {
      out << "output_array: []\n";
    } else {
      out << "output_array:\n";
      for (auto item : msg.output_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Aibo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::srv::Aibo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface::srv::Aibo_Response & msg)
{
  return interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface::srv::Aibo_Response>()
{
  return "interface::srv::Aibo_Response";
}

template<>
inline const char * name<interface::srv::Aibo_Response>()
{
  return "interface/srv/Aibo_Response";
}

template<>
struct has_fixed_size<interface::srv::Aibo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface::srv::Aibo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface::srv::Aibo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface::srv::Aibo>()
{
  return "interface::srv::Aibo";
}

template<>
inline const char * name<interface::srv::Aibo>()
{
  return "interface/srv/Aibo";
}

template<>
struct has_fixed_size<interface::srv::Aibo>
  : std::integral_constant<
    bool,
    has_fixed_size<interface::srv::Aibo_Request>::value &&
    has_fixed_size<interface::srv::Aibo_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface::srv::Aibo>
  : std::integral_constant<
    bool,
    has_bounded_size<interface::srv::Aibo_Request>::value &&
    has_bounded_size<interface::srv::Aibo_Response>::value
  >
{
};

template<>
struct is_service<interface::srv::Aibo>
  : std::true_type
{
};

template<>
struct is_service_request<interface::srv::Aibo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface::srv::Aibo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__SRV__DETAIL__AIBO__TRAITS_HPP_
