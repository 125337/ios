// FUN_0067cd78 @ 0067cd78

void FUN_0067cd78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_00694120(local_28,0);
  if ((uVar1 & 1) != 0) {
    FUN_0069445c(&cf_dataTask,local_28,0);
  }
  uVar1 = local_28;
  FUN_00694194();
  if ((uVar1 & 1) != 0) {
    FUN_00694854(local_28,0);
  }
  uVar2 = local_18;
  (*DAT_028cbd38)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

