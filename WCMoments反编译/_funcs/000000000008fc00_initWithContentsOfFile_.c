// initWithContentsOfFile: @0x8fc00

/* Function Stack Size: 0x18 bytes */

ID WCMYYImage::initWithContentsOfFile_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_68;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_68,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = uVar1;
  __NSStringPathScale(local_28);
  local_18 = 0;
  local_18 = _objc_msgSend_initWithData_scale_(IVar2,local_68,uVar1);
  IVar2 = (*(code *)PTR__objc_retain_00110460)();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar2;
}

