// _WCRefineMessageWrapForView @ 00f1b8e4

void _WCRefineMessageWrapForView(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  long local_38;
  ulong local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    for (local_38 = 0; local_38 < 0x28 && local_30 != 0; local_38 = local_38 + 1) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewModel_0269d080);
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar1;
        if ((uVar1 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
           (uVar1 & 1) == 0)) {
          local_24 = 0;
        }
        else {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_messageWrap_0269d070);
          _objc_retainAutoreleasedReturnValue();
          local_24 = 1;
          local_18 = uVar1;
        }
        _objc_storeStrong(&local_40,0);
        if (local_24 != 0) goto LAB_00f1baa8;
      }
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_18 = 0;
    local_24 = 1;
LAB_00f1baa8:
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

