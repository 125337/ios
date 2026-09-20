// FUN_021867fc @ 021867fc

void FUN_021867fc(undefined8 param_1)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined8 ***pppuVar4;
  undefined8 **local_38;
  undefined4 local_2c;
  undefined8 **local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  pppuVar2 = &local_20;
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(pppuVar2,param_1);
  FUN_021867f0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = (undefined8 ***)local_20;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = pppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pppuVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  pppuVar2 = (undefined8 ***)local_20;
  ppuVar1 = local_28;
  if (((ulong)pppuVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = ppuVar1;
    local_2c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pppuVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pppuVar4 = (undefined8 ***)local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = local_38;
    local_38 = pppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    (*(code *)PTR__objc_release_02578630)(pppuVar4);
    pppuVar4 = (undefined8 ***)local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = local_38;
    local_38 = pppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    (*(code *)PTR__objc_release_02578630)(pppuVar4);
    pppuVar4 = (undefined8 ***)local_38;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pppuVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = local_38;
    local_38 = pppuVar4;
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pppuVar4 = (undefined8 ***)local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    ppuVar1 = local_28;
    if (pppuVar4 == (undefined8 ***)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = ppuVar1;
    }
    else {
      pppuVar4 = (undefined8 ***)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (&MACH_HEADER.sizeofcmds < pppuVar4) {
        pppuVar4 = (undefined8 ***)local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringToIndex__0269d6c0,0x14);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = local_38;
        local_38 = pppuVar4;
        (*(code *)PTR__objc_release_02578630)(ppuVar1);
      }
      ppuVar1 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = ppuVar1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

