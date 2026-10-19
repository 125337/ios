// initWithData:scale: @0x69500

/* Function Stack Size: 0x20 bytes */

ID WCMYBImage::initWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  undefined8 local_58;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  local_18 = 0;
  local_18 = _objc_msgSend_initWithData_scale_decodeDecision_(param_4,IVar1,local_58,local_28,0);
  IVar1 = (*(code *)PTR__objc_retain_00110460)();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

