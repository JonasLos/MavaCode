# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vector_map_msgs/GuardRail.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GuardRail(genpy.Message):
  _md5sum = "2d0ff5b1e0af44869f9a932047e313c4"
  _type = "vector_map_msgs/GuardRail"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# type
uint8 PLATE_BLADE=0
uint8 POLE=1

# Ver 1.00
int32 id
int32 aid
int32 type
int32 linkid
"""
  # Pseudo-constants
  PLATE_BLADE = 0
  POLE = 1

  __slots__ = ['id','aid','type','linkid']
  _slot_types = ['int32','int32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,aid,type,linkid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GuardRail, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.aid is None:
        self.aid = 0
      if self.type is None:
        self.type = 0
      if self.linkid is None:
        self.linkid = 0
    else:
      self.id = 0
      self.aid = 0
      self.type = 0
      self.linkid = 0

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
      buff.write(_get_struct_4i().pack(_x.id, _x.aid, _x.type, _x.linkid))
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
      end += 16
      (_x.id, _x.aid, _x.type, _x.linkid,) = _get_struct_4i().unpack(str[start:end])
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
      buff.write(_get_struct_4i().pack(_x.id, _x.aid, _x.type, _x.linkid))
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
      end += 16
      (_x.id, _x.aid, _x.type, _x.linkid,) = _get_struct_4i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4i = None
def _get_struct_4i():
    global _struct_4i
    if _struct_4i is None:
        _struct_4i = struct.Struct("<4i")
    return _struct_4i
