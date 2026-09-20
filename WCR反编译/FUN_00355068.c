// FUN_00355068 @ 00355068

void FUN_00355068(undefined8 param_1)

{
  long lVar1;
  long local_40;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,0x7f199);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    if (lVar1 == 0) {
      local_40 = local_20;
    }
    local_30 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_40;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

