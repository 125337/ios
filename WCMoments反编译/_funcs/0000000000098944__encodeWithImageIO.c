// _encodeWithImageIO @0x98944

/* Function Stack Size: 0x10 bytes */

ID WCMYYImageEncoder::_encodeWithImageIO(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined8 local_58;
  undefined8 local_50;
  byte local_41;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  local_30 = _objc_opt_new(&_OBJC_CLASS___NSMutableData);
  if (*(long *)(local_20 + 0x20) == 7) {
    local_50 = _objc_msgSend_count(*(undefined8 *)(local_20 + 8),local_58);
  }
  else {
    local_50 = 1;
  }
  lVar1 = _objc_msgSend__newImageDestination_imageCount_(local_20,local_58,local_30,local_50);
  local_41 = 0;
  if (lVar1 != 0) {
    _objc_msgSend__encodeImageWithDestination_imageCount_(local_20,local_58,lVar1,local_50);
    local_41 = _CGImageDestinationFinalize(lVar1);
    _CFRelease(lVar1);
  }
  if (((local_41 & 1) == 0) || (lVar1 = _objc_msgSend_length(local_30,local_58), lVar1 == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = (*(code *)PTR__objc_retain_00110460)(local_30);
  }
  _objc_storeStrong(&local_30,0);
  IVar2 = _objc_autoreleaseReturnValue(local_18);
  return IVar2;
}

