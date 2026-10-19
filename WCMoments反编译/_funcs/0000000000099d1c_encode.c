// encode @0x99d1c

/* Function Stack Size: 0x10 bytes */

ID WCMYYImageEncoder::encode(ID param_1,SEL param_2)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  undefined8 local_30;
  undefined8 local_18;
  
  lVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 8));
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = _objc_msgSend__imageIOAvaliable(param_1,local_30);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 8) {
        _objc_msgSend__encodeAPNG(0,param_1,local_30);
        local_18 = _objc_retainAutoreleasedReturnValue();
      }
      else if (*(long *)(param_1 + 0x20) == 9) {
        _objc_msgSend__encodeWebP(0,param_1,local_30);
        local_18 = _objc_retainAutoreleasedReturnValue();
      }
      else {
        local_18 = 0;
      }
    }
    else {
      _objc_msgSend__encodeWithImageIO(param_1,local_30);
      local_18 = _objc_retainAutoreleasedReturnValue();
    }
  }
  IVar3 = _objc_autoreleaseReturnValue(local_18);
  return IVar3;
}

