// Generated by gencpp from file mir_msgs/MirMoveBaseGoal.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_MIRMOVEBASEGOAL_H
#define MIR_MSGS_MESSAGE_MIRMOVEBASEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>
#include <nav_msgs/Path.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct MirMoveBaseGoal_
{
  typedef MirMoveBaseGoal_<ContainerAllocator> Type;

  MirMoveBaseGoal_()
    : target_pose()
    , path()
    , max_plan_time(0.0)
    , clear_costmaps(false)  {
    }
  MirMoveBaseGoal_(const ContainerAllocator& _alloc)
    : target_pose(_alloc)
    , path(_alloc)
    , max_plan_time(0.0)
    , clear_costmaps(false)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _target_pose_type;
  _target_pose_type target_pose;

   typedef  ::nav_msgs::Path_<ContainerAllocator>  _path_type;
  _path_type path;

   typedef float _max_plan_time_type;
  _max_plan_time_type max_plan_time;

   typedef uint8_t _clear_costmaps_type;
  _clear_costmaps_type clear_costmaps;





  typedef boost::shared_ptr< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MirMoveBaseGoal_

typedef ::mir_msgs::MirMoveBaseGoal_<std::allocator<void> > MirMoveBaseGoal;

typedef boost::shared_ptr< ::mir_msgs::MirMoveBaseGoal > MirMoveBaseGoalPtr;
typedef boost::shared_ptr< ::mir_msgs::MirMoveBaseGoal const> MirMoveBaseGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator1> & lhs, const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator2> & rhs)
{
  return lhs.target_pose == rhs.target_pose &&
    lhs.path == rhs.path &&
    lhs.max_plan_time == rhs.max_plan_time &&
    lhs.clear_costmaps == rhs.clear_costmaps;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator1> & lhs, const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "df049e76f50974754afaee62cac3ef4e";
  }

  static const char* value(const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdf049e76f5097475ULL;
  static const uint64_t static_value2 = 0x4afaee62cac3ef4eULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/MirMoveBaseGoal";
  }

  static const char* value(const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"geometry_msgs/PoseStamped target_pose\n"
"nav_msgs/Path path\n"
"float32 max_plan_time\n"
"bool clear_costmaps\n"
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
"\n"
"================================================================================\n"
"MSG: nav_msgs/Path\n"
"#An array of poses that represents a Path for a robot to follow\n"
"Header header\n"
"geometry_msgs/PoseStamped[] poses\n"
;
  }

  static const char* value(const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target_pose);
      stream.next(m.path);
      stream.next(m.max_plan_time);
      stream.next(m.clear_costmaps);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MirMoveBaseGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::MirMoveBaseGoal_<ContainerAllocator>& v)
  {
    s << indent << "target_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.target_pose);
    s << indent << "path: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.path);
    s << indent << "max_plan_time: ";
    Printer<float>::stream(s, indent + "  ", v.max_plan_time);
    s << indent << "clear_costmaps: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear_costmaps);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_MIRMOVEBASEGOAL_H
