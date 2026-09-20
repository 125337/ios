// safeGroupIdComponentFromLegacyId: @ 01ad2e3c

/* Function Stack Size: 0x18 bytes */

ID WCRefineGroupManager::safeGroupIdComponentFromLegacyId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_110;
  cfstringStruct *local_e8;
  undefined *local_a8;
  undefined2 local_9a;
  cfstringStruct *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  SEL local_70;
  ID local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_78 = (cfstringStruct *)0x0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  if (local_78 == (cfstringStruct *)0x0) {
    local_e8 = &::cf___;
  }
  else {
    local_e8 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,&cf_grp_);
  if (((ulong)local_e8 & 1) == 0) {
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hasPrefix__0269d320,&cf_WCRefine_);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_substringFromIndex__0269d120,9);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_80;
      local_80 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  else {
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_substringFromIndex__0269d120,4);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_80;
    local_80 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_80;
  local_80 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_88 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,
             &cf_abcdefghijklmnopqrstuvwxyz0123456789__);
  _objc_retainAutoreleasedReturnValue();
  local_98 = (cfstringStruct *)0x0;
  local_90 = puVar4;
  while( true ) {
    pcVar2 = local_98;
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    bVar1 = false;
    if (pcVar2 < pcVar3) {
      pcVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      bVar1 = pcVar2 < (cfstringStruct *)(segment_command_00000020.segname + 8);
    }
    if (!bVar1) break;
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_characterAtIndex__0269fa18,local_98);
    local_9a = SUB82(pcVar2,0);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithCharacters_length__0269fc18,
               &local_9a,1);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_rangeOfCharacterFromSet__0269db68,local_90);
    if (puVar4 == (undefined *)0x7fffffffffffffff) {
      pcVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if ((pcVar2 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasSuffix__0269d018,&cf__),
         ((ulong)pcVar2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_appendString__0269ccb0,&cf__);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_appendString__0269ccb0,local_a8);
    }
    _objc_storeStrong(&local_a8,0);
    local_98 = (cfstringStruct *)((long)&local_98->field0_0x0 + 1);
  }
  while (pcVar2 = local_88,
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,&cf__),
        ((ulong)pcVar2 & 1) != 0) {
    local_38 = 0;
    local_40 = 1;
    local_30 = 0;
    local_28 = 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_deleteCharactersInRange__026a84a8,0,1);
  }
  while (pcVar3 = local_88,
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasSuffix__0269d018,&cf__),
        pcVar2 = local_88, ((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    local_58 = (undefined1 *)((long)&pcVar3[-1].field3_0x18 + 7);
    local_60 = 1;
    local_48 = 1;
    local_50 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_deleteCharactersInRange__026a84a8,local_58,1)
    ;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_110 = &cf_group;
  }
  else {
    local_110 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_110;
}

