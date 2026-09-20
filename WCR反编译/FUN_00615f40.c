// FUN_00615f40 @ 00615f40

void FUN_00615f40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_58;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = &DAT_028cb8b0;
  _objc_loadWeakRetained();
  local_28 = puVar1;
  if (((puVar1 == (undefined *)0x0) || (DAT_028cb988 == 0)) || (local_20 == (undefined *)0x0)) {
    local_18 = (undefined *)0x0;
    local_2c = 1;
  }
  else {
    FUN_00619b10();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == local_20) {
      local_58 = local_28;
    }
    else {
      local_58 = (undefined *)0x0;
    }
    local_38 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

