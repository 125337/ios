// normalizedGroupIdComponentFromName: @ 01ad6dec

/* Function Stack Size: 0x18 bytes */

ID WCRefineGroupManager::normalizedGroupIdComponentFromName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_80;
  undefined *local_60;
  undefined2 local_52;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_80 = &cf_group;
  }
  else {
    local_80 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_40 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,
             &cf_abcdefghijklmnopqrstuvwxyz0123456789__);
  _objc_retainAutoreleasedReturnValue();
  local_50 = (cfstringStruct *)0x0;
  local_48 = puVar4;
  while( true ) {
    pcVar2 = local_50;
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    bVar1 = false;
    if (pcVar2 < pcVar3) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      bVar1 = pcVar2 < &MACH_HEADER.flags;
    }
    if (!bVar1) break;
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_characterAtIndex__0269fa18,local_50);
    local_52 = SUB82(pcVar2,0);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithCharacters_length__0269fc18,
               &local_52,1);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_rangeOfCharacterFromSet__0269db68,local_48);
    if (puVar4 != (undefined *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_appendString__0269ccb0,local_60);
    }
    _objc_storeStrong(&local_60,0);
    local_50 = (cfstringStruct *)((long)&local_50->field0_0x0 + 1);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_18 = local_38;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_group;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

