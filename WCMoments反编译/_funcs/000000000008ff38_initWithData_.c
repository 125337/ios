// initWithData: @0x8ff38

/* Function Stack Size: 0x18 bytes */

ID WCMYYImage::initWithData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  local_18 = 0;
  local_18 = _objc_msgSend_initWithData_scale_(0x3ff0000000000000,IVar1,local_50,local_28);
  IVar1 = (*(code *)PTR__objc_retain_00110460)();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

