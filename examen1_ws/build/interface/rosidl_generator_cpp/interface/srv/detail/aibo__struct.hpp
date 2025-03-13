// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:srv/Aibo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__AIBO__STRUCT_HPP_
#define INTERFACE__SRV__DETAIL__AIBO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface__srv__Aibo_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface__srv__Aibo_Request __declspec(deprecated)
#endif

namespace interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Aibo_Request_
{
  using Type = Aibo_Request_<ContainerAllocator>;

  explicit Aibo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Aibo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _input_array_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_array_type input_array;

  // setters for named parameter idiom
  Type & set__input_array(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::srv::Aibo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::srv::Aibo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::srv::Aibo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::srv::Aibo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::srv::Aibo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Aibo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::srv::Aibo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Aibo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::srv::Aibo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::srv::Aibo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__srv__Aibo_Request
    std::shared_ptr<interface::srv::Aibo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__srv__Aibo_Request
    std::shared_ptr<interface::srv::Aibo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Aibo_Request_ & other) const
  {
    if (this->input_array != other.input_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const Aibo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Aibo_Request_

// alias to use template instance with default allocator
using Aibo_Request =
  interface::srv::Aibo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface


#ifndef _WIN32
# define DEPRECATED__interface__srv__Aibo_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface__srv__Aibo_Response __declspec(deprecated)
#endif

namespace interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Aibo_Response_
{
  using Type = Aibo_Response_<ContainerAllocator>;

  explicit Aibo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Aibo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _output_array_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _output_array_type output_array;

  // setters for named parameter idiom
  Type & set__output_array(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->output_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::srv::Aibo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::srv::Aibo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::srv::Aibo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::srv::Aibo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::srv::Aibo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Aibo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::srv::Aibo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Aibo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::srv::Aibo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::srv::Aibo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__srv__Aibo_Response
    std::shared_ptr<interface::srv::Aibo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__srv__Aibo_Response
    std::shared_ptr<interface::srv::Aibo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Aibo_Response_ & other) const
  {
    if (this->output_array != other.output_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const Aibo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Aibo_Response_

// alias to use template instance with default allocator
using Aibo_Response =
  interface::srv::Aibo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface

namespace interface
{

namespace srv
{

struct Aibo
{
  using Request = interface::srv::Aibo_Request;
  using Response = interface::srv::Aibo_Response;
};

}  // namespace srv

}  // namespace interface

#endif  // INTERFACE__SRV__DETAIL__AIBO__STRUCT_HPP_
