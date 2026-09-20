// FUN_001704fc @ 001704fc

void FUN_001704fc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_f8;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    local_40 = (cfstringStruct *)0x0;
    pcVar1 = &cf_CMessageWrap;
    _NSClassFromString();
    puVar3 = PTR_s_GetPathOfAppData__0269e218;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       (pcVar2 = pcVar1,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GetPathOfAppData__0269e218),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (((local_40 == (cfstringStruct *)0x0) ||
        (pcVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
        pcVar1 == (cfstringStruct *)0x0)) &&
       (pcVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFilePath_0269e220),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFilePath_0269e220);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (((local_40 == (cfstringStruct *)0x0) ||
        (pcVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
        pcVar1 == (cfstringStruct *)0x0)) &&
       (pcVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsAppMediaUrl_0269f908),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsAppMediaUrl_0269f908);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_40;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_f8 = (cfstringStruct *)0x0;
    }
    else {
      local_f8 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_f8;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

