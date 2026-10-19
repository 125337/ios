// initWithContentsOfFile:decodeDecision: @0x69048

/* Function Stack Size: 0x20 bytes */

ID WCMYBImage::initWithContentsOfFile_decodeDecision_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_78;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_78,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_38 = uVar1;
  __NSStringPathScale(local_28);
  local_18 = 0;
  local_18 = _objc_msgSend_initWithData_scale_decodeDecision_(IVar2,local_78,uVar1,local_30);
  IVar2 = (*(code *)PTR__objc_retain_00110460)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar2;
}

