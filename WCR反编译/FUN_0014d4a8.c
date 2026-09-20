// FUN_0014d4a8 @ 0014d4a8

void FUN_0014d4a8(long param_1)

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
  if ((uVar1 != 0) && (FUN_0014d558(), (uVar1 & 1) == 0)) {
    FUN_0014a350(local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

