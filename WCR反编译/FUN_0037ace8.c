// FUN_0037ace8 @ 0037ace8

void FUN_0037ace8(long param_1)

{
  long lVar1;
  cfstringStruct *local_50;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    local_50 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_50 == (cfstringStruct *)0x0) {
      local_50 = &cf_deferredScrolling;
    }
    FUN_0037ad98(lVar1,local_50,*(undefined8 *)(param_1 + 0x30));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

