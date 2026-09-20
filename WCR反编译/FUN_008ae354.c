// FUN_008ae354 @ 008ae354

void FUN_008ae354(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_008b8a0c();
  if ((param_1 & 1) != 0) {
    uVar1 = local_20;
    FUN_008b8b30();
    local_29 = (undefined1)uVar1;
    if ((uVar1 & 1) != 0) {
      local_18 = 0;
      goto LAB_008ae42c;
    }
  }
  uVar1 = local_20;
  (*DAT_028cdec8)(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  FUN_008b8a0c();
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar1;
  _objc_storeStrong(&local_38,0);
LAB_008ae42c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

