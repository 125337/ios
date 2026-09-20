// FUN_000c8824 @ 000c8824

void FUN_000c8824(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
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
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUserName_0269e7a0);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getChatUserName_0269e7a0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_58[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) != 0) {
        _objc_storeStrong(&local_40,local_58[0]);
      }
      _objc_storeStrong(local_58,0);
    }
    local_60 = (cfstringStruct *)0x0;
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) &&
       (pcVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (((pcVar1 == (cfstringStruct *)0x0) && (local_60 == (cfstringStruct *)0x0)) &&
       (pcVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getChatContact_0269d630);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    pcVar1 = local_60;
    if (pcVar3 == (cfstringStruct *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        if ((local_60 != (cfstringStruct *)0x0) &&
           (pcVar1 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
           ((ulong)pcVar1 & 1) != 0)) {
          pcVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_40;
          local_40 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      else {
        _objc_storeStrong(&local_40,local_60);
      }
    }
    pcVar1 = local_40;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_28 = local_40;
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_34 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

