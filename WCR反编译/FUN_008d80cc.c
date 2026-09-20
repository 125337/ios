// FUN_008d80cc @ 008d80cc

void FUN_008d80cc(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40 [3];
  int local_24;
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
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40[0],PTR_s_respondsToSelector__026ca818,PTR_s_msgWrap_0269d078);
        if ((uVar1 & 1) == 0) {
          local_24 = 0;
        }
        else {
          uVar1 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_msgWrap_0269d078);
          _objc_retainAutoreleasedReturnValue();
          local_24 = 1;
          local_18 = uVar1;
        }
      }
      else {
        uVar1 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_messageWrap_0269d070);
        _objc_retainAutoreleasedReturnValue();
        local_24 = 1;
        local_18 = uVar1;
      }
      _objc_storeStrong(local_40,0);
      if (local_24 != 0) goto LAB_008d8360;
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_msgWrap_026a6300);
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_msgWrap_026a6300);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = uVar1;
    }
  }
LAB_008d8360:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

