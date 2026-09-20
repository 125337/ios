// FUN_002fc9f4 @ 002fc9f4

void FUN_002fc9f4(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if ((uVar1 != 0) && (FUN_002f8b50(), (uVar1 & 1) != 0)) {
    FUN_002fc504(local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

