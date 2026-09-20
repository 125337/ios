// FUN_007cd064 @ 007cd064

void FUN_007cd064(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_108;
  cfstringStruct *local_78;
  undefined4 local_70;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_1);
  pcVar3 = local_60;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    pcVar3 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = pcVar3;
    local_70 = 1;
  }
  else {
    local_28 = &DAT_028cce40;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257fff0);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    pcVar1 = local_60;
    pcVar3 = DAT_028cce38;
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_48 = 0;
    local_40 = 0;
    local_50 = pcVar4;
    local_38 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar1,0,0,pcVar4,&cf___);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__N,&cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_78;
    local_78 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar3 = local_78;
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_78;
    local_78 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_108 = &cf___;
    }
    else {
      local_108 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_108;
    local_70 = 1;
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue(local_58);
  return;
}

