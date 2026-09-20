// FUN_004dbf30 @ 004dbf30

void FUN_004dbf30(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    local_30 = (cfstringStruct *)0x0;
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_contact_026a0b68);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_contact_026a0b68);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_30 == (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_30;
    FUN_004da094(local_30,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    local_24 = 1;
    local_18 = pcVar1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

