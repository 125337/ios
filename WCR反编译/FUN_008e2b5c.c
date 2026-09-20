// FUN_008e2b5c @ 008e2b5c

void FUN_008e2b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*DAT_028ce320)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_30 = uVar1;
  _WCRefineAppendVoiceToolsMediaMenuItems(local_18,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

