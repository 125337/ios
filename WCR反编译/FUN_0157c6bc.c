// FUN_0157c6bc @ 0157c6bc

void FUN_0157c6bc(ulong param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  uVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_0157c734();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_0157cb14();
  if ((uVar1 & 1) == 0) {
    FUN_0157c5ec(*(long *)(param_1 + 0x20) + -1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

