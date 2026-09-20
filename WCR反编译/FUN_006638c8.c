// FUN_006638c8 @ 006638c8

byte FUN_006638c8(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a8;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pcVar2 = local_20, pcVar3 < &MACH_HEADER.cputype)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_a8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_11 = 0;
    }
    else {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf_agw);
      if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf_agemo_);
        if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

