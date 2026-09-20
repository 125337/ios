// FUN_00067434 @ 00067434

byte FUN_00067434(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  long local_38;
  ulong local_30;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    for (local_38 = 0; local_30 != 0 && local_38 < 0x10; local_38 = local_38 + 1) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_WCFinder);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_MMFinder)
         , (uVar1 & 1) == 0)) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_30 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_24 = 0;
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
      _objc_storeStrong(&local_40,0);
      if (local_24 != 0) goto LAB_000675e8;
    }
    local_11 = 0;
    local_24 = 1;
LAB_000675e8:
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

