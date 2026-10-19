// imageWithContentsOfFile:decodeDecision: @0x68cec

/* Function Stack Size: 0x20 bytes */

ID WCMYBImage::imageWithContentsOfFile_decodeDecision_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

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
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = _objc_alloc(local_18);
  uVar1 = _objc_msgSend_initWithContentsOfFile_decodeDecision_(uVar1,local_58,local_28,local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

