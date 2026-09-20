// FUN_0007b184 @ 0007b184

void FUN_0007b184(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    _objc_setAssociatedObject(lVar1,DAT_026df768,0,1);
    FUN_000783f4(local_28,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

