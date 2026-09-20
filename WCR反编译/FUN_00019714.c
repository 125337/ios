// FUN_00019714 @ 00019714

void FUN_00019714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_00021150(local_28,local_18);
  if (((uVar1 & 1) == 0) && (uVar1 = local_28, FUN_000214d8(local_28,local_18,0), (uVar1 & 1) == 0))
  {
    (*DAT_028c7a18)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

