// FUN_018e32d8 @ 018e32d8

void FUN_018e32d8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_28 = &cf__;
  }
  else {
    local_28 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_20;
  local_20 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(local_28);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  while( true ) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_space_s_);
    pcVar1 = local_20;
    if (((ulong)pcVar3 & 1) == 0) break;
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_space_s_,&cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_20;
    local_20 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

