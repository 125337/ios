// decoderWithData:scale: @0x937e8

/* Function Stack Size: 0x20 bytes */

ID WCMYYImageDecoder::decoderWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_3c;
  double local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_4;
  if (local_30 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    uVar1 = _objc_alloc(&objc::class_t::WCMYYImageDecoder);
    local_48 = _objc_msgSend_initWithScale_(local_38,uVar1,local_58);
    _objc_msgSend_updateData_final_(local_48,local_58,local_30,1);
    lVar2 = _objc_msgSend_frameCount(local_48,local_58);
    if (lVar2 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = (*(code *)PTR__objc_retain_00110460)(local_48);
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  IVar3 = _objc_autoreleaseReturnValue(local_18);
  return IVar3;
}

