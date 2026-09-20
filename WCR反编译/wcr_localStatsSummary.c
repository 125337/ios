// wcr_localStatsSummary @ 01dd83d4

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsViewController::wcr_localStatsSummary(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  ulong uVar12;
  dword *pdVar13;
  cfstringStruct *local_420;
  cfstringStruct *local_408;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2b8;
  bool local_289;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  bool local_271;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  undefined *local_260;
  ulong local_258;
  undefined *local_250;
  ulong local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  undefined1 *local_1f8;
  ulong local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  undefined1 *local_1a0;
  bool local_191;
  cfstringStruct *local_190;
  byte local_181;
  undefined *local_180;
  byte local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  int local_15c;
  cfstringStruct *local_158;
  SEL local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = param_2;
  local_148 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sessionResult_026c5440);
  _objc_retainAutoreleasedReturnValue();
  local_158 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = &::cf___;
    local_15c = 1;
    goto LAB_01dd970c;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sampleText_026c5690);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar3 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_171 = 0;
  local_181 = 0;
  local_191 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_2b8 = &::cf___;
  }
  else {
    local_2b8 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_sampleText_026c5690);
    _objc_retainAutoreleasedReturnValue();
    local_171 = 1;
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_170 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_181 = 1;
    local_180 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_190 = local_2b8;
  }
  local_191 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_2b8;
  if ((local_191 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_190);
  }
  if ((local_181 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = puVar2;
  _memset(auStack_1e8,0,0x40);
  pcVar3 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_wordRows_026c5138);
  _objc_retainAutoreleasedReturnValue();
  local_2f0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2f0 != (cfstringStruct *)0x0) {
    lVar11 = *local_1d8;
    local_2f8 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_1d8 - lVar11 != 0) {
          _objc_enumerationMutation(*local_1d8 - lVar11,pcVar3);
        }
        uVar12 = *(ulong *)(local_1e0 + (long)local_2f8 * 8);
        local_1a8 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_word);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_1f0 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar12 & 1) != 0) &&
           (uVar12 = local_1f0,
           (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0), 1 < uVar12)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_addObject__0269d180,local_1f0);
        }
        puVar4 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
        puVar7 = puVar4 + -5;
        if (puVar4 < (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
          local_15c = 0;
        }
        else {
          puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
          local_15c = 2;
        }
        _objc_storeStrong(puVar7,&local_1f0,0);
        if (local_15c != 0) goto LAB_01dd88a0;
        local_2f8 = (cfstringStruct *)((long)&local_2f8->field0_0x0 + 1);
      } while (local_2f8 < local_2f0);
      local_2f0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10)
      ;
      local_2f8 = (cfstringStruct *)0x0;
    } while (local_2f0 != (cfstringStruct *)0x0);
  }
  local_15c = 0;
LAB_01dd88a0:
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = puVar2;
  _memset(auStack_240,0,0x40);
  pcVar3 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_168,PTR_s_componentsSeparatedByString__0269d3c0,&::cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  local_338 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_338 != (cfstringStruct *)0x0) {
    lVar11 = *local_230;
    local_340 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_230 - lVar11 != 0) {
          _objc_enumerationMutation(*local_230 - lVar11,pcVar3);
        }
        uVar12 = *(ulong *)(local_238 + (long)local_340 * 8);
        puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        local_200 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_248 = uVar12;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar12 = local_248;
        puVar2 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_248,PTR_s_rangeOfString__0269d838,&::cf_format_s_);
        local_258 = uVar12;
        local_250 = puVar2;
        if ((uVar12 != 0x7fffffffffffffff) && (uVar12 < 0x10)) {
          uVar5 = local_248;
          local_138 = uVar12;
          local_130 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,PTR_s_substringFromIndex__0269d120,puVar2 + uVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = local_248;
          local_248 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar12);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        uVar12 = local_248;
        (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
        if (uVar12 < 2) {
          pdVar13 = (dword *)((long)&MACH_HEADER.cputype + 1);
          local_15c = 5;
        }
        else {
          uVar12 = local_248;
          (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
          if (0x24 < uVar12) {
            uVar5 = local_248;
            (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_substringToIndex__0269d6c0,0x24);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = local_248;
            local_248 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar12);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_248);
          puVar7 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
          pdVar13 = (dword *)(puVar7 + -3);
          if (puVar7 < (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
            local_15c = 0;
          }
          else {
            pdVar13 = &MACH_HEADER.cputype;
            local_15c = 4;
          }
        }
        _objc_storeStrong(pdVar13,&local_248,0);
        if ((local_15c != 0) && (local_15c != 5)) goto LAB_01dd8cb8;
        local_340 = (cfstringStruct *)((long)&local_340->field0_0x0 + 1);
      } while (local_340 < local_338);
      local_338 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,0x10
                );
      local_340 = (cfstringStruct *)0x0;
    } while (local_338 != (cfstringStruct *)0x0);
  }
  local_15c = 0;
LAB_01dd8cb8:
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isGroup_026af768);
    if (((ulong)pcVar3 & 1) == 0) {
      puVar7 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
    }
    else {
      puVar7 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
    }
    if (puVar7 != (undefined1 *)0x0) goto LAB_01dd8d88;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = &cf_kelgS___ve_g;
    local_15c = 1;
  }
  else {
LAB_01dd8d88:
    puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_158;
    local_260 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isGroup_026af768);
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendString__0269ccb0,&cf_Nkew0Rv_w);
      puVar7 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
      puVar2 = local_260;
      if (puVar7 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        puVar7 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
        puVar2 = local_260;
        if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          puVar7 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf_0RvSP_c0R0_)
          ;
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendString__0269ccb0,&cf_g);
        }
      }
      else {
        puVar7 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf__ONJ0RN0_);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      pcVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_wcr_finishSummary__026c5698,local_260);
      _objc_retainAutoreleasedReturnValue();
      local_15c = 1;
      local_140 = pcVar3;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendString__0269ccb0,&cf_Nkew0RvJ_Yw);
      puVar7 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
      puVar2 = local_260;
      if (puVar7 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendString__0269ccb0,&cf_g);
      }
      else {
        puVar7 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_componentsJoinedByString__0269d140,&::cf_0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf__Y_J_kYv_f0_);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      puVar7 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
      puVar2 = local_260;
      if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar7 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf_0RvSP_gNc0R0_)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      else {
        puVar7 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
        puVar2 = local_260;
        if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar7) {
          puVar7 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf_0RvSP_kY0_);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
      }
      pcVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_271 = false;
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_408 = &cf__g_;
      }
      else {
        local_408 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
        local_270 = local_408;
      }
      local_271 = pcVar8 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_268 = local_408;
      if ((local_271 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_270);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_wcr_rangeTitle_026c5558);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_420 = &cf_ke;
      }
      else {
        local_420 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_wcr_rangeTitle_026c5558);
        _objc_retainAutoreleasedReturnValue();
        local_288 = local_420;
      }
      local_289 = pcVar8 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_280 = local_420;
      if (local_289) {
        (*(code *)PTR__objc_release_02578630)(local_288);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar2 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_totalCount_026a3130);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
      pcVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_typeCounts_026afca8);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_typeCounts_026afca8);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if ((pcVar9 != (cfstringStruct *)0x0) || (pcVar10 != (cfstringStruct *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendString__0269ccb0,&cf_vQ_N);
        if ((pcVar9 != (cfstringStruct *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendFormat__0269d148,&cf__S),
           pcVar10 != (cfstringStruct *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendString__0269ccb0,&::cf_0);
        }
        if (pcVar10 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendFormat__0269d148,&cf_l_);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_appendString__0269ccb0,&::cf_0);
      pcVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_wcr_finishSummary__026c5698,local_260);
      _objc_retainAutoreleasedReturnValue();
      local_15c = 1;
      local_140 = pcVar3;
      _objc_storeStrong(&local_280);
      _objc_storeStrong(&local_268,0);
    }
    _objc_storeStrong(&local_260,0);
  }
  _objc_storeStrong(&local_1f8);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_168,0);
LAB_01dd970c:
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_140;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

