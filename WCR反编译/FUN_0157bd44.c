// FUN_0157bd44 @ 0157bd44

void FUN_0157bd44(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0157bee8;
  }
  local_30 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_30 == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_textView_0269d100);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_textView_0269d100);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  if (local_30 == 0) {
LAB_0157beb0:
    uVar1 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) goto LAB_0157beb0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_0157bee8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

