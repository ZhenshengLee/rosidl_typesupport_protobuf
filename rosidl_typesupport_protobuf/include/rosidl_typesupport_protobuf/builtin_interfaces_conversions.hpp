/* ================================ Apache 2.0 =================================
 * Copyright (C) 2026 The Garcia Team
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * =============================================================================
 */

#pragma once

#if __has_include(<builtin_interfaces/msg/time.hpp>) && __has_include(<builtin_interfaces/msg/time.h>)

#include <google/protobuf/timestamp.pb.h>
#include <google/protobuf/duration.pb.h>
#include <builtin_interfaces/msg/time.hpp>
#include <builtin_interfaces/msg/duration.hpp>
#include <builtin_interfaces/msg/time.h>
#include <builtin_interfaces/msg/duration.h>

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_protobuf_cpp
{

inline bool convert_to_proto(const ::builtin_interfaces::msg::Time & ros_msg, ::google::protobuf::Timestamp & pb_msg)
{
  pb_msg.set_seconds(ros_msg.sec);
  pb_msg.set_nanos(ros_msg.nanosec);
  return true;
}

inline bool convert_to_ros(const ::google::protobuf::Timestamp & pb_msg, ::builtin_interfaces::msg::Time & ros_msg)
{
  ros_msg.sec = pb_msg.seconds();
  ros_msg.nanosec = pb_msg.nanos();
  return true;
}

inline bool convert_to_proto(const ::builtin_interfaces::msg::Duration & ros_msg, ::google::protobuf::Duration & pb_msg)
{
  pb_msg.set_seconds(ros_msg.sec);
  pb_msg.set_nanos(ros_msg.nanosec);
  return true;
}

inline bool convert_to_ros(const ::google::protobuf::Duration & pb_msg, ::builtin_interfaces::msg::Duration & ros_msg)
{
  ros_msg.sec = pb_msg.seconds();
  ros_msg.nanosec = pb_msg.nanos();
  return true;
}

}  // namespace typesupport_protobuf_cpp

namespace typesupport_protobuf_c
{

inline bool convert_to_proto(const ::builtin_interfaces__msg__Time & ros_msg, ::google::protobuf::Timestamp & pb_msg)
{
  pb_msg.set_seconds(ros_msg.sec);
  pb_msg.set_nanos(ros_msg.nanosec);
  return true;
}

inline bool convert_to_ros(const ::google::protobuf::Timestamp & pb_msg, ::builtin_interfaces__msg__Time & ros_msg)
{
  ros_msg.sec = pb_msg.seconds();
  ros_msg.nanosec = pb_msg.nanos();
  return true;
}

inline bool convert_to_proto(const ::builtin_interfaces__msg__Duration & ros_msg, ::google::protobuf::Duration & pb_msg)
{
  pb_msg.set_seconds(ros_msg.sec);
  pb_msg.set_nanos(ros_msg.nanosec);
  return true;
}

inline bool convert_to_ros(const ::google::protobuf::Duration & pb_msg, ::builtin_interfaces__msg__Duration & ros_msg)
{
  ros_msg.sec = pb_msg.seconds();
  ros_msg.nanosec = pb_msg.nanos();
  return true;
}

}  // namespace typesupport_protobuf_c
}  // namespace msg
}  // namespace builtin_interfaces

#endif  // __has_include(<builtin_interfaces/msg/time.hpp>) && __has_include(<builtin_interfaces/msg/time.h>)
