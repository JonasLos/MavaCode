// Generated by gencpp from file autoware_msgs/SyncTimeMonitor.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_SYNCTIMEMONITOR_H
#define AUTOWARE_MSGS_MESSAGE_SYNCTIMEMONITOR_H


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
struct SyncTimeMonitor_
{
  typedef SyncTimeMonitor_<ContainerAllocator> Type;

  SyncTimeMonitor_()
    : header()
    , image_raw(0.0)
    , points_raw(0.0)
    , points_image(0.0)
    , vscan_points(0.0)
    , vscan_image(0.0)
    , image_obj(0.0)
    , image_obj_ranged(0.0)
    , image_obj_tracked(0.0)
    , current_pose(0.0)
    , obj_label(0.0)
    , cluster_centroids(0.0)
    , obj_pose(0.0)
    , execution_time(0.0)
    , cycle_time(0.0)
    , time_diff(0.0)  {
    }
  SyncTimeMonitor_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , image_raw(0.0)
    , points_raw(0.0)
    , points_image(0.0)
    , vscan_points(0.0)
    , vscan_image(0.0)
    , image_obj(0.0)
    , image_obj_ranged(0.0)
    , image_obj_tracked(0.0)
    , current_pose(0.0)
    , obj_label(0.0)
    , cluster_centroids(0.0)
    , obj_pose(0.0)
    , execution_time(0.0)
    , cycle_time(0.0)
    , time_diff(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _image_raw_type;
  _image_raw_type image_raw;

   typedef double _points_raw_type;
  _points_raw_type points_raw;

   typedef double _points_image_type;
  _points_image_type points_image;

   typedef double _vscan_points_type;
  _vscan_points_type vscan_points;

   typedef double _vscan_image_type;
  _vscan_image_type vscan_image;

   typedef double _image_obj_type;
  _image_obj_type image_obj;

   typedef double _image_obj_ranged_type;
  _image_obj_ranged_type image_obj_ranged;

   typedef double _image_obj_tracked_type;
  _image_obj_tracked_type image_obj_tracked;

   typedef double _current_pose_type;
  _current_pose_type current_pose;

   typedef double _obj_label_type;
  _obj_label_type obj_label;

   typedef double _cluster_centroids_type;
  _cluster_centroids_type cluster_centroids;

   typedef double _obj_pose_type;
  _obj_pose_type obj_pose;

   typedef double _execution_time_type;
  _execution_time_type execution_time;

   typedef double _cycle_time_type;
  _cycle_time_type cycle_time;

   typedef double _time_diff_type;
  _time_diff_type time_diff;





  typedef boost::shared_ptr< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> const> ConstPtr;

}; // struct SyncTimeMonitor_

typedef ::autoware_msgs::SyncTimeMonitor_<std::allocator<void> > SyncTimeMonitor;

typedef boost::shared_ptr< ::autoware_msgs::SyncTimeMonitor > SyncTimeMonitorPtr;
typedef boost::shared_ptr< ::autoware_msgs::SyncTimeMonitor const> SyncTimeMonitorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator1> & lhs, const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.image_raw == rhs.image_raw &&
    lhs.points_raw == rhs.points_raw &&
    lhs.points_image == rhs.points_image &&
    lhs.vscan_points == rhs.vscan_points &&
    lhs.vscan_image == rhs.vscan_image &&
    lhs.image_obj == rhs.image_obj &&
    lhs.image_obj_ranged == rhs.image_obj_ranged &&
    lhs.image_obj_tracked == rhs.image_obj_tracked &&
    lhs.current_pose == rhs.current_pose &&
    lhs.obj_label == rhs.obj_label &&
    lhs.cluster_centroids == rhs.cluster_centroids &&
    lhs.obj_pose == rhs.obj_pose &&
    lhs.execution_time == rhs.execution_time &&
    lhs.cycle_time == rhs.cycle_time &&
    lhs.time_diff == rhs.time_diff;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator1> & lhs, const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c6a4dd195d4ccc31d38fad617327689";
  }

  static const char* value(const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c6a4dd195d4ccc3ULL;
  static const uint64_t static_value2 = 0x1d38fad617327689ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/SyncTimeMonitor";
  }

  static const char* value(const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 image_raw\n"
"float64 points_raw\n"
"float64 points_image\n"
"float64 vscan_points\n"
"float64 vscan_image\n"
"float64 image_obj\n"
"float64 image_obj_ranged\n"
"float64 image_obj_tracked\n"
"float64 current_pose\n"
"float64 obj_label\n"
"float64 cluster_centroids\n"
"float64 obj_pose\n"
"float64 execution_time\n"
"float64 cycle_time\n"
"float64 time_diff\n"
"\n"
"\n"
"# time image_raw\n"
"# time points_raw\n"
"# time image_obj\n"
"# time image_obj_ranged\n"
"# time image_obj_tracked\n"
"# time current_pose\n"
"# time obj_label\n"
"# time cluster_centroids\n"
"# time obj_pose\n"
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

  static const char* value(const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.image_raw);
      stream.next(m.points_raw);
      stream.next(m.points_image);
      stream.next(m.vscan_points);
      stream.next(m.vscan_image);
      stream.next(m.image_obj);
      stream.next(m.image_obj_ranged);
      stream.next(m.image_obj_tracked);
      stream.next(m.current_pose);
      stream.next(m.obj_label);
      stream.next(m.cluster_centroids);
      stream.next(m.obj_pose);
      stream.next(m.execution_time);
      stream.next(m.cycle_time);
      stream.next(m.time_diff);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncTimeMonitor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::SyncTimeMonitor_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "image_raw: ";
    Printer<double>::stream(s, indent + "  ", v.image_raw);
    s << indent << "points_raw: ";
    Printer<double>::stream(s, indent + "  ", v.points_raw);
    s << indent << "points_image: ";
    Printer<double>::stream(s, indent + "  ", v.points_image);
    s << indent << "vscan_points: ";
    Printer<double>::stream(s, indent + "  ", v.vscan_points);
    s << indent << "vscan_image: ";
    Printer<double>::stream(s, indent + "  ", v.vscan_image);
    s << indent << "image_obj: ";
    Printer<double>::stream(s, indent + "  ", v.image_obj);
    s << indent << "image_obj_ranged: ";
    Printer<double>::stream(s, indent + "  ", v.image_obj_ranged);
    s << indent << "image_obj_tracked: ";
    Printer<double>::stream(s, indent + "  ", v.image_obj_tracked);
    s << indent << "current_pose: ";
    Printer<double>::stream(s, indent + "  ", v.current_pose);
    s << indent << "obj_label: ";
    Printer<double>::stream(s, indent + "  ", v.obj_label);
    s << indent << "cluster_centroids: ";
    Printer<double>::stream(s, indent + "  ", v.cluster_centroids);
    s << indent << "obj_pose: ";
    Printer<double>::stream(s, indent + "  ", v.obj_pose);
    s << indent << "execution_time: ";
    Printer<double>::stream(s, indent + "  ", v.execution_time);
    s << indent << "cycle_time: ";
    Printer<double>::stream(s, indent + "  ", v.cycle_time);
    s << indent << "time_diff: ";
    Printer<double>::stream(s, indent + "  ", v.time_diff);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_SYNCTIMEMONITOR_H
