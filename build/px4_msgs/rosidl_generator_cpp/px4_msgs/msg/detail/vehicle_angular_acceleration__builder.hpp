// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleAngularAcceleration.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_ACCELERATION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_ACCELERATION__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_angular_acceleration__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleAngularAcceleration_xyz
{
public:
  explicit Init_VehicleAngularAcceleration_xyz(::px4_msgs::msg::VehicleAngularAcceleration & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleAngularAcceleration xyz(::px4_msgs::msg::VehicleAngularAcceleration::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAngularAcceleration msg_;
};

class Init_VehicleAngularAcceleration_timestamp_sample
{
public:
  explicit Init_VehicleAngularAcceleration_timestamp_sample(::px4_msgs::msg::VehicleAngularAcceleration & msg)
  : msg_(msg)
  {}
  Init_VehicleAngularAcceleration_xyz timestamp_sample(::px4_msgs::msg::VehicleAngularAcceleration::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleAngularAcceleration_xyz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAngularAcceleration msg_;
};

class Init_VehicleAngularAcceleration_timestamp
{
public:
  Init_VehicleAngularAcceleration_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleAngularAcceleration_timestamp_sample timestamp(::px4_msgs::msg::VehicleAngularAcceleration::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleAngularAcceleration_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAngularAcceleration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleAngularAcceleration>()
{
  return px4_msgs::msg::builder::Init_VehicleAngularAcceleration_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_ACCELERATION__BUILDER_HPP_
