// FUN_01bb3850 @ 01bb3850

ulong FUN_01bb3850(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
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
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_uiMesLocalID);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
      if ((uVar1 & 1) == 0) {
        local_24 = 0;
      }
      else {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_unsignedIntValue_0269db10);
        local_18 = uVar1 & 0xffffffff;
        local_24 = 1;
      }
    }
    else {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_unsignedLongLongValue_0269d6b8);
      local_24 = 1;
      local_18 = uVar1;
    }
    _objc_storeStrong(&local_30,0);
    if (local_24 == 0) {
      local_18 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

