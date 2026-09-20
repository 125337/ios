// FUN_0009983c @ 0009983c

void FUN_0009983c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40 [3];
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
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getChatContact_0269d630);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
      }
      local_24 = (uint)(uVar1 != 0);
      _objc_storeStrong(local_40,0);
      if (local_24 != 0) goto LAB_000999cc;
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = uVar1;
    }
  }
LAB_000999cc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

