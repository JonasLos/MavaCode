// Generated by gencpp from file autoware_msgs/LampCmd.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_LAMPCMD_H
#define AUTOWARE_MSGS_MESSAGE_LAMPCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct LampCmd_
{
  typedef LampCmd_<ContainerAllocator> Type;

  LampCmd_()
    : header()
    , l(0)
    , r(0)  {
    }
  LampCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , l(0)
    , r(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _l_type;
  _l_type l;

   typedef int32_t _r_type;
  _r_type r;





  typedef boost::shared_ptr< ::autoware_msgs::LampCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::LampCmd_<ContainerAllocator> const> ConstPtr;

}; // struct LampCmd_

typedef ::autoware_msgs::LampCmd_<std::allocator<void> > LampCmd;

typedef boost::shared_ptr< ::autoware_msgs::LampCmd > LampCmdPtr;
typedef boost::shared_ptr< ::autoware_msgs::LampCmd const> LampCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::LampCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::LampCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::LampCmd_<ContainerAllocator1> & lhs, const ::autoware_msgs::LampCmd_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.l == rhs.l &&
    lhs.r == rhs.r;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::LampCmd_<ContainerAllocator1> & lhs, const ::autoware_msgs::LampCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::LampCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::LampCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::LampCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::LampCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::LampCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::LampCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::LampCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f01795e0c1fa842f366906ad189e0f0a";
  }

  static const char* value(const ::autoware_msgs::LampCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf01795e0c1fa842fULL;
  static const uint64_t static_value2 = 0x366906ad189e0f0aULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::LampCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/LampCmd";
  }

  static const char* value(const ::autoware_msgs::LampCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::LampCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32 l\n"
"int32 r\n"
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
;
  }

  static const char* value(const ::autoware_msgs::LampCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::LampCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.l);
      stream.next(m.r);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LampCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::LampCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::LampCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "l: ";
    Printer<int32_t>::stream(s, indent + "  ", v.l);
    s << indent << "r: ";
    Printer<int32_t>::stream(s, indent + "  ", v.r);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_LAMPCMD_H
