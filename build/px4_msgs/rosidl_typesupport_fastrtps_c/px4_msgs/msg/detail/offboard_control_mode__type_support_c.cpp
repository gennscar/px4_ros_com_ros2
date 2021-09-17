// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/offboard_control_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/offboard_control_mode__struct.h"
#include "px4_msgs/msg/detail/offboard_control_mode__functions.h"
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


// forward declare type support functions


using _OffboardControlMode__ros_msg_type = px4_msgs__msg__OffboardControlMode;

static bool _OffboardControlMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OffboardControlMode__ros_msg_type * ros_message = static_cast<const _OffboardControlMode__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: position
  {
    cdr << (ros_message->position ? true : false);
  }

  // Field name: velocity
  {
    cdr << (ros_message->velocity ? true : false);
  }

  // Field name: acceleration
  {
    cdr << (ros_message->acceleration ? true : false);
  }

  // Field name: attitude
  {
    cdr << (ros_message->attitude ? true : false);
  }

  // Field name: body_rate
  {
    cdr << (ros_message->body_rate ? true : false);
  }

  return true;
}

static bool _OffboardControlMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OffboardControlMode__ros_msg_type * ros_message = static_cast<_OffboardControlMode__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->position = tmp ? true : false;
  }

  // Field name: velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->velocity = tmp ? true : false;
  }

  // Field name: acceleration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acceleration = tmp ? true : false;
  }

  // Field name: attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->attitude = tmp ? true : false;
  }

  // Field name: body_rate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->body_rate = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__OffboardControlMode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OffboardControlMode__ros_msg_type * ros_message = static_cast<const _OffboardControlMode__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  {
    size_t item_size = sizeof(ros_message->position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attitude
  {
    size_t item_size = sizeof(ros_message->attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_rate
  {
    size_t item_size = sizeof(ros_message->body_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OffboardControlMode__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__OffboardControlMode(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__OffboardControlMode(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: body_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OffboardControlMode__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__OffboardControlMode(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OffboardControlMode = {
  "px4_msgs::msg",
  "OffboardControlMode",
  _OffboardControlMode__cdr_serialize,
  _OffboardControlMode__cdr_deserialize,
  _OffboardControlMode__get_serialized_size,
  _OffboardControlMode__max_serialized_size
};

static rosidl_message_type_support_t _OffboardControlMode__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OffboardControlMode,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, OffboardControlMode)() {
  return &_OffboardControlMode__type_support;
}

#if defined(__cplusplus)
}
#endif
