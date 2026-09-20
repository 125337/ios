// extractXHSFromHTML:sourceURL:resolvedURL: @ 0104b514

/* Function Stack Size: 0x28 bytes */

ID WCRefineLinkParser::extractXHSFromHTML_sourceURL_resolvedURL_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  long lVar9;
  ulong local_2b0;
  ulong local_2a8;
  cfstringStruct *local_228;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  ID local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  ID local_1c8;
  ID local_1c0;
  ID local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
  ID local_158;
  ID local_150;
  ID local_148;
  ID local_140;
  undefined1 *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  undefined8 local_120;
  cfstringStruct *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  SEL local_e0;
  ID local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  cfstringStruct *local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = (cfstringStruct *)0x0;
  local_e0 = param_2;
  local_d8 = param_1;
  _objc_storeStrong(&local_e8,param_3);
  local_f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f0,param_4);
  local_f8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f8,param_5);
  puVar3 = PTR_WCRefineLinkParseResult_026cecb0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
  local_100 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setPlatform__026adde8,2);
  if (local_f0 == (cfstringStruct *)0x0) {
    local_200 = &::cf___;
  }
  else {
    local_200 = local_f0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setSourceURL__026addf0,local_200);
  if (local_f8 == (cfstringStruct *)0x0) {
    local_210 = &::cf___;
  }
  else {
    local_210 = local_f8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setResolvedURL__026addf8,local_210);
  puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,
             &cf_window____INITIAL_STATE___s___s______s_S_______s______<_script>_,1,0);
  _objc_retainAutoreleasedReturnValue();
  if (local_e8 == (cfstringStruct *)0x0) {
    local_228 = &::cf___;
  }
  else {
    local_228 = local_e8;
  }
  pcVar4 = local_e8;
  local_108 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  local_c8 = 0;
  local_c0 = 0;
  local_120 = 0;
  local_118 = pcVar4;
  local_d0 = pcVar4;
  local_b8 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,local_228,0,0,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar3;
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18), pcVar4 = local_e8
     , (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar3)) {
    puVar5 = local_110;
    puVar3 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_rangeAtIndex__0269ef20,1);
    local_138 = puVar5;
    local_130 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_substringWithRange__0269d138,puVar5,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_128 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_undefined,&cf_null);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_128;
    local_128 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    IVar6 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_JSONObjectFromString__026adcc0,local_128);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar6;
    if (IVar6 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_fillXHSResult_fromJSON__026ae050,local_100,IVar6);
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_128,0);
  }
  puVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_hasMedia_026ada58);
  if (((ulong)puVar3 & 1) == 0) {
    IVar6 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
               &cf_property__og_video___>__content__________,local_e8,1);
    _objc_retainAutoreleasedReturnValue();
    local_148 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_count_0269cfe0);
    if (IVar6 == 0) {
      IVar7 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                 &cf_content____________>__property__og_video_,local_e8,1);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_148;
      local_148 = IVar7;
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    IVar7 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
    IVar6 = local_d8;
    if (IVar7 != 0) {
      IVar7 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_preferCleanMediaURL__026add40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setVideoURL__026adbb0);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar7);
    }
    IVar6 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
               &cf_property__og_image___>__content__________,local_e8,1);
    _objc_retainAutoreleasedReturnValue();
    local_150 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_count_0269cfe0);
    if (IVar6 == 0) {
      IVar7 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                 &cf_content____________>__property__og_image_,local_e8,1);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_150;
      local_150 = IVar7;
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    IVar7 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
    IVar6 = local_d8;
    if (IVar7 != 0) {
      IVar7 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_preferCleanMediaURL__026add40);
      _objc_retainAutoreleasedReturnValue();
      local_158 = IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar7);
      puVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (puVar8 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_160 = puVar3;
        _memset(auStack_1a8,0,0x40);
        IVar6 = local_150;
        (*(code *)PTR__objc_retain_02578638)();
        local_2a8 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        if (local_2a8 != 0) {
          lVar9 = *local_198;
          local_2b0 = 0;
          do {
            do {
              if (*local_198 - lVar9 != 0) {
                _objc_enumerationMutation(*local_198 - lVar9,IVar6);
              }
              local_168 = *(undefined8 *)(local_1a0 + local_2b0 * 8);
              IVar7 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_preferCleanMediaURL__026add40,local_168);
              _objc_retainAutoreleasedReturnValue();
              local_1b0 = IVar7;
              (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_length_0269cca0);
              if (IVar7 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1b0)
                ;
              }
              _objc_storeStrong(&local_1b0,0);
              local_2b0 = local_2b0 + 1;
            } while (local_2b0 < local_2a8);
            local_2a8 = IVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                       0x10);
            local_2b0 = 0;
          } while (local_2a8 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar6);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setImageURLs__026add68,local_160);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setIsImageNote__026adad0,1);
        _objc_storeStrong(&local_160,0);
      }
      else {
        puVar3 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_coverURL_026ad9a8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (puVar8 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setCoverURL__026add60,local_158);
        }
      }
      _objc_storeStrong(&local_158,0);
    }
    IVar6 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
               &cf_property__og_title___>__content__________,local_e8,1);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_count_0269cfe0);
    if (IVar6 != 0) {
      IVar6 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setTitle__0269cef0);
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_148,0);
  }
  puVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (puVar8 == (undefined *)0x0) {
    IVar6 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
               &cf___https__________________mp4_______,local_e8,1);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = local_d8;
    local_1c0 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bestCleanURLFromList__026adf50,IVar6);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_length_0269cca0);
    if (IVar7 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setVideoURL__026adbb0,local_1c8);
    }
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1c0,0);
  }
  puVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1d1 = 0;
  bVar2 = false;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_videoVariants_026ada88);
    _objc_retainAutoreleasedReturnValue();
    local_1d1 = 1;
    local_1d0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = puVar8 == (undefined *)0x0;
  }
  if ((local_1d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1d0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar6 = local_d8;
  if (bVar2) {
    puVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_variantWithURL_label_width_heigh_026addc8,puVar3,&::cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = IVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_1e0 != 0) {
      local_b0 = local_1e0;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setVideoVariants__026add50);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_1e0,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_normalizeVideoVersusCover__026adff8,local_100);
  puVar3 = local_100;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

