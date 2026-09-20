// FUN_00328f24 @ 00328f24

void FUN_00328f24(long param_1)

{
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_28 = param_1;
  if (param_1 != 0) {
    _objc_setAssociatedObject(param_1,&_kWCContactsTopShortcutRefreshScheduledKey,0,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

