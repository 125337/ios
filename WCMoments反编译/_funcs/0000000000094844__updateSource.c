// _updateSource @0x94844

/* Function Stack Size: 0x10 bytes */

void WCMYYImageDecoder::_updateSource(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 local_30;
  
  if (*(long *)(param_1 + 0xa0) == 8) {
    _objc_msgSend__updateSourceAPNG(0,param_1,local_30);
  }
  else {
    lVar1 = *(long *)(param_1 + 0xa0) + -9;
    if (lVar1 == 0) {
      _objc_msgSend__updateSourceWebP(param_1,local_30);
    }
    else {
      _objc_msgSend__updateSourceImageIO(lVar1,param_1,local_30);
    }
  }
  return;
}

