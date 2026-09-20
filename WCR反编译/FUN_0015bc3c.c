// FUN_0015bc3c @ 0015bc3c

void FUN_0015bc3c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    local_28 = 0;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_tipsNewNavBar_0269f658);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tipsNewNavBar_0269f658);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_28 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_28 == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_initCustomNavigationBar_0269f660)
      ;
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_initCustomNavigationBar_0269f660);
      }
      local_1c = 0;
    }
    else {
      local_1c = 1;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

