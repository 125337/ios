// imageWithData:scale:decodeDecision: @0x68f0c

/* Function Stack Size: 0x28 bytes */

ID WCMYBImage::imageWithData_scale_decodeDecision_
             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_60;
  undefined8 local_38;
  double local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_5,param_6);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  uVar1 = _objc_alloc(local_18);
  uVar1 = _objc_msgSend_initWithData_scale_decodeDecision_
                    (local_30,uVar1,local_60,local_28,local_38);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

