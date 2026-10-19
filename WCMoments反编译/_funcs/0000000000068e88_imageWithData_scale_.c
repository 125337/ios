// imageWithData:scale: @0x68e88

/* Function Stack Size: 0x20 bytes */

ID WCMYBImage::imageWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_imageWithData_scale_decodeDecision_(param_4,local_18,local_50,local_28,0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

