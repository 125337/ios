// FUN_00f1d670 @ 00f1d670

void FUN_00f1d670(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_38;
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
    goto LAB_00f1db48;
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsTitle_026a9d60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar1 = local_30, pcVar3 == (cfstringStruct *)0x0)) {
    pcVar1 = local_20;
    FUN_00f1d1f4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) || (pcVar1 == local_20)) {
LAB_00f1d9d4:
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsTitle);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_30;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      pcVar3 = local_30;
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsTitle_026a9d60);
      if (((ulong)pcVar1 & 1) == 0) {
LAB_00f1d8a8:
        pcVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_nsTitle);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_30;
        local_30 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_30;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        pcVar3 = local_30;
        if (((ulong)pcVar1 & 1) == 0) goto LAB_00f1d9d4;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      else {
        pcVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsTitle_026a9d60);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_30;
        local_30 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_30;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((((ulong)pcVar1 & 1) == 0) ||
           (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0)
           , pcVar1 = local_30, pcVar3 == (cfstringStruct *)0x0)) goto LAB_00f1d8a8;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
    }
    local_24 = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_24 = 1;
  }
  _objc_storeStrong(&local_30,0);
LAB_00f1db48:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

