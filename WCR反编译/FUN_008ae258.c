// FUN_008ae258 @ 008ae258

void FUN_008ae258(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong local_38;
  undefined1 local_2a;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_29 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  FUN_008b8a0c();
  if ((param_1 & 1) != 0) {
    uVar1 = local_20;
    FUN_008b8b30();
    local_2a = (undefined1)uVar1;
    if ((uVar1 & 1) != 0) {
      local_18 = 0;
      goto LAB_008ae33c;
    }
  }
  uVar1 = local_20;
  (*DAT_028cdec0)(local_20,local_28,local_29 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  FUN_008b8a0c();
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar1;
  _objc_storeStrong(&local_38,0);
LAB_008ae33c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

