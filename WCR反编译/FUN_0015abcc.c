// FUN_0015abcc @ 0015abcc

void FUN_0015abcc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_a0;
  ulong local_50 [4];
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
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_30 == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((local_30 == 0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
       (uVar1 & 1) == 0)) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsUsrName_0269d638);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) == 0) {
        local_a0 = 0;
      }
      else {
        local_a0 = local_50[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a0;
      local_24 = 1;
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

