// _newImageDestination:imageCount: @0x97f44

/* Function Stack Size: 0x20 bytes */

CGImageDestination *
WCMYYImageEncoder::_newImageDestination_imageCount_
          (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_68;
  long local_50;
  CGImageDestination *local_48;
  undefined4 local_3c;
  unsigned_long_long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  CGImageDestination *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar3 = local_30;
  local_38 = param_4;
  if (local_30 == 0) {
    local_18 = (CGImageDestination *)0x0;
  }
  else {
    local_48 = (CGImageDestination *)0x0;
    uVar1 = _objc_opt_class(&_OBJC_CLASS___NSString);
    uVar2 = _objc_opt_isKindOfClass(lVar3,uVar1);
    lVar3 = local_30;
    if ((uVar2 & 1) == 0) {
      uVar1 = _objc_opt_class(&_OBJC_CLASS___NSMutableData);
      uVar2 = _objc_opt_isKindOfClass(lVar3,uVar1);
      lVar3 = local_30;
      if ((uVar2 & 1) != 0) {
        uVar1 = _WCMYYImageTypeToUTType(*(undefined8 *)(local_20 + 0x20));
        local_48 = (CGImageDestination *)_CGImageDestinationCreateWithData(lVar3,uVar1,local_38,0);
      }
    }
    else {
      uVar1 = _objc_alloc(&_OBJC_CLASS___NSURL);
      lVar3 = _objc_msgSend_initFileURLWithPath_(uVar1,local_68,local_30);
      local_50 = lVar3;
      if (lVar3 != 0) {
        uVar1 = _WCMYYImageTypeToUTType(*(undefined8 *)(local_20 + 0x20));
        local_48 = (CGImageDestination *)_CGImageDestinationCreateWithURL(lVar3,uVar1,local_38,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    local_18 = local_48;
  }
  local_3c = 1;
  _objc_storeStrong(&local_30,0);
  return local_18;
}

