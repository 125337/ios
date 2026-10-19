// _imageIOAvaliable @0x97e70

/* Function Stack Size: 0x10 bytes */

bool WCMYYImageEncoder::_imageIOAvaliable(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined1 local_11;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 - 1U < 7) {
    lVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 8),local_38);
    local_11 = lVar1 != 0;
  }
  else if (lVar1 == 8) {
    lVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 8),local_38);
    local_11 = lVar1 == 1;
  }
  else if (lVar1 == 9) {
    local_11 = false;
  }
  else {
    local_11 = false;
  }
  return (uint)local_11;
}

