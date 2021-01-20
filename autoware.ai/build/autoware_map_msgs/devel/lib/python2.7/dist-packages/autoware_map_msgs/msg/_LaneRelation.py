# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autoware_map_msgs/LaneRelation.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class LaneRelation(genpy.Message):
  _md5sum = "b3dff6505b3e88becc76b5332fcd57ed"
  _type = "autoware_map_msgs/LaneRelation"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# This represents lane connections in a map.

# BlinkerType
uint8 None = 0
uint8 Left = 1
uint8 Right = 2

# Id of refering Lane object.
int32 lane_id

# Id of Lane objects that follows after refering lane. 
int32 next_lane_id

# Blinker that must be lit when doing driving towards the next_lane.
# Must be one of "Blinker Type"
# e.g. if next_lane_id is left turning lane in intersection, then blinker = LEFT
int32 blinker
"""
  # Pseudo-constants
  None = 0
  Left = 1
  Right = 2

  __slots__ = ['lane_id','next_lane_id','blinker']
  _slot_types = ['int32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       lane_id,next_lane_id,blinker

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LaneRelation, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.lane_id is None:
        self.lane_id = 0
      if self.next_lane_id is None:
        self.next_lane_id = 0
      if self.blinker is None:
        self.blinker = 0
    else:
      self.lane_id = 0
      self.next_lane_id = 0
      self.blinker = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3i().pack(_x.lane_id, _x.next_lane_id, _x.blinker))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.lane_id, _x.next_lane_id, _x.blinker,) = _get_struct_3i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3i().pack(_x.lane_id, _x.next_lane_id, _x.blinker))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.lane_id, _x.next_lane_id, _x.blinker,) = _get_struct_3i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3i = None
def _get_struct_3i():
    global _struct_3i
    if _struct_3i is None:
        _struct_3i = struct.Struct("<3i")
    return _struct_3i
