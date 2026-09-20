// FUN_0009501c @ 0009501c

void FUN_0009501c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_c0;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_18 = (cfstringStruct *)0x0;
    local_24 = 1;
  }
  else {
    local_30 = (cfstringStruct *)0x0;
    pcVar1 = &cf_CMessageWrap;
    _NSClassFromString();
    puVar3 = PTR_s_GetPathOfAppData__0269e218;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       (pcVar2 = pcVar1,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GetPathOfAppData__0269e218),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3,local_20);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_30 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (((local_30 == (cfstringStruct *)0x0) ||
        (pcVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
        pcVar1 == (cfstringStruct *)0x0)) &&
       (pcVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFilePath_0269e220),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFilePath_0269e220);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_c0 = (cfstringStruct *)0x0;
    }
    else {
      local_c0 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c0;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

