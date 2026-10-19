// _newCGImageFromIndex:decoded: @0x986c4

/* Function Stack Size: 0x1c bytes */

CGImage * WCMYYImageEncoder::_newCGImageFromIndex_decoded_
                    (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 local_48;
  long local_40;
  byte local_31;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  CGImage *local_18;
  
  local_31 = (byte)param_4;
  local_40 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  uVar2 = _objc_opt_class(&_OBJC_CLASS___UIImage);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  uVar1 = local_48;
  if ((uVar3 & 1) == 0) {
    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSURL);
    uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
    uVar1 = local_48;
    if ((uVar3 & 1) == 0) {
      uVar2 = _objc_opt_class(&_OBJC_CLASS___NSData);
      uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
      if ((uVar3 & 1) != 0) {
        _objc_msgSend_imageWithData_(&_OBJC_CLASS___UIImage,local_80,local_48);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        lVar4 = local_40;
        local_40 = lVar5;
        (*(code *)PTR__objc_release_00110458)(lVar4);
      }
    }
    else {
      _objc_msgSend_absoluteString(local_48,local_80);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_imageWithContentsOfFile_(&_OBJC_CLASS___UIImage,local_80);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      lVar4 = local_40;
      local_40 = lVar5;
      (*(code *)PTR__objc_release_00110458)(lVar4);
      (*(code *)PTR__objc_release_00110458)(uVar1);
    }
  }
  else {
    _objc_storeStrong(&local_40,local_48);
  }
  lVar4 = local_40;
  if (local_40 == 0) {
    local_18 = (CGImage *)0x0;
  }
  else {
    _objc_retainAutorelease();
    lVar4 = _objc_msgSend_CGImage(lVar4,local_80);
    if (lVar4 == 0) {
      local_18 = (CGImage *)0x0;
    }
    else {
      lVar5 = _objc_msgSend_imageOrientation(local_40,local_80);
      if (lVar5 == 0) {
        if ((local_31 & 1) == 0) {
          local_18 = (CGImage *)_CFRetain(lVar4);
        }
        else {
          local_18 = (CGImage *)_WCMYYCGImageCreateDecodedCopy(lVar4,1);
        }
      }
      else {
        uVar1 = _objc_msgSend_imageOrientation(local_40,local_80);
        local_18 = (CGImage *)_WCMYYCGImageCreateCopyWithOrientation(lVar4,uVar1,&DAT_00002002);
      }
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_18;
}

