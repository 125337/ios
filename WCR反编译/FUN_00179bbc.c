// FUN_00179bbc @ 00179bbc

void FUN_00179bbc(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
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
    uVar1 = local_20;
    FUN_0017ba74(local_20,"m_contact");
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    local_30 = uVar1;
    if (uVar1 == 0) {
      pcVar2 = &cf_m_contact;
      _NSSelectorFromString();
      FUN_0017bb94(uVar3,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_30 == 0) {
      uVar1 = local_20;
      FUN_0017ba74(local_20,"m_data");
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_30 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_20;
    if (local_30 == 0) {
      pcVar2 = &cf_m_data;
      _NSSelectorFromString();
      FUN_0017bb94(uVar3,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    pcVar2 = &cf_m_uiLocalAddContactTime;
    _NSSelectorFromString();
    pcVar4 = &cf_m_contact;
    local_48 = pcVar2;
    _NSSelectorFromString();
    local_50 = pcVar4;
    if (local_30 != 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,local_48);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,local_50);
        if ((uVar3 & 1) != 0) {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar3;
          if (uVar3 != 0) {
            _objc_storeStrong(&local_30,uVar3);
          }
          _objc_storeStrong(&local_58,0);
        }
      }
    }
    uVar3 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

