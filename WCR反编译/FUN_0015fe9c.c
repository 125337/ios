// FUN_0015fe9c @ 0015fe9c

void FUN_0015fe9c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_38;
  uint local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,
               PTR_s_stringByEscapingAllLineBreak_0269f748);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_stringByEscapingAllLineBreak_0269f748);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_38 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      pcVar3 = local_38;
      bVar1 = ((ulong)pcVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      local_30 = (uint)bVar1;
      _objc_storeStrong(&local_38,0);
      if (local_30 != 0) goto LAB_00160138;
    }
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_creturn_s_,&cf_space_s_)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_30 = 1;
  }
LAB_00160138:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

