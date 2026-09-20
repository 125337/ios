// FUN_005706b0 @ 005706b0

void FUN_005706b0(long param_1)

{
  undefined *puVar1;
  undefined *local_38;
  uint local_2c;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if (*(long *)(param_1 + 0x20) == DAT_028cb550) {
    puVar1 = &DAT_028cb468;
    _objc_loadWeakRetained(0);
    local_38 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      FUN_005707ac(puVar1,local_20);
    }
    local_2c = (uint)(puVar1 == (undefined *)0x0);
    _objc_storeStrong(&local_38,0);
    if (local_2c == 0) {
      local_2c = 0;
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

