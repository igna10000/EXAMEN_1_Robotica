// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:srv/Aibo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__AIBO__BUILDER_HPP_
#define INTERFACE__SRV__DETAIL__AIBO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/srv/detail/aibo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace srv
{

namespace builder
{

class Init_Aibo_Request_input_array
{
public:
  Init_Aibo_Request_input_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface::srv::Aibo_Request input_array(::interface::srv::Aibo_Request::_input_array_type arg)
  {
    msg_.input_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::srv::Aibo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::srv::Aibo_Request>()
{
  return interface::srv::builder::Init_Aibo_Request_input_array();
}

}  // namespace interface


namespace interface
{

namespace srv
{

namespace builder
{

class Init_Aibo_Response_output_array
{
public:
  Init_Aibo_Response_output_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface::srv::Aibo_Response output_array(::interface::srv::Aibo_Response::_output_array_type arg)
  {
    msg_.output_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::srv::Aibo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::srv::Aibo_Response>()
{
  return interface::srv::builder::Init_Aibo_Response_output_array();
}

}  // namespace interface

#endif  // INTERFACE__SRV__DETAIL__AIBO__BUILDER_HPP_
