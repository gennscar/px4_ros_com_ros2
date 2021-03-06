// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorWind.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_WIND__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_WIND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EstimatorWind in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorWind
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  float windspeed_north;
  float windspeed_east;
  float variance_north;
  float variance_east;
  float tas_innov;
  float tas_innov_var;
  float beta_innov;
  float beta_innov_var;
} px4_msgs__msg__EstimatorWind;

// Struct for a sequence of px4_msgs__msg__EstimatorWind.
typedef struct px4_msgs__msg__EstimatorWind__Sequence
{
  px4_msgs__msg__EstimatorWind * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorWind__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_WIND__STRUCT_H_
