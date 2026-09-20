// FUN_00fddfb0 @ 00fddfb0

byte FUN_00fddfb0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  undefined *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_58 = local_20;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_58 = &cf___;
  }
  else {
    local_30 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((pcVar3 == (cfstringStruct *)0x0) ||
     (pcVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     &section_00000068.reserved3 < pcVar3)) {
    local_11 = 0;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_wcr_);
    if ((((ulong)pcVar3 & 1) == 0) &&
       (pcVar3 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_sf_),
       ((ulong)pcVar3 & 1) == 0)) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
      if ((((ulong)pcVar3 & 1) == 0) &&
         (pcVar3 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__),
         ((ulong)pcVar3 & 1) == 0)) {
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_image_);
        if ((((ulong)pcVar3 & 1) == 0) &&
           (pcVar3 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_imagepair_),
           ((ulong)pcVar3 & 1) == 0)) {
          local_11 = 1;
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

