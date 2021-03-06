// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ManualControlSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__BUILDER_HPP_

#include "px4_msgs/msg/detail/manual_control_setpoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ManualControlSetpoint_aux6
{
public:
  explicit Init_ManualControlSetpoint_aux6(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ManualControlSetpoint aux6(::px4_msgs::msg::ManualControlSetpoint::_aux6_type arg)
  {
    msg_.aux6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_aux5
{
public:
  explicit Init_ManualControlSetpoint_aux5(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_aux6 aux5(::px4_msgs::msg::ManualControlSetpoint::_aux5_type arg)
  {
    msg_.aux5 = std::move(arg);
    return Init_ManualControlSetpoint_aux6(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_aux4
{
public:
  explicit Init_ManualControlSetpoint_aux4(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_aux5 aux4(::px4_msgs::msg::ManualControlSetpoint::_aux4_type arg)
  {
    msg_.aux4 = std::move(arg);
    return Init_ManualControlSetpoint_aux5(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_aux3
{
public:
  explicit Init_ManualControlSetpoint_aux3(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_aux4 aux3(::px4_msgs::msg::ManualControlSetpoint::_aux3_type arg)
  {
    msg_.aux3 = std::move(arg);
    return Init_ManualControlSetpoint_aux4(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_aux2
{
public:
  explicit Init_ManualControlSetpoint_aux2(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_aux3 aux2(::px4_msgs::msg::ManualControlSetpoint::_aux2_type arg)
  {
    msg_.aux2 = std::move(arg);
    return Init_ManualControlSetpoint_aux3(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_aux1
{
public:
  explicit Init_ManualControlSetpoint_aux1(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_aux2 aux1(::px4_msgs::msg::ManualControlSetpoint::_aux1_type arg)
  {
    msg_.aux1 = std::move(arg);
    return Init_ManualControlSetpoint_aux2(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_flaps
{
public:
  explicit Init_ManualControlSetpoint_flaps(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_aux1 flaps(::px4_msgs::msg::ManualControlSetpoint::_flaps_type arg)
  {
    msg_.flaps = std::move(arg);
    return Init_ManualControlSetpoint_aux1(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_r
{
public:
  explicit Init_ManualControlSetpoint_r(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_flaps r(::px4_msgs::msg::ManualControlSetpoint::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ManualControlSetpoint_flaps(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_z
{
public:
  explicit Init_ManualControlSetpoint_z(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_r z(::px4_msgs::msg::ManualControlSetpoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ManualControlSetpoint_r(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_y
{
public:
  explicit Init_ManualControlSetpoint_y(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_z y(::px4_msgs::msg::ManualControlSetpoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ManualControlSetpoint_z(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_x
{
public:
  explicit Init_ManualControlSetpoint_x(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_y x(::px4_msgs::msg::ManualControlSetpoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ManualControlSetpoint_y(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_data_source
{
public:
  explicit Init_ManualControlSetpoint_data_source(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_x data_source(::px4_msgs::msg::ManualControlSetpoint::_data_source_type arg)
  {
    msg_.data_source = std::move(arg);
    return Init_ManualControlSetpoint_x(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_timestamp_sample
{
public:
  explicit Init_ManualControlSetpoint_timestamp_sample(::px4_msgs::msg::ManualControlSetpoint & msg)
  : msg_(msg)
  {}
  Init_ManualControlSetpoint_data_source timestamp_sample(::px4_msgs::msg::ManualControlSetpoint::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_ManualControlSetpoint_data_source(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

class Init_ManualControlSetpoint_timestamp
{
public:
  Init_ManualControlSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManualControlSetpoint_timestamp_sample timestamp(::px4_msgs::msg::ManualControlSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ManualControlSetpoint_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ManualControlSetpoint>()
{
  return px4_msgs::msg::builder::Init_ManualControlSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__BUILDER_HPP_
