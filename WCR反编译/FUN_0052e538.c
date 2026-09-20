// FUN_0052e538 @ 0052e538

void FUN_0052e538(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_98;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_00529d10();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_30;
    FUN_0052b368(0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_98 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    FUN_0052e30c();
    local_54 = SUB84(pcVar1,0);
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = &cf___;
    if ((local_30 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_contentDesc_026a4a10),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentDesc_026a4a10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) != 0) {
        _objc_storeStrong(&local_60,local_68);
      }
      _objc_storeStrong(&local_68,0);
    }
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if ((cfstringStruct *)0x30 < pcVar1) {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringToIndex__0269d6c0,0x30);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_u____t__u_d___);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_28 = puVar2;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_50,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_tid___);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

