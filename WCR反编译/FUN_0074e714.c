// FUN_0074e714 @ 0074e714

void FUN_0074e714(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  uint local_f4;
  uint local_a4;
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
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &cf___;
    pcVar1 = &cf_m_nsUsrName;
    _NSSelectorFromString();
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar2 = local_40;
    FUN_00743f78();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar1 = local_30;
    local_a4 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar3 = &cf_getContactName;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar3);
      local_a4 = (uint)pcVar1;
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_30;
    if ((local_a4 & 1) != 0) {
      pcVar2 = &cf_getContactName;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_40;
    FUN_00743f78();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar1 = local_30;
    local_f4 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar3 = &cf_username;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar3);
      local_f4 = (uint)pcVar1;
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_30;
    if ((local_f4 & 1) != 0) {
      pcVar2 = &cf_username;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_40;
    FUN_00743f78();
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_28 = pcVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

