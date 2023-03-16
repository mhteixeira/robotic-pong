// Generated by gencpp from file niryo_one_msgs/ManagePositionResponse.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_MANAGEPOSITIONRESPONSE_H
#define NIRYO_ONE_MSGS_MESSAGE_MANAGEPOSITIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <niryo_one_msgs/Position.h>

namespace niryo_one_msgs
{
template <class ContainerAllocator>
struct ManagePositionResponse_
{
  typedef ManagePositionResponse_<ContainerAllocator> Type;

  ManagePositionResponse_()
    : status(0)
    , message()
    , position()  {
    }
  ManagePositionResponse_(const ContainerAllocator& _alloc)
    : status(0)
    , message(_alloc)
    , position(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;

   typedef  ::niryo_one_msgs::Position_<ContainerAllocator>  _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ManagePositionResponse_

typedef ::niryo_one_msgs::ManagePositionResponse_<std::allocator<void> > ManagePositionResponse;

typedef boost::shared_ptr< ::niryo_one_msgs::ManagePositionResponse > ManagePositionResponsePtr;
typedef boost::shared_ptr< ::niryo_one_msgs::ManagePositionResponse const> ManagePositionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/kinetic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/kinetic/share/octomap_msgs/cmake/../msg'], 'niryo_one_msgs': ['/home/pedro/catkin_ws/src/niryo_one_ros/niryo_one_msgs/msg', '/home/pedro/catkin_ws/devel/share/niryo_one_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0bfc71def0391c7cb33d092741f6f696";
  }

  static const char* value(const ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0bfc71def0391c7cULL;
  static const uint64_t static_value2 = 0xb33d092741f6f696ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/ManagePositionResponse";
  }

  static const char* value(const ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 status\n\
string message\n\
\n\
niryo_one_msgs/Position position\n\
\n\
\n\
================================================================================\n\
MSG: niryo_one_msgs/Position\n\
string name\n\
\n\
float64[] joints \n\
niryo_one_msgs/RPY rpy\n\
geometry_msgs/Point point\n\
geometry_msgs/Quaternion quaternion\n\
\n\
\n\
================================================================================\n\
MSG: niryo_one_msgs/RPY\n\
# roll, pitch and yaw\n\
\n\
float64 roll\n\
float64 pitch\n\
float64 yaw\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.message);
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ManagePositionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::ManagePositionResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::niryo_one_msgs::Position_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_MANAGEPOSITIONRESPONSE_H