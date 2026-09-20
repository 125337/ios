// FUN_008b3dc4 @ 008b3dc4

void FUN_008b3dc4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong local_50;
  uint local_48;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar1,param_4);
  FUN_008b4e10();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = local_20;
    (*DAT_028cdfe0)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_18 = uVar2;
  }
  else {
    FUN_008c0c98();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = local_30;
      FUN_008b50d8();
      if ((uVar2 & 1) != 0) {
        uVar2 = local_30;
        FUN_008c4410(local_30,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar2;
        if (uVar2 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar2;
        }
        local_48 = (uint)(uVar2 != 0);
        _objc_storeStrong(&local_50,0);
        if (local_48 != 0) goto LAB_008b3fa8;
      }
      uVar2 = local_20;
      (*DAT_028cdfe0)(local_20,local_28,local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 1;
      local_18 = uVar2;
    }
    else {
      uVar2 = local_20;
      (*DAT_028cdfe0)(local_20,local_28,local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 1;
      local_18 = uVar2;
    }
  }
LAB_008b3fa8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

