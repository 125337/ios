// FUN_016d1218 @ 016d1218

void FUN_016d1218(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_f8;
  cfstringStruct *local_c8;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
  pcVar3 = local_30;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = &cf_GetContact;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    pcVar2 = local_30;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = &cf_GetContact;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_38;
      local_38 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getChatContact_0269d630);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  bVar1 = local_38 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_c8 = (cfstringStruct *)0x0;
  }
  else {
    local_c8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_c8;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  pcVar3 = local_50[0];
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_f8 = &cf___;
  }
  else {
    local_f8 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_f8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_f8;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

