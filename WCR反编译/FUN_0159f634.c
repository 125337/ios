// FUN_0159f634 @ 0159f634

void FUN_0159f634(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSError_026ce470;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSError_026ce470,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_Q__;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_39 = 0;
    local_49 = 0;
    if (((ulong)pcVar4 & 1) == 0) {
      local_a0 = (cfstringStruct *)0x0;
    }
    else {
      local_a0 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInfo_0269f138);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_30 = local_a0;
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c0 = &cf_Q__;
    }
    else {
      local_c0 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_c0;
    }
    local_61 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_c0;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (0 < (long)local_30) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,&cf_HTTP);
      if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_H);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        local_58 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    pcVar2 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_24 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

