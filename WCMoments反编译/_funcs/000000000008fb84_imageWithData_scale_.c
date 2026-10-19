// imageWithData:scale: @0x8fb84

/* Function Stack Size: 0x20 bytes */

ID WCMYYImage::imageWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)

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
  uVar1 = _objc_alloc(local_18);
  uVar1 = _objc_msgSend_initWithData_scale_(param_4,uVar1,local_50,local_28);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

