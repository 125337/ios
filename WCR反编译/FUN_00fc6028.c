// FUN_00fc6028 @ 00fc6028

void FUN_00fc6028(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_60;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if ((DAT_028e2ef4 & 1) == 0) {
    puVar1 = &DAT_028e2ee8;
    _objc_loadWeakRetained();
    local_60 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_40 = puVar1;
      FUN_00fc6168();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_60;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_00fc5bcc(local_38,&cf_didBecomeActive);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

