// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CameraTriggerSecondary.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER_SECONDARY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER_SECONDARY__BUILDER_HPP_

#include "px4_msgs/msg/detail/camera_trigger_secondary__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraTriggerSecondary_feedback
{
public:
  explicit Init_CameraTriggerSecondary_feedback(::px4_msgs::msg::CameraTriggerSecondary & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CameraTriggerSecondary feedback(::px4_msgs::msg::CameraTriggerSecondary::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CameraTriggerSecondary msg_;
};

class Init_CameraTriggerSecondary_seq
{
public:
  explicit Init_CameraTriggerSecondary_seq(::px4_msgs::msg::CameraTriggerSecondary & msg)
  : msg_(msg)
  {}
  Init_CameraTriggerSecondary_feedback seq(::px4_msgs::msg::CameraTriggerSecondary::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_CameraTriggerSecondary_feedback(msg_);
  }

private:
  ::px4_msgs::msg::CameraTriggerSecondary msg_;
};

class Init_CameraTriggerSecondary_timestamp_utc
{
public:
  explicit Init_CameraTriggerSecondary_timestamp_utc(::px4_msgs::msg::CameraTriggerSecondary & msg)
  : msg_(msg)
  {}
  Init_CameraTriggerSecondary_seq timestamp_utc(::px4_msgs::msg::CameraTriggerSecondary::_timestamp_utc_type arg)
  {
    msg_.timestamp_utc = std::move(arg);
    return Init_CameraTriggerSecondary_seq(msg_);
  }

private:
  ::px4_msgs::msg::CameraTriggerSecondary msg_;
};

class Init_CameraTriggerSecondary_timestamp
{
public:
  Init_CameraTriggerSecondary_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraTriggerSecondary_timestamp_utc timestamp(::px4_msgs::msg::CameraTriggerSecondary::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraTriggerSecondary_timestamp_utc(msg_);
  }

private:
  ::px4_msgs::msg::CameraTriggerSecondary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CameraTriggerSecondary>()
{
  return px4_msgs::msg::builder::Init_CameraTriggerSecondary_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER_SECONDARY__BUILDER_HPP_
