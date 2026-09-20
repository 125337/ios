// FUN_008ea6ac @ 008ea6ac

void FUN_008ea6ac(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  long lVar8;
  cfstringStruct *local_460;
  cfstringStruct *local_3b8;
  undefined *local_320;
  undefined *local_318;
  undefined *local_240;
  undefined *local_238;
  int local_22c;
  undefined1 *local_228;
  undefined *local_220;
  undefined1 *local_218;
  undefined *local_210;
  undefined8 local_208;
  cfstringStruct *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  undefined *local_1a0;
  cfstringStruct *local_198 [3];
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  undefined8 local_160;
  undefined8 local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined8 local_140;
  undefined8 local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  cfstringStruct *local_a8;
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
  local_170 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_170,param_1);
  local_178 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_178,param_2);
  pcVar3 = local_178;
  local_68 = &cf_url;
  local_60 = &cf_mediaUrl;
  local_58 = &cf_musicUrl;
  local_50 = &cf_dataUrl;
  local_48 = &cf_downloadUrl;
  local_40 = &cf_cdnUrl;
  local_38 = &cf_m_nsDataUrl;
  local_30 = &cf_m_nsUrl;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8);
  _objc_retainAutoreleasedReturnValue();
  FUN_008eb4dc();
  _objc_retainAutoreleasedReturnValue();
  local_180 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
  pcVar3 = local_170;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_98 = &cf_url;
    local_90 = &cf_mediaUrl;
    local_88 = &cf_musicUrl;
    local_80 = &cf_m_nsDataUrl;
    local_78 = &cf_m_cdnUrlString;
    local_70 = &cf_m_encryptUrlString;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_98,6
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_008eb4dc();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_180;
    local_180 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  pcVar3 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
  if ((pcVar3 == (cfstringStruct *)0x0) &&
     (pcVar3 = local_170,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_170,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsContent_0269d0a0),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_008e5574();
    _objc_retainAutoreleasedReturnValue();
    local_198[0] = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_a8 = &cf_<(_:dataurl_musicurl_songurl_lowurl_playurl)>___<]_)<_;
    local_a0 = &cf____dataurl_musicurl_songurl_lowurl_playurl______________;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = puVar2;
    _memset(auStack_1e8,0,0x40);
    puVar2 = local_1a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_318 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,0x10);
    if (local_318 != (undefined *)0x0) {
      lVar8 = *local_1d8;
      local_320 = (undefined *)0x0;
      do {
        do {
          if (*local_1d8 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar8,puVar2);
          }
          local_1a8 = *(undefined8 *)(local_1e0 + (long)local_320 * 8);
          puVar5 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                     PTR_s_regularExpressionWithPattern_opt_0269ef10,local_1a8,1,0);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_198[0];
          pcVar4 = local_198[0];
          local_1f0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_198[0],PTR_s_length_0269cca0);
          local_140 = 0;
          local_138 = 0;
          local_208 = 0;
          local_200 = pcVar4;
          local_148 = pcVar4;
          local_130 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_firstMatchInString_options_range_0269ef48,pcVar3,0,0,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          local_1f8 = puVar5;
          if (puVar5 != (undefined1 *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberOfRanges_0269ef18);
            bVar1 = false;
            if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar5) {
              puVar6 = local_1f8;
              puVar5 = PTR_s_rangeAtIndex__0269ef20;
              (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_rangeAtIndex__0269ef20,1);
              bVar1 = puVar6 != (undefined1 *)0x7fffffffffffffff;
              local_218 = puVar6;
              local_210 = puVar5;
            }
          }
          pcVar3 = local_198[0];
          if (bVar1) {
            puVar6 = local_1f8;
            puVar5 = PTR_s_rangeAtIndex__0269ef20;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_rangeAtIndex__0269ef20,1);
            local_228 = puVar6;
            local_220 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_substringWithRange__0269d138,puVar6,puVar5);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_180;
            local_180 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar3 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_stringByRemovingPercentEncoding_0269d840);
            _objc_retainAutoreleasedReturnValue();
            local_3b8 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_3b8 = local_180;
            }
            _objc_storeStrong(&local_180,local_3b8);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar4 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__amp_,&cf__);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_180;
            local_180 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
            if (pcVar3 == (cfstringStruct *)0x0) goto LAB_008eae9c;
            uVar7 = 2;
            local_22c = 2;
          }
          else {
LAB_008eae9c:
            uVar7 = 0;
            local_22c = 0;
          }
          _objc_storeStrong(uVar7,&local_1f8);
          _objc_storeStrong(&local_1f0,0);
          if (local_22c != 0) goto LAB_008eaf40;
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        local_320 = (undefined *)0x0;
      } while (local_318 != (undefined *)0x0);
    }
    local_22c = 0;
LAB_008eaf40:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_https_______s<>_____,0,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_198[0];
      pcVar4 = local_198[0];
      local_238 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_198[0],PTR_s_length_0269cca0);
      local_160 = 0;
      local_158 = 0;
      local_168 = pcVar4;
      local_150 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,pcVar3,0,0,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      local_240 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar2 != (undefined *)0x7fffffffffffffff;
      }
      pcVar3 = local_198[0];
      if (bVar1) {
        puVar2 = local_240;
        puVar5 = PTR_s_range_0269ef50;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_substringWithRange__0269d138,puVar2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_180;
        local_180 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      _objc_storeStrong(&local_240);
      _objc_storeStrong(&local_238,0);
    }
    _objc_storeStrong(&local_1a0);
    _objc_storeStrong(local_198,0);
  }
  pcVar3 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_hasPrefix__0269d320,&cf_http___);
  if ((((ulong)pcVar3 & 1) == 0) &&
     (pcVar3 = local_180,
     (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_hasPrefix__0269d320,&cf_https___),
     ((ulong)pcVar3 & 1) == 0)) {
    local_460 = &cf___;
  }
  else {
    local_460 = local_180;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_22c = 1;
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_460);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

