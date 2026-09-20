// FUN_007221a8 @ 007221a8

void FUN_007221a8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  undefined1 local_39;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_28 == 0) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_canSendCaptureImage_026a7858);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_canSendCaptureImage_026a7858);
      local_39 = (undefined1)uVar1;
      if ((uVar1 & 1) == 0) {
        local_18 = 0;
        local_38 = 1;
        goto LAB_00722494;
      }
    }
    local_48 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_delegate_0269d0e0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48;
      local_48 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_48 == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_delegate);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48;
      local_48 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_38 = 1;
    _objc_storeStrong(&local_48,0);
  }
LAB_00722494:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

