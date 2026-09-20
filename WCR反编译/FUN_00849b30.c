// FUN_00849b30 @ 00849b30

void FUN_00849b30(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00849bc4();
  if ((uVar1 & 1) == 0) {
    FUN_0082a0bc(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

