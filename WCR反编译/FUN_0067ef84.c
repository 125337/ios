// FUN_0067ef84 @ 0067ef84

void FUN_0067ef84(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00680afc(local_18,&cf_m_contact);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if (uVar1 == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_20;
      local_20 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  if (local_20 == 0) {
    uVar2 = local_18;
    FUN_00680afc(local_18,&cf_m_chatContact);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_20;
  FUN_00680afc(local_20,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0067d980();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

