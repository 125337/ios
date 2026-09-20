// startAccelerometerUpdatesToQueue:withHandler: @ 00fa92a8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

ID WCRefineHelper::startAccelerometerUpdatesToQueue_withHandler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3,param_3,param_4,param_5);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  IVar1 = local_30[0];
  _objc_retainBlock();
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

