// addImage:duration: @0x97b10

/* Function Stack Size: 0x20 bytes */

void WCMYYImageEncoder::addImage_duration_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double local_58;
  undefined8 local_40;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  _objc_retainAutorelease();
  lVar1 = _objc_msgSend_CGImage(uVar2,local_40);
  if (lVar1 != 0) {
    local_58 = param_4;
    if (param_4 < 0.0) {
      local_58 = 0.0;
    }
    _objc_msgSend_addObject_(*(undefined8 *)(local_18 + 8),local_40,local_28);
    uVar3 = *(undefined8 *)(local_18 + 0x10);
    _objc_msgSend_numberWithDouble_(local_58,&_OBJC_CLASS___NSNumber,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addObject_(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

