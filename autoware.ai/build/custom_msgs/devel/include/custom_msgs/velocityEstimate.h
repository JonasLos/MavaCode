// Generated by gencpp from file custom_msgs/velocityEstimate.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSGS_MESSAGE_VELOCITYESTIMATE_H
#define CUSTOM_MSGS_MESSAGE_VELOCITYESTIMATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace custom_msgs
{
template <class ContainerAllocator>
struct velocityEstimate_
{
  typedef velocityEstimate_<ContainerAllocator> Type;

  velocityEstimate_()
    : header()
    , velE(0.0)
    , velN(0.0)
    , velU(0.0)  {
    }
  velocityEstimate_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , velE(0.0)
    , velN(0.0)
    , velU(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _velE_type;
  _velE_type velE;

   typedef double _velN_type;
  _velN_type velN;

   typedef double _velU_type;
  _velU_type velU;





  typedef boost::shared_ptr< ::custom_msgs::velocityEstimate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msgs::velocityEstimate_<ContainerAllocator> const> ConstPtr;

}; // struct velocityEstimate_

typedef ::custom_msgs::velocityEstimate_<std::allocator<void> > velocityEstimate;

typedef boost::shared_ptr< ::custom_msgs::velocityEstimate > velocityEstimatePtr;
typedef boost::shared_ptr< ::custom_msgs::velocityEstimate const> velocityEstimateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msgs::velocityEstimate_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msgs::velocityEstimate_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msgs::velocityEstimate_<ContainerAllocator1> & lhs, const ::custom_msgs::velocityEstimate_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.velE == rhs.velE &&
    lhs.velN == rhs.velN &&
    lhs.velU == rhs.velU;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msgs::velocityEstimate_<ContainerAllocator1> & lhs, const ::custom_msgs::velocityEstimate_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::velocityEstimate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::velocityEstimate_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::velocityEstimate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::velocityEstimate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::velocityEstimate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::velocityEstimate_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msgs::velocityEstimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "61406b2619738bd0fe334780af479020";
  }

  static const char* value(const ::custom_msgs::velocityEstimate_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x61406b2619738bd0ULL;
  static const uint64_t static_value2 = 0xfe334780af479020ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msgs::velocityEstimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msgs/velocityEstimate";
  }

  static const char* value(const ::custom_msgs::velocityEstimate_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msgs::velocityEstimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold filter data\n"
"# Supported for MTi Devices with FW 1.4 and above.\n"
"\n"
"Header header\n"
"\n"
"float64 velE\n"
"float64 velN\n"
"float64 velU\n"
"\n"
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

  static const char* value(const ::custom_msgs::velocityEstimate_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msgs::velocityEstimate_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.velE);
      stream.next(m.velN);
      stream.next(m.velU);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct velocityEstimate_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msgs::velocityEstimate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msgs::velocityEstimate_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "velE: ";
    Printer<double>::stream(s, indent + "  ", v.velE);
    s << indent << "velN: ";
    Printer<double>::stream(s, indent + "  ", v.velN);
    s << indent << "velU: ";
    Printer<double>::stream(s, indent + "  ", v.velU);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSGS_MESSAGE_VELOCITYESTIMATE_H
