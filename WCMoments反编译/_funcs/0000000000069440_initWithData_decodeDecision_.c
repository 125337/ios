// initWithData:decodeDecision: @0x69440

/* Function Stack Size: 0x20 bytes */

ID WCMYBImage::initWithData_decodeDecision_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  undefined8 local_60;
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
  IVar1 = local_18;
  local_18 = 0;
  local_18 = _objc_msgSend_initWithData_scale_decodeDecision_
                       (0x3ff0000000000000,IVar1,local_60,local_28,local_30);
  IVar1 = (*(code *)PTR__objc_retain_00110460)();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

