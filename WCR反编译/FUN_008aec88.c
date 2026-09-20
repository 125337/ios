// FUN_008aec88 @ 008aec88

void FUN_008aec88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined4 local_44;
  undefined1 local_3d;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_008b8a0c();
  if ((uVar1 & 1) != 0) {
    uVar1 = local_30;
    FUN_008b8b30();
    local_3d = (undefined1)uVar1;
    if ((uVar1 & 1) != 0) {
      local_18 = 0;
      local_44 = 1;
      goto LAB_008aedbc;
    }
  }
  uVar2 = local_20;
  (*DAT_028cdf10)(local_20,local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  FUN_008b8a0c();
  uVar2 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar2;
  local_44 = 1;
  _objc_storeStrong(&local_50,0);
LAB_008aedbc:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

