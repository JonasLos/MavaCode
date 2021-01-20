// Generated by gencpp from file autoware_msgs/ImageObjects.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_IMAGEOBJECTS_H
#define AUTOWARE_MSGS_MESSAGE_IMAGEOBJECTS_H


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
struct ImageObjects_
{
  typedef ImageObjects_<ContainerAllocator> Type;

  ImageObjects_()
    : header()
    , car_num(0)
    , car_type()
    , score()
    , corner_point()  {
    }
  ImageObjects_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , car_num(0)
    , car_type(_alloc)
    , score(_alloc)
    , corner_point(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _car_num_type;
  _car_num_type car_num;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _car_type_type;
  _car_type_type car_type;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _score_type;
  _score_type score;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _corner_point_type;
  _corner_point_type corner_point;





  typedef boost::shared_ptr< ::autoware_msgs::ImageObjects_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ImageObjects_<ContainerAllocator> const> ConstPtr;

}; // struct ImageObjects_

typedef ::autoware_msgs::ImageObjects_<std::allocator<void> > ImageObjects;

typedef boost::shared_ptr< ::autoware_msgs::ImageObjects > ImageObjectsPtr;
typedef boost::shared_ptr< ::autoware_msgs::ImageObjects const> ImageObjectsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ImageObjects_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ImageObjects_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::ImageObjects_<ContainerAllocator1> & lhs, const ::autoware_msgs::ImageObjects_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.car_num == rhs.car_num &&
    lhs.car_type == rhs.car_type &&
    lhs.score == rhs.score &&
    lhs.corner_point == rhs.corner_point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::ImageObjects_<ContainerAllocator1> & lhs, const ::autoware_msgs::ImageObjects_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ImageObjects_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ImageObjects_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ImageObjects_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ImageObjects_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ImageObjects_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ImageObjects_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ImageObjects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "693d2720746a58dc044320f50196df81";
  }

  static const char* value(const ::autoware_msgs::ImageObjects_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x693d2720746a58dcULL;
  static const uint64_t static_value2 = 0x044320f50196df81ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ImageObjects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ImageObjects";
  }

  static const char* value(const ::autoware_msgs::ImageObjects_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ImageObjects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"uint8 car_num\n"
"int32[] car_type\n"
"float32[] score\n"
"int32[] corner_point\n"
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

  static const char* value(const ::autoware_msgs::ImageObjects_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ImageObjects_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.car_num);
      stream.next(m.car_type);
      stream.next(m.score);
      stream.next(m.corner_point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageObjects_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ImageObjects_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ImageObjects_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "car_num: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.car_num);
    s << indent << "car_type[]" << std::endl;
    for (size_t i = 0; i < v.car_type.size(); ++i)
    {
      s << indent << "  car_type[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.car_type[i]);
    }
    s << indent << "score[]" << std::endl;
    for (size_t i = 0; i < v.score.size(); ++i)
    {
      s << indent << "  score[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.score[i]);
    }
    s << indent << "corner_point[]" << std::endl;
    for (size_t i = 0; i < v.corner_point.size(); ++i)
    {
      s << indent << "  corner_point[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.corner_point[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_IMAGEOBJECTS_H
