// initWithCoder: @0x69c60

/* Function Stack Size: 0x18 bytes */

ID WCMYBImage::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_50;
  ID local_48;
  class_t *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_decodeObjectForKey_(local_28,local_50,&cf_WCMYYImageScale);
  local_30 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_decodeObjectForKey_(local_28,local_50,&cf_WCMYYImageData);
  local_38 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_length(local_38,local_50);
  IVar3 = local_18;
  uVar1 = local_38;
  if (lVar2 == 0) {
    local_18 = 0;
    local_48 = IVar3;
    local_40 = &objc::class_t::WCMYBImage;
    local_18 = _objc_msgSendSuper2(&local_48,"initWithCoder:",local_28);
    _objc_storeStrong(&local_18);
  }
  else {
    _objc_msgSend_doubleValue(local_30,local_50);
    local_18 = 0;
    local_18 = _objc_msgSend_initWithData_scale_(IVar3,local_50,uVar1);
    _objc_storeStrong(&local_18);
  }
  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar3;
}

