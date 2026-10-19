// _encodeWithImageIO: @0x98a6c

/* Function Stack Size: 0x18 bytes */

bool WCMYYImageEncoder::_encodeWithImageIO_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 local_48;
  byte local_39;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (*(long *)(local_18 + 0x20) == 7) {
    local_48 = _objc_msgSend_count(*(undefined8 *)(local_18 + 8),local_50);
  }
  else {
    local_48 = 1;
  }
  lVar1 = _objc_msgSend__newImageDestination_imageCount_(local_18,local_50,local_28,local_48);
  local_39 = 0;
  if (lVar1 != 0) {
    _objc_msgSend__encodeImageWithDestination_imageCount_(local_18,local_50,lVar1,local_48);
    local_39 = _CGImageDestinationFinalize(lVar1);
    _CFRelease(lVar1);
  }
  _objc_storeStrong(&local_28,0);
  return local_39 & 1;
}

