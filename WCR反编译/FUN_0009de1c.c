// FUN_0009de1c @ 0009de1c

void FUN_0009de1c(undefined8 param_1)

{
  long lVar1;
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
    _WCRAvatarExternalOverlayForContainer();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 == 0) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,0x24f6e4);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

