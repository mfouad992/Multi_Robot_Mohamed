// Generated by gencpp from file mir_msgs/MirMoveBaseResult.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_MIRMOVEBASERESULT_H
#define MIR_MSGS_MESSAGE_MIRMOVEBASERESULT_H


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
struct MirMoveBaseResult_
{
  typedef MirMoveBaseResult_<ContainerAllocator> Type;

  MirMoveBaseResult_()
    : end_state(0)
    , end_pose()  {
    }
  MirMoveBaseResult_(const ContainerAllocator& _alloc)
    : end_state(0)
    , end_pose(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _end_state_type;
  _end_state_type end_state;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _end_pose_type;
  _end_pose_type end_pose;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNDEFINED)
  #undef UNDEFINED
#endif
#if defined(_WIN32) && defined(GOAL_REACHED)
  #undef GOAL_REACHED
#endif
#if defined(_WIN32) && defined(FAILED)
  #undef FAILED
#endif
#if defined(_WIN32) && defined(FAILED_NO_PATH)
  #undef FAILED_NO_PATH
#endif
#if defined(_WIN32) && defined(FAILED_GOAL_IN_STATIC_OBSTACLE)
  #undef FAILED_GOAL_IN_STATIC_OBSTACLE
#endif
#if defined(_WIN32) && defined(FAILED_GOAL_IN_FORBIDDEN_AREA)
  #undef FAILED_GOAL_IN_FORBIDDEN_AREA
#endif
#if defined(_WIN32) && defined(FAILED_GOAL_IN_DYNAMIC_OBSTACLE)
  #undef FAILED_GOAL_IN_DYNAMIC_OBSTACLE
#endif
#if defined(_WIN32) && defined(FAILED_ROBOT_IN_COLLISION)
  #undef FAILED_ROBOT_IN_COLLISION
#endif
#if defined(_WIN32) && defined(FAILED_ROBOT_IN_FORBIDDEN_AREA)
  #undef FAILED_ROBOT_IN_FORBIDDEN_AREA
#endif
#if defined(_WIN32) && defined(FAILED_UNKNOWN_TRAILER)
  #undef FAILED_UNKNOWN_TRAILER
#endif

  enum {
    UNDEFINED = 0,
    GOAL_REACHED = 1,
    FAILED = -1,
    FAILED_NO_PATH = -2,
    FAILED_GOAL_IN_STATIC_OBSTACLE = -3,
    FAILED_GOAL_IN_FORBIDDEN_AREA = -4,
    FAILED_GOAL_IN_DYNAMIC_OBSTACLE = -5,
    FAILED_ROBOT_IN_COLLISION = -6,
    FAILED_ROBOT_IN_FORBIDDEN_AREA = -7,
    FAILED_UNKNOWN_TRAILER = -8,
  };


  typedef boost::shared_ptr< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> const> ConstPtr;

}; // struct MirMoveBaseResult_

typedef ::mir_msgs::MirMoveBaseResult_<std::allocator<void> > MirMoveBaseResult;

typedef boost::shared_ptr< ::mir_msgs::MirMoveBaseResult > MirMoveBaseResultPtr;
typedef boost::shared_ptr< ::mir_msgs::MirMoveBaseResult const> MirMoveBaseResultConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator1> & lhs, const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator2> & rhs)
{
  return lhs.end_state == rhs.end_state &&
    lhs.end_pose == rhs.end_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator1> & lhs, const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d78ef95801ef85ff0171f7a59e041d7";
  }

  static const char* value(const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d78ef95801ef85fULL;
  static const uint64_t static_value2 = 0xf0171f7a59e041d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/MirMoveBaseResult";
  }

  static const char* value(const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"int16 UNDEFINED = 0\n"
"int16 GOAL_REACHED = 1\n"
"int16 FAILED = -1\n"
"int16 FAILED_NO_PATH = -2\n"
"int16 FAILED_GOAL_IN_STATIC_OBSTACLE = -3\n"
"int16 FAILED_GOAL_IN_FORBIDDEN_AREA = -4\n"
"int16 FAILED_GOAL_IN_DYNAMIC_OBSTACLE = -5\n"
"int16 FAILED_ROBOT_IN_COLLISION = -6\n"
"int16 FAILED_ROBOT_IN_FORBIDDEN_AREA = -7\n"
"int16 FAILED_UNKNOWN_TRAILER = -8\n"
"int16 end_state\n"
"geometry_msgs/PoseStamped end_pose\n"
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

  static const char* value(const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.end_state);
      stream.next(m.end_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MirMoveBaseResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::MirMoveBaseResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::MirMoveBaseResult_<ContainerAllocator>& v)
  {
    s << indent << "end_state: ";
    Printer<int16_t>::stream(s, indent + "  ", v.end_state);
    s << indent << "end_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.end_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_MIRMOVEBASERESULT_H
