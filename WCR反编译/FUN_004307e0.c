// FUN_004307e0 @ 004307e0

void FUN_004307e0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_b0;
  cfstringStruct *local_58 [5];
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
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30;
    local_30 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (local_30 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_valueForKey__0269d128,&cf_m_chatRoomContact);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_30;
      local_30 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    local_58[0] = (cfstringStruct *)0x0;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_58[0];
    local_58[0] = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_58[0];
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      local_b0 = &cf___;
    }
    else {
      local_b0 = local_58[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b0;
    local_24 = 1;
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

