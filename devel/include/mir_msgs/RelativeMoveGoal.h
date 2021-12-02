// Generated by gencpp from file mir_msgs/RelativeMoveGoal.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_RELATIVEMOVEGOAL_H
#define MIR_MSGS_MESSAGE_RELATIVEMOVEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct RelativeMoveGoal_
{
  typedef RelativeMoveGoal_<ContainerAllocator> Type;

  RelativeMoveGoal_()
    : target_pose()
    , yaw(0.0)
    , collision_detection(false)
    , max_linear_speed(0.0)
    , max_rotational_speed(0.0)
    , pid_dist_offset(0.0)  {
    }
  RelativeMoveGoal_(const ContainerAllocator& _alloc)
    : target_pose(_alloc)
    , yaw(0.0)
    , collision_detection(false)
    , max_linear_speed(0.0)
    , max_rotational_speed(0.0)
    , pid_dist_offset(0.0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _target_pose_type;
  _target_pose_type target_pose;

   typedef double _yaw_type;
  _yaw_type yaw;

   typedef uint8_t _collision_detection_type;
  _collision_detection_type collision_detection;

   typedef double _max_linear_speed_type;
  _max_linear_speed_type max_linear_speed;

   typedef double _max_rotational_speed_type;
  _max_rotational_speed_type max_rotational_speed;

   typedef double _pid_dist_offset_type;
  _pid_dist_offset_type pid_dist_offset;





  typedef boost::shared_ptr< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> const> ConstPtr;

}; // struct RelativeMoveGoal_

typedef ::mir_msgs::RelativeMoveGoal_<std::allocator<void> > RelativeMoveGoal;

typedef boost::shared_ptr< ::mir_msgs::RelativeMoveGoal > RelativeMoveGoalPtr;
typedef boost::shared_ptr< ::mir_msgs::RelativeMoveGoal const> RelativeMoveGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator1> & lhs, const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator2> & rhs)
{
  return lhs.target_pose == rhs.target_pose &&
    lhs.yaw == rhs.yaw &&
    lhs.collision_detection == rhs.collision_detection &&
    lhs.max_linear_speed == rhs.max_linear_speed &&
    lhs.max_rotational_speed == rhs.max_rotational_speed &&
    lhs.pid_dist_offset == rhs.pid_dist_offset;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator1> & lhs, const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2047e97f36d279d82a3f2f31604cdd0";
  }

  static const char* value(const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2047e97f36d279dULL;
  static const uint64_t static_value2 = 0x82a3f2f31604cdd0ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/RelativeMoveGoal";
  }

  static const char* value(const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"geometry_msgs/PoseStamped target_pose\n"
"float64 yaw\n"
"bool collision_detection\n"
"float64 max_linear_speed\n"
"float64 max_rotational_speed\n"
"float64 pid_dist_offset\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target_pose);
      stream.next(m.yaw);
      stream.next(m.collision_detection);
      stream.next(m.max_linear_speed);
      stream.next(m.max_rotational_speed);
      stream.next(m.pid_dist_offset);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RelativeMoveGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::RelativeMoveGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::RelativeMoveGoal_<ContainerAllocator>& v)
  {
    s << indent << "target_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.target_pose);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "collision_detection: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.collision_detection);
    s << indent << "max_linear_speed: ";
    Printer<double>::stream(s, indent + "  ", v.max_linear_speed);
    s << indent << "max_rotational_speed: ";
    Printer<double>::stream(s, indent + "  ", v.max_rotational_speed);
    s << indent << "pid_dist_offset: ";
    Printer<double>::stream(s, indent + "  ", v.pid_dist_offset);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_RELATIVEMOVEGOAL_H