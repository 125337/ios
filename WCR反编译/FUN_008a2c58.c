// FUN_008a2c58 @ 008a2c58

void FUN_008a2c58(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  FUN_0088fb40();
  pcVar2 = local_20;
  local_28 = param_2;
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar2 & 1) == 0) {
      local_78 = (cfstringStruct *)0x0;
    }
    else {
      local_78 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    local_38 = 1;
  }
  else {
    local_40 = (cfstringStruct *)0x0;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      if (pcVar2 != (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_0);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_40;
          local_40 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
      }
    }
    pcVar2 = local_40;
    FUN_008a2fb0(local_40,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_0;
    }
    else {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_componentsJoinedByString__0269d140,&cf__)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

