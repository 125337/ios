// addImageWithFile:duration: @0x97d24

/* Function Stack Size: 0x20 bytes */

void WCMYYImageEncoder::addImageWithFile_duration_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double local_58;
  undefined8 local_48;
  long local_40;
  uint local_34;
  double local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  lVar2 = _objc_msgSend_length(local_28,local_48);
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    if (0.0 <= local_30) {
      local_58 = local_30;
    }
    else {
      local_58 = 0.0;
    }
    local_30 = local_58;
    _objc_msgSend_URLWithString_(&_OBJC_CLASS___NSURL,local_48,local_28);
    local_40 = _objc_retainAutoreleasedReturnValue();
    bVar1 = local_40 != 0;
    if (bVar1) {
      _objc_msgSend_addObject_(*(undefined8 *)(local_18 + 8),local_48,local_40);
      uVar4 = *(undefined8 *)(local_18 + 0x10);
      _objc_msgSend_numberWithDouble_(local_30,&_OBJC_CLASS___NSNumber,local_48);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar4,local_48);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

