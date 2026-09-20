// FUN_00422bb4 @ 00422bb4

void FUN_00422bb4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_00422fbc();
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addObject__0269d180,local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

