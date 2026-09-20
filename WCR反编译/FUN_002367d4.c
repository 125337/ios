// FUN_002367d4 @ 002367d4

void FUN_002367d4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
     (uVar1 & 1) == 0)) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionAt__026a0a78,0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if (uVar1 == 0) {
      for (local_40 = 1; local_40 < 6; local_40 = local_40 + 1) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_getSectionAt__026a0a78,local_40 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_38;
        local_38 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_38 != 0) break;
      }
    }
    uVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

