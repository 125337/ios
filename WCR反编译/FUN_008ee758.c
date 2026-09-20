// FUN_008ee758 @ 008ee758

void FUN_008ee758(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_40;
  undefined *local_38 [3];
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_20,&cf_voice);
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_____<>_);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_20;
  local_38[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_componentsJoinedByString__0269d140,&cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_20;
  local_20 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  while( true ) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf___);
    if (((ulong)pcVar1 & 1) == 0) break;
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_20;
    local_20 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_88 = &cf_voice;
  }
  else {
    local_88 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_88);
  return;
}

