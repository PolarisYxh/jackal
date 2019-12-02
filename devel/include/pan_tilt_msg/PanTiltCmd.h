// Generated by gencpp from file pan_tilt_msg/PanTiltCmd.msg
// DO NOT EDIT!


#ifndef PAN_TILT_MSG_MESSAGE_PANTILTCMD_H
#define PAN_TILT_MSG_MESSAGE_PANTILTCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pan_tilt_msg
{
template <class ContainerAllocator>
struct PanTiltCmd_
{
  typedef PanTiltCmd_<ContainerAllocator> Type;

  PanTiltCmd_()
    : yaw(0.0)
    , pitch(0.0)
    , speed(0)  {
    }
  PanTiltCmd_(const ContainerAllocator& _alloc)
    : yaw(0.0)
    , pitch(0.0)
    , speed(0)  {
  (void)_alloc;
    }



   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef int16_t _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> const> ConstPtr;

}; // struct PanTiltCmd_

typedef ::pan_tilt_msg::PanTiltCmd_<std::allocator<void> > PanTiltCmd;

typedef boost::shared_ptr< ::pan_tilt_msg::PanTiltCmd > PanTiltCmdPtr;
typedef boost::shared_ptr< ::pan_tilt_msg::PanTiltCmd const> PanTiltCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pan_tilt_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pan_tilt_msg': ['/home/iqr/catkin_ws/src/iqr_pan_tilt/pan_tilt_msg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "965a993146bc193a21484f0f1e9162eb";
  }

  static const char* value(const ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x965a993146bc193aULL;
  static const uint64_t static_value2 = 0x21484f0f1e9162ebULL;
};

template<class ContainerAllocator>
struct DataType< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pan_tilt_msg/PanTiltCmd";
  }

  static const char* value(const ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## pan tilt control msg\n\
## pan tilt yaw angle :deg\n\
float32 yaw\n\
\n\
## pan tilt pitch angle :deg\n\
float32 pitch \n\
\n\
## pan tilt speed :deg/s\n\
int16 speed\n\
";
  }

  static const char* value(const ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.yaw);
      stream.next(m.pitch);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PanTiltCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pan_tilt_msg::PanTiltCmd_<ContainerAllocator>& v)
  {
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "speed: ";
    Printer<int16_t>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAN_TILT_MSG_MESSAGE_PANTILTCMD_H