// FUN_00fc7674 @ 00fc7674

void FUN_00fc7674(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((DAT_028e2ef4 & 1) == 0) {
    puVar1 = &DAT_028e2ee8;
    local_20 = param_1;
    local_18 = param_1;
    _objc_loadWeakRetained();
    local_28 = puVar1;
    FUN_00fc5bcc(puVar1,&cf_fallback_timer_hard);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

