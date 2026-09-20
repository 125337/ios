// FUN_00fc2f88 @ 00fc2f88

void FUN_00fc2f88(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  pcVar3 = local_20;
  if (((ulong)pcVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) == 0) {
      if (local_20 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
        local_24 = 1;
      }
      else {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_30 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)pcVar2 & 1) == 0) {
          local_70 = &cf___;
        }
        else {
          local_70 = local_30;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_70;
        local_24 = 1;
        _objc_storeStrong(&local_30,0);
      }
    }
    else {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_58 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_58;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_24 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_24 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

