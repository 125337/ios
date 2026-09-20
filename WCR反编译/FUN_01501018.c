// FUN_01501018 @ 01501018

byte FUN_01501018(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_68 = local_30;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_68 = &cf___;
  }
  else {
    local_40 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_21 = 1;
  }
  else {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_Y6RSb);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_pQgw);
      if (((((ulong)pcVar3 & 1) == 0) &&
          (pcVar3 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_zsSgw),
          ((ulong)pcVar3 & 1) == 0)) &&
         (pcVar3 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_pQSb),
         ((ulong)pcVar3 & 1) == 0)) {
        local_18 = &DAT_028e37f0;
        local_20 = 0;
        _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586378);
        if (*local_18 + 1 != 0) {
          _dispatch_once(*local_18 + 1,local_18,local_20);
        }
        _objc_storeStrong(&local_20,0);
        uVar4 = DAT_028e37e8;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e37e8,PTR_s_containsObject__0269cbb8,local_38);
        local_21 = (byte)uVar4 & 1;
      }
      else {
        local_21 = 1;
      }
    }
    else {
      local_21 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

