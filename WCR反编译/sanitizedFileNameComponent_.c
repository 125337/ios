// sanitizedFileNameComponent: @ 009137cc

/* Function Stack Size: 0x18 bytes */

ID LogViewerViewController::sanitizedFileNameComponent_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_238;
  undefined *local_230;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  undefined *local_180;
  cfstringStruct *local_178;
  undefined4 local_16c;
  cfstringStruct *local_168;
  SEL local_160;
  ID local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined8 local_140;
  undefined8 local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined8 local_120;
  undefined8 local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [128];
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = (cfstringStruct *)0x0;
  local_160 = param_2;
  local_158 = param_1;
  _objc_storeStrong(&local_168,param_3);
  pcVar2 = local_168;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar3 = local_168, (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0),
     pcVar2 = local_168, pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = &::cf___;
    local_16c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_178 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_88 = &cf__;
    local_80 = &cf__;
    local_78 = &cf__;
    local_70 = &cf__;
    local_68 = &cf__;
    local_60 = &::cf__;
    local_58 = &cf_<;
    local_50 = &cf_>;
    local_48 = &cf__;
    local_40 = &::cf_newline_s_;
    local_38 = &cf_creturn_s_;
    local_30 = &cf_tab_s_;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88,
               0xc);
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar1;
    _memset(auStack_1c8,0,0x40);
    puVar1 = local_180;
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_108,0x10);
    if (local_230 != (undefined *)0x0) {
      lVar4 = *local_1b8;
      local_238 = (undefined *)0x0;
      do {
        do {
          if (*local_1b8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar4,puVar1);
          }
          pcVar2 = local_178;
          uVar5 = *(undefined8 *)(local_1c0 + (long)local_238 * 8);
          pcVar3 = local_178;
          local_188 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
          local_120 = 0;
          local_118 = 0;
          local_128 = pcVar3;
          local_110 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_replaceOccurrencesOfString_withS_026a1e00,uVar5,&cf__,0,0,pcVar3);
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_108,
                   0x10);
        local_238 = (undefined *)0x0;
      } while (local_230 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar2 = local_178;
    pcVar3 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
    local_140 = 0;
    local_138 = 0;
    local_148 = pcVar3;
    local_130 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&::cf_space_s_,&cf__,0,0,
               pcVar3);
    pcVar2 = local_178;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = pcVar2;
    local_16c = 1;
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_150;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

