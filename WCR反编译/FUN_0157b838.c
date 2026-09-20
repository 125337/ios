// FUN_0157b838 @ 0157b838

void FUN_0157b838(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
      }
      local_24 = (uint)(uVar1 != 0);
      _objc_storeStrong(&local_30,0);
      if (local_24 != 0) goto LAB_0157b97c;
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_textView_0269d100);
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_textView_0269d100);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = uVar1;
    }
  }
LAB_0157b97c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

