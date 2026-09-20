// FUN_000c7e88 @ 000c7e88

void FUN_000c7e88(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  int local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
    goto LAB_000c8324;
  }
  pcVar1 = &cf_chatContact;
  _NSSelectorFromString();
  pcVar2 = local_30;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar1);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    pcVar1 = local_58[0];
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_60 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar4 = (ulong)pcVar1 & 0xffffffff;
        if (((ulong)pcVar1 & 1) == 0) {
LAB_000c823c:
          local_34 = 0;
        }
        else {
          pcVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
          pcVar1 = local_60;
          uVar4 = 0;
          if (pcVar2 == (cfstringStruct *)0x0) goto LAB_000c823c;
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar4 = 1;
          local_34 = 1;
        }
        _objc_storeStrong(uVar4,&local_60,0);
        if (local_34 != 0) goto LAB_000c8278;
      }
      local_34 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_34 = 1;
    }
LAB_000c8278:
    _objc_storeStrong(local_58,0);
    if (local_34 != 0) goto LAB_000c8324;
  }
  pcVar1 = local_30;
  FUN_000c74bc();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_000c8824();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_34 = 1;
LAB_000c8324:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

