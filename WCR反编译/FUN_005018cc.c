// FUN_005018cc @ 005018cc

void FUN_005018cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_300;
  ulong local_2f8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_278;
  cfstringStruct *local_268;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  ulong local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  ulong local_128;
  undefined1 auStack_120 [128];
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
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
  local_128 = 0;
  _objc_storeStrong(&local_128,param_1);
  local_130 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_130,param_2);
  local_138 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_138,param_3);
  local_140 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_140,param_4);
  local_148 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_148,param_5);
  local_150 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_150,param_6);
  uVar6 = local_128;
  FUN_004fe524();
  _objc_retainAutoreleasedReturnValue();
  local_158 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__n,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_158;
  local_158 = uVar6;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    _objc_storeStrong(&local_158,&cf__yrc_y);
  }
  local_50 = &cf__;
  local_48 = &cf__;
  local_40 = &cf__;
  local_38 = &cf__;
  local_30 = &cf__;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50);
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf___WCR_AT_TIME__;
  local_70 = &cf___WCR_AT_ROOM__;
  local_68 = &cf___WCR_AT_USER__;
  local_60 = &cf___WCR_AT_CONTENT__;
  local_58 = &cf___WCR_AT_TYPE__;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_160 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,5);
  _objc_retainAutoreleasedReturnValue();
  local_168 = puVar3;
  for (local_170 = (undefined *)0x0; puVar2 = local_170, puVar3 = local_160,
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0), uVar1 = local_158,
      puVar2 < puVar3; local_170 = local_170 + 1) {
    puVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_objectAtIndexedSubscript__0269cc78,local_170);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectAtIndexedSubscript__0269cc78,local_170);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_158;
    local_158 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = &cf___WCR_AT_EMPTY__;
  if (local_130 == (cfstringStruct *)0x0) {
    local_268 = &cf___;
  }
  else {
    local_268 = local_130;
  }
  local_a0 = local_268;
  if (local_138 == (cfstringStruct *)0x0) {
    local_278 = &cf___;
  }
  else {
    local_278 = local_138;
  }
  local_98 = local_278;
  if (local_140 == (cfstringStruct *)0x0) {
    local_288 = &cf___;
  }
  else {
    local_288 = local_140;
  }
  local_90 = local_288;
  pcVar4 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_290 = local_178;
  }
  else {
    local_290 = local_148;
  }
  local_88 = local_290;
  if (local_150 == (cfstringStruct *)0x0) {
    local_2a0 = &cf___;
  }
  else {
    local_2a0 = local_150;
  }
  local_80 = local_2a0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a0,5);
  _objc_retainAutoreleasedReturnValue();
  local_180 = puVar2;
  for (local_188 = (undefined *)0x0; puVar2 = local_188, puVar3 = local_168,
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0), uVar1 = local_158,
      puVar2 < puVar3; local_188 = local_188 + 1) {
    puVar2 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectAtIndexedSubscript__0269cc78,local_188);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_180,PTR_s_objectAtIndexedSubscript__0269cc78,local_188);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_158;
    local_158 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar2;
  _memset(auStack_1d8,0,0x40);
  uVar1 = local_158;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_2f8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_120,0x10);
  if (local_2f8 != 0) {
    lVar5 = *local_1c8;
    local_300 = 0;
    do {
      do {
        if (*local_1c8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar5,uVar1);
        }
        uVar6 = *(ulong *)(local_1d0 + local_300 * 8);
        local_198 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_containsString__0269d0b0,local_178);
        if ((uVar6 & 1) == 0) {
          uVar6 = local_198;
          FUN_004fe524();
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
          if (uVar6 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_addObject__0269d180,local_1e0);
          }
          _objc_storeStrong(&local_1e0,0);
        }
        local_300 = local_300 + 1;
      } while (local_300 < local_2f8);
      local_2f8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_120,0x10)
      ;
      local_300 = 0;
    } while (local_2f8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

