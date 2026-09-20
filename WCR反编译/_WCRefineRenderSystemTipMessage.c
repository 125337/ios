// _WCRefineRenderSystemTipMessage @ 006c3f20

void _WCRefineRenderSystemTipMessage
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_570;
  cfstringStruct *local_538;
  cfstringStruct *local_518;
  ulong *local_500;
  cfstringStruct *local_4f0;
  cfstringStruct *local_4e8;
  byte local_4d4;
  cfstringStruct *local_480;
  cfstringStruct *local_478;
  cfstringStruct *local_3b8;
  cfstringStruct *local_3b0;
  ulong *local_360;
  cfstringStruct *local_348;
  cfstringStruct *local_340;
  cfstringStruct *local_320;
  undefined *local_2b8;
  cfstringStruct *local_2b0;
  ulong local_2a8;
  cfstringStruct *local_2a0;
  byte local_291;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  cfstringStruct *local_228;
  undefined *local_220;
  cfstringStruct *local_218;
  int local_20c;
  ulong local_208;
  cfstringStruct *local_200;
  ulong local_1f8;
  cfstringStruct *local_1f0;
  ulong local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  byte local_191;
  cfstringStruct *local_190;
  ulong local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  byte local_169;
  cfstringStruct *local_168 [3];
  byte local_149;
  ulong local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_138,param_2);
  local_140 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  uVar3 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_hasPrefix__0269d320,&cf_WCRefineAtMention___);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_149 = (byte)uVar3;
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_at_mentionrenderer_enterhref__dbody__lu);
    _objc_retainAutoreleasedReturnValue();
    _WCRefineCrashReporterBreadcrumb();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (local_130 == (cfstringStruct *)0x0) {
    local_320 = &cf___;
  }
  else {
    local_320 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_168[0] = local_320;
  uVar3 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  local_169 = uVar3 != 0;
  if ((bool)local_169) {
    pcVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_340 = &cf_pQlSa__g;
    }
    else {
      local_340 = local_138;
    }
    local_348 = local_340;
  }
  else {
    local_348 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = local_348;
  pcVar2 = local_140;
  FUN_006c52cc(local_140,&cf_DDA0DD);
  _objc_retainAutoreleasedReturnValue();
  if ((local_169 & 1) == 0) {
    local_360 = &DAT_0257eda8;
  }
  else {
    local_360 = &local_148;
  }
  uVar3 = *local_360;
  local_180 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_178;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_188 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_190 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_191 = 0;
  pcVar2 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    _memset(auStack_1e0,0,0x40);
    pcVar2 = local_168[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168[0],PTR_s_componentsSeparatedByString__0269d3c0,&cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    local_3b0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_3b0 != (cfstringStruct *)0x0) {
      lVar7 = *local_1d0;
      local_3b8 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_1d0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar7,pcVar2);
          }
          uVar3 = *(ulong *)(local_1d8 + (long)local_3b8 * 8);
          local_1a0 = uVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_1e8 = uVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_1f0 = &cf___;
          local_1f8 = local_1e8;
          local_200 = &cf___;
          FUN_006c54c0(local_1a0,&local_1f8,&local_200);
          _objc_storeStrong(&local_1e8,local_1f8);
          _objc_storeStrong(&local_1f0,local_200);
          uVar3 = local_1e8;
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_208 = uVar3;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar3 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_isEqualToString__0269ccc8,local_190)
          ;
          if ((uVar3 & 1) == 0) {
            local_20c = 0;
          }
          else {
            local_191 = 1;
            local_20c = 2;
          }
          _objc_storeStrong(&local_208);
          _objc_storeStrong(&local_1f0,0);
          _objc_storeStrong(&local_1e8,0);
          if (local_20c != 0) goto LAB_006c4698;
          local_3b8 = (cfstringStruct *)((long)&local_3b8->field0_0x0 + 1);
        } while (local_3b8 < local_3b0);
        local_3b0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,
                   0x10);
        local_3b8 = (cfstringStruct *)0x0;
      } while (local_3b0 != (cfstringStruct *)0x0);
    }
    local_20c = 0;
LAB_006c4698:
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (((local_191 & 1) == 0) &&
     (pcVar2 = local_190, (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0),
     pcVar2 != (cfstringStruct *)0x0)) {
    pcVar2 = local_168[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_168[0],PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      _objc_storeStrong(0,local_168,local_178);
    }
    else {
      pcVar8 = local_168[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168[0],PTR_s_stringByAppendingFormat__026a2088,&cf___);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_168[0];
      local_168[0] = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  pcVar2 = local_168[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_168[0],PTR_s_componentsSeparatedByString__0269d3c0,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_218 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_220 = puVar1;
  _memset(auStack_268,0,0x40);
  pcVar2 = local_218;
  (*(code *)PTR__objc_retain_02578638)();
  local_478 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,0x10);
  if (local_478 != (cfstringStruct *)0x0) {
    lVar7 = *local_258;
    local_480 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_258 - lVar7 != 0) {
          _objc_enumerationMutation(*local_258 - lVar7,pcVar2);
        }
        pcVar8 = *(cfstringStruct **)(local_260 + (long)local_480 * 8);
        local_228 = pcVar8;
        (*(code *)PTR__objc_retain_02578638)();
        local_270 = pcVar8;
        (*(code *)PTR__objc_retain_02578638)();
        local_278 = &cf___;
        local_280 = local_270;
        local_288 = &cf___;
        FUN_006c54c0(local_228,&local_280,&local_288);
        _objc_storeStrong(&local_270,local_280);
        _objc_storeStrong(&local_278,local_288);
        pcVar8 = local_270;
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_290 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        pcVar8 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
        local_4d4 = 0;
        if (pcVar8 != (cfstringStruct *)0x0) {
          pcVar8 = local_290;
          (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_isEqualToString__0269ccc8,local_190)
          ;
          local_4d4 = (byte)pcVar8;
        }
        local_291 = local_4d4 & 1;
        pcVar8 = local_278;
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_length_0269cca0);
        if (pcVar8 == (cfstringStruct *)0x0) {
          if ((local_291 & 1) == 0) {
            local_4f0 = &cf___;
          }
          else {
            local_4f0 = local_180;
          }
          local_4e8 = local_4f0;
        }
        else {
          local_4e8 = local_278;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_2a0 = local_4e8;
        if ((local_291 & 1) == 0) {
          local_500 = &DAT_0257eda8;
        }
        else {
          local_500 = &local_188;
        }
        uVar3 = *local_500;
        (*(code *)PTR__objc_retain_02578638)();
        if (local_270 == (cfstringStruct *)0x0) {
          local_518 = &cf___;
        }
        else {
          local_518 = local_270;
        }
        local_2a8 = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar8 = local_290;
        local_2b0 = local_518;
        if ((local_291 & 1) == 0) {
          pcVar8 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
          if (pcVar8 != (cfstringStruct *)0x0) {
            pcVar4 = local_2b0;
            FUN_006c6184(pcVar8,local_2b0,local_2a0,local_2a8);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_2b0;
            local_2b0 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
        }
        else {
          pcVar4 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_538 = local_180;
          }
          else {
            local_538 = local_2a0;
          }
          FUN_006c5ebc(pcVar8,local_538,local_188);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_2b0;
          local_2b0 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        if (local_2b0 == (cfstringStruct *)0x0) {
          local_570 = &cf___;
        }
        else {
          local_570 = local_2b0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_addObject__0269d180,local_570);
        _objc_storeStrong(&local_2b0);
        _objc_storeStrong(&local_2a8,0);
        _objc_storeStrong(&local_2a0,0);
        _objc_storeStrong(&local_290,0);
        _objc_storeStrong(&local_278,0);
        _objc_storeStrong(&local_270,0);
        local_480 = (cfstringStruct *)((long)&local_480->field0_0x0 + 1);
      } while (local_480 < local_478);
      local_478 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,0x10
                );
      local_480 = (cfstringStruct *)0x0;
    } while (local_478 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_220;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_220,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  local_2b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsString__0269d0b0,&cf_<_wc_custom_link_)
  ;
  if ((((ulong)puVar1 & 1) != 0) &&
     (puVar5 = local_2b8,
     (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_containsString__0269d0b0,&cf_href___),
     puVar1 = local_2b8, ((ulong)puVar5 & 1) != 0)) {
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_href_____);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_href___);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_2b8;
    local_2b8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((local_149 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_at_mentionrenderer_exitcontent__lu);
    _objc_retainAutoreleasedReturnValue();
    _WCRefineCrashReporterBreadcrumb();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_2b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_20c = 1;
  _objc_storeStrong(&local_2b8);
  _objc_storeStrong(&local_220,0);
  _objc_storeStrong(&local_218,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(local_168,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

