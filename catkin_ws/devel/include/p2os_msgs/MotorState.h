// Generated by gencpp from file p2os_msgs/MotorState.msg
// DO NOT EDIT!


#ifndef P2OS_MSGS_MESSAGE_MOTORSTATE_H
#define P2OS_MSGS_MESSAGE_MOTORSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace p2os_msgs
{
template <class ContainerAllocator>
struct MotorState_
{
  typedef MotorState_<ContainerAllocator> Type;

  MotorState_()
    : state(0)  {
    }
  MotorState_(const ContainerAllocator& _alloc)
    : state(0)  {
  (void)_alloc;
    }



   typedef int32_t _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::p2os_msgs::MotorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p2os_msgs::MotorState_<ContainerAllocator> const> ConstPtr;

}; // struct MotorState_

typedef ::p2os_msgs::MotorState_<std::allocator<void> > MotorState;

typedef boost::shared_ptr< ::p2os_msgs::MotorState > MotorStatePtr;
typedef boost::shared_ptr< ::p2os_msgs::MotorState const> MotorStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::p2os_msgs::MotorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::p2os_msgs::MotorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace p2os_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'p2os_msgs': ['/home/deep/study/catkin_ws/src/p2os/p2os_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::p2os_msgs::MotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::p2os_msgs::MotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p2os_msgs::MotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p2os_msgs::MotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p2os_msgs::MotorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p2os_msgs::MotorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::p2os_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7a2f37ef2ba405f0c7a15cc72663d6f0";
  }

  static const char* value(const ::p2os_msgs::MotorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7a2f37ef2ba405f0ULL;
  static const uint64_t static_value2 = 0xc7a15cc72663d6f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::p2os_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "p2os_msgs/MotorState";
  }

  static const char* value(const ::p2os_msgs::MotorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::p2os_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32   state\n\
";
  }

  static const char* value(const ::p2os_msgs::MotorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::p2os_msgs::MotorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p2os_msgs::MotorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::p2os_msgs::MotorState_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // P2OS_MSGS_MESSAGE_MOTORSTATE_H
