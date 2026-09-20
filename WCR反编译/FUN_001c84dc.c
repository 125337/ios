// FUN_001c84dc @ 001c84dc

void FUN_001c84dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8d28)(param_1,param_2);
  uVar1 = local_18;
  FUN_001d24ac();
  if (((uVar1 & 1) == 0) && (uVar1 = local_18, FUN_001d60d8(), (uVar1 & 1) == 0)) {
    uVar1 = local_18;
    FUN_0021a558();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    if ((uVar1 == 0) ||
       ((uVar1 = local_18, FUN_001d62d8(), (uVar1 & 1) == 0 &&
        (uVar1 = local_18, FUN_001d64e0(), (uVar1 & 1) == 0)))) {
      FUN_001d0ac4(local_18);
    }
    else {
      FUN_0021a794(local_28);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

