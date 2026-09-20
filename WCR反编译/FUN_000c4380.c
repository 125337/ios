// FUN_000c4380 @ 000c4380

void FUN_000c4380(undefined8 param_1)

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
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getChatContact_0269d630);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_30 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_30 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    if (local_30 == 0) {
      uVar2 = local_20;
      FUN_000c3ab4(local_20,&cf_m_chatContact);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_30 == 0) {
      uVar2 = local_20;
      FUN_000c3ab4(local_20,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

