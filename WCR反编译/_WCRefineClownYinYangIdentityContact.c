// _WCRefineClownYinYangIdentityContact @ 00f17fa0

void _WCRefineClownYinYangIdentityContact(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_80;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_18 = local_28;
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00f16348(local_20,PTR_s_m_nsRealChatUsr_0269d190);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    FUN_00f181e0();
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      FUN_00f16348(local_20,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar2 = local_38;
    FUN_00f181e0();
    uVar1 = local_28;
    if ((uVar2 & 1) == 0) {
      FUN_00f182f8();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      if ((uVar2 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
         (uVar2 & 1) == 0)) {
        uVar1 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_2c = 1;
      }
      else {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactByName__0269d178,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_80 = uVar1;
        if (uVar1 == 0) {
          local_80 = local_28;
        }
        local_48 = uVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_80;
        local_2c = 1;
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

