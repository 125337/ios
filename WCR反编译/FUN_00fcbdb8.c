// FUN_00fcbdb8 @ 00fcbdb8

void FUN_00fcbdb8(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_e8;
  cfstringStruct *local_c0;
  cfstringStruct *local_80;
  undefined *puStack_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ulong *local_50;
  ulong *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_2);
  pcVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_50 = param_4;
  local_48 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_c0 = &cf___;
  }
  else {
    local_c0 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = local_c0;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_e8 = &cf___;
  }
  else {
    local_e8 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_60;
  local_68 = local_e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = pcVar2;
  local_80 = local_60;
  puStack_78 = PTR_s_rangeOfString__0269d838;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf_format_s_);
  if (local_80 == (cfstringStruct *)0x7fffffffffffffff) {
    local_80 = local_60;
    puStack_78 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf__);
  }
  if (((local_80 != (cfstringStruct *)0x7fffffffffffffff) && (local_80 != (cfstringStruct *)0x0)) &&
     (local_80 < (cfstringStruct *)0x41)) {
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringToIndex__0269d6c0,local_80);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_68;
    local_68 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_30 = local_80;
    local_28 = puStack_78;
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_substringFromIndex__0269d120,puStack_78 + (long)local_80);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_70;
    local_70 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar2 = local_68;
  if (local_48 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_48 = (ulong)pcVar2;
  }
  pcVar2 = local_70;
  if (local_50 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_50 = (ulong)pcVar2;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

