// FUN_00236094 @ 00236094

void FUN_00236094(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
  }
  else {
    local_40 = (cfstringStruct *)0x0;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_contact_026a0b68);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_contact_026a0b68);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_40 == (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      FUN_0022bab4(local_30,"m_contact");
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_40 == (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    local_58[0] = (cfstringStruct *)0x0;
    pcVar1 = &cf_m_nsUsrName;
    _NSSelectorFromString();
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58[0];
      local_58[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_58[0];
    FUN_0022a660();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58[0];
      local_58[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_58[0];
    FUN_0022a660();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar1 = &cf_m_nsEncodeUserName;
      _NSSelectorFromString();
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar1);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_58[0];
        local_58[0] = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    pcVar1 = local_58[0];
    FUN_0022a660();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_valueForKey__0269d128,&cf_m_nsEncodeUserName);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58[0];
      local_58[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_58[0];
    FUN_0022a660();
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_28 = pcVar1;
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

