// frameWithImage: @0x930c0

/* Function Stack Size: 0x18 bytes */

ID WCMYYImageFrame::frameWithImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_58;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = _objc_opt_new(local_18);
  _objc_msgSend_setImage_(local_30,local_58,local_28);
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

