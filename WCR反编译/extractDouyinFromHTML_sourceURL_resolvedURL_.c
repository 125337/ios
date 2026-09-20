// extractDouyinFromHTML:sourceURL:resolvedURL: @ 0103cecc

/* Function Stack Size: 0x28 bytes */

ID WCRefineLinkParser::extractDouyinFromHTML_sourceURL_resolvedURL_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  undefined1 *puVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  ID local_6f8;
  ID local_6d0;
  ID local_600;
  ID local_5d0;
  cfstringStruct *local_5a0;
  undefined *local_570;
  undefined *local_568;
  cfstringStruct *local_520;
  byte local_4ec;
  ulong local_470;
  ulong local_468;
  ID local_440;
  byte local_40c;
  cfstringStruct *local_408;
  cfstringStruct *local_3f8;
  ID local_3d8;
  ID local_3d0;
  byte local_3c1;
  ID local_3c0;
  byte local_3b1;
  ID local_3b0;
  ID local_3a8;
  ID local_3a0;
  ID local_398;
  ID local_390;
  byte local_381;
  undefined *local_380;
  ID local_378;
  byte local_369;
  undefined *local_368;
  ID local_360;
  ID local_358;
  ID local_350;
  ID local_348;
  undefined *local_340;
  ID local_338;
  ID local_330;
  ID local_328;
  ID local_320;
  ID local_318;
  byte local_309;
  ID local_308;
  byte local_2f9;
  ID local_2f8;
  ID local_2f0;
  cfstringStruct *local_2e8;
  undefined1 *local_2e0;
  undefined *local_2d8;
  cfstringStruct *local_2d0;
  undefined8 local_2c8;
  cfstringStruct *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined *local_260;
  cfstringStruct *local_258;
  ID local_250;
  cfstringStruct *local_248;
  byte local_239;
  undefined *local_238;
  byte local_229;
  ID local_228;
  int local_21c;
  ID local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  byte local_1c1;
  ID local_1c0;
  ID local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  byte local_199;
  undefined *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  SEL local_178;
  ID local_170;
  undefined *local_168;
  cfstringStruct *local_160;
  undefined8 local_158;
  undefined8 local_150;
  cfstringStruct *local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_180 = (cfstringStruct *)0x0;
  local_178 = param_2;
  local_170 = param_1;
  _objc_storeStrong(&local_180,param_3);
  local_188 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_188,param_4);
  local_190 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_190,param_5);
  puVar3 = PTR_WCRefineLinkParseResult_026cecb0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
  local_198 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setPlatform__026adde8,1);
  if (local_188 == (cfstringStruct *)0x0) {
    local_3f8 = &::cf___;
  }
  else {
    local_3f8 = local_188;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setSourceURL__026addf0,local_3f8);
  if (local_190 == (cfstringStruct *)0x0) {
    local_408 = &::cf___;
  }
  else {
    local_408 = local_190;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setResolvedURL__026addf8,local_408);
  IVar4 = local_170;
  puVar3 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_resolvedURL_026ad978);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_douyinURLIsImageNote__026ade98);
  IVar6 = local_170;
  local_1a9 = 0;
  local_40c = 1;
  if ((IVar4 & 1) == 0) {
    puVar5 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_sourceURL_026ad980);
    _objc_retainAutoreleasedReturnValue();
    local_1a9 = 1;
    local_1a8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_douyinURLIsImageNote__026ade98);
    local_40c = (byte)IVar6;
  }
  if ((local_1a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_199 = local_40c & 1;
  IVar4 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_douyinAwemeIDFromURL__026adf78,local_190);
  _objc_retainAutoreleasedReturnValue();
  local_1c1 = 0;
  local_440 = IVar4;
  if (IVar4 == 0) {
    local_440 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_douyinAwemeIDFromURL__026adf78,local_188);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = local_440;
  }
  local_1c1 = IVar4 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = local_440;
  if ((local_1c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1c0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _memset(auStack_210,0,0x40);
  IVar4 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_170,PTR_s_douyinPaceModelsFromHTML__026adfd8,local_180);
  _objc_retainAutoreleasedReturnValue();
  local_468 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_468 != 0) {
    lVar11 = *local_200;
    local_470 = 0;
    do {
      do {
        if (*local_200 - lVar11 != 0) {
          _objc_enumerationMutation(*local_200 - lVar11,IVar4);
        }
        local_1d0 = *(undefined8 *)(local_208 + local_470 * 8);
        IVar6 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_douyinNoteItemFromJSON_target__026adfe0,local_1d0,local_1b8);
        _objc_retainAutoreleasedReturnValue();
        local_218 = IVar6;
        if (IVar6 == 0) {
          local_21c = 7;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_fillDouyinResult_fromJSON__026adfb8,local_198,IVar6);
          IVar6 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,local_198,0);
          puVar3 = local_198;
          if ((IVar6 & 1) == 0) {
            local_21c = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_168 = puVar3;
            local_21c = 1;
          }
        }
        _objc_storeStrong(&local_218,0);
        if ((local_21c != 0) && (local_21c != 7)) goto LAB_0103d42c;
        local_470 = local_470 + 1;
      } while (local_470 < local_468);
      local_468 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10);
      local_470 = 0;
    } while (local_468 != 0);
  }
  local_21c = 0;
LAB_0103d42c:
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (local_21c != 0) goto LAB_0103f134;
  IVar4 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_170,PTR_s_douyinPlayURLsFromRenderedText__026adfe8,local_180);
  _objc_retainAutoreleasedReturnValue();
  local_228 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
  if (IVar4 == 0) {
LAB_0103d804:
    pcVar7 = local_180;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_248 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_JSONObjectFromString__026adcc0,local_248);
    _objc_retainAutoreleasedReturnValue();
    local_250 = IVar4;
    if (IVar4 == 0) {
      pcVar7 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_248,PTR_s_stringByRemovingPercentEncoding_0269d840);
      _objc_retainAutoreleasedReturnValue();
      local_520 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_520 = local_248;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_258 = local_520;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      IVar6 = local_170;
      IVar8 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_unescapeJSONString__026adcb8,local_258);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_JSONObjectFromString__026adcc0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_250;
      local_250 = IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      _objc_storeStrong(&local_258,0);
    }
    if (local_250 == 0) {
LAB_0103da30:
      local_c0 = &cf_<script[_>__id__RENDER_DATA___>__>___s_S____<_script>;
      local_b8 = &cf_window___ROUTER_DATA_s___s______s_S_____s____s_<_script>;
      local_b0 = &cf_<scriptid____UNIVERSAL_DATA_FOR_REHYDRATION___[_>__>___s_S____<_script>;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_260 = puVar3;
      _memset(auStack_2a8,0,0x40);
      puVar3 = local_260;
      (*(code *)PTR__objc_retain_02578638)();
      local_568 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_140,0x10
                );
      if (local_568 != (undefined *)0x0) {
        lVar11 = *local_298;
        local_570 = (undefined *)0x0;
        do {
          do {
            if (*local_298 - lVar11 != 0) {
              _objc_enumerationMutation(*local_298 - lVar11,puVar3);
            }
            local_268 = *(undefined8 *)(local_2a0 + (long)local_570 * 8);
            puVar5 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                       PTR_s_regularExpressionWithPattern_opt_0269ef10,local_268,1,0);
            _objc_retainAutoreleasedReturnValue();
            if (local_180 == (cfstringStruct *)0x0) {
              local_5a0 = &::cf___;
            }
            else {
              local_5a0 = local_180;
            }
            pcVar7 = local_180;
            local_2b0 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
            local_158 = 0;
            local_150 = 0;
            local_2c8 = 0;
            local_2c0 = pcVar7;
            local_160 = pcVar7;
            local_148 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_firstMatchInString_options_range_0269ef48,local_5a0,0,0,pcVar7);
            _objc_retainAutoreleasedReturnValue();
            local_2b8 = puVar5;
            if ((puVar5 == (undefined1 *)0x0) ||
               ((*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberOfRanges_0269ef18),
               pcVar7 = local_180, puVar5 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
              local_21c = 0xf;
            }
            else {
              puVar9 = local_2b8;
              puVar5 = PTR_s_rangeAtIndex__0269ef20;
              (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_rangeAtIndex__0269ef20,1);
              local_2e0 = puVar9;
              local_2d8 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_substringWithRange__0269d138,puVar9,puVar5);
              _objc_retainAutoreleasedReturnValue();
              local_2d0 = pcVar7;
              (*(code *)PTR__objc_retain_02578638)();
              local_2e8 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__quot_,&::cf__);
              _objc_retainAutoreleasedReturnValue();
              pcVar10 = local_2e8;
              local_2e8 = pcVar7;
              (*(code *)PTR__objc_release_02578630)(pcVar10);
              pcVar10 = local_2e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2e8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___x2F_,&cf__)
              ;
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = local_2e8;
              local_2e8 = pcVar10;
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              IVar4 = local_170;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_JSONObjectFromDouyinEmbeddedText_026adce0,local_2e8);
              _objc_retainAutoreleasedReturnValue();
              local_2f9 = 0;
              local_5d0 = IVar4;
              if (IVar4 == 0) {
                local_5d0 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_JSONObjectFromString__026adcc0,local_2e8);
                _objc_retainAutoreleasedReturnValue();
                local_2f8 = local_5d0;
              }
              local_2f9 = IVar4 == 0;
              (*(code *)PTR__objc_retain_02578638)();
              local_2f0 = local_5d0;
              if ((local_2f9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2f8);
              }
              (*(code *)PTR__objc_release_02578630)(IVar4);
              IVar4 = local_170;
              if (local_2f0 == 0) {
                IVar8 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_unescapeJSONString__026adcb8,local_2e8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_JSONObjectFromString__026adcc0);
                _objc_retainAutoreleasedReturnValue();
                IVar6 = local_2f0;
                local_2f0 = IVar4;
                (*(code *)PTR__objc_release_02578630)(IVar6);
                (*(code *)PTR__objc_release_02578630)(IVar8);
              }
              IVar4 = local_2f0;
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
              if ((IVar4 & 1) != 0) {
                IVar4 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_JSONObjectFromDouyinEmbeddedText_026adce0,local_2f0);
                _objc_retainAutoreleasedReturnValue();
                local_309 = 0;
                local_600 = IVar4;
                if (IVar4 == 0) {
                  local_600 = local_170;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_170,PTR_s_JSONObjectFromString__026adcc0,local_2f0);
                  _objc_retainAutoreleasedReturnValue();
                  local_308 = local_600;
                }
                local_309 = IVar4 == 0;
                _objc_storeStrong(&local_2f0,local_600);
                if ((local_309 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_308);
                }
                (*(code *)PTR__objc_release_02578630)(IVar4);
              }
              if (local_2f0 == 0) {
                local_21c = 0xf;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_fillDouyinResult_fromJSON__026adfb8,local_198,local_2f0);
                IVar4 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_douyinResultHasPrimaryMedia__026adea0,local_198);
                puVar5 = local_198;
                if ((IVar4 & 1) == 0) {
                  local_21c = 0;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_168 = puVar5;
                  local_21c = 1;
                }
              }
              _objc_storeStrong(&local_2f0);
              _objc_storeStrong(&local_2e8,0);
              _objc_storeStrong(&local_2d0,0);
            }
            _objc_storeStrong(&local_2b8);
            _objc_storeStrong(&local_2b0,0);
            if ((local_21c != 0) && (local_21c != 0xf)) goto LAB_0103e17c;
            local_570 = local_570 + 1;
          } while (local_570 < local_568);
          local_568 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_140,
                     0x10);
          local_570 = (undefined *)0x0;
        } while (local_568 != (undefined *)0x0);
      }
      local_21c = 0;
LAB_0103e17c:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_21c == 0) {
        if (((local_199 & 1) == 0) &&
           (puVar3 = local_198,
           (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_isImageNote_026ad960),
           ((ulong)puVar3 & 1) == 0)) {
          IVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf__playApi__s___s__________,local_180);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = local_170;
          local_318 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf__playAddr__s___s__________,local_180,1);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_170;
          local_320 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf__url_list__s___s____s___https__________________mp4_______,local_180,1);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = local_170;
          local_328 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf__download_addr___s_S__0_500___url_list__s___s____s__________,local_180,1);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_170;
          local_330 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf_____play_addr_playAddr____s_S__0_500___url_list__s___s____s__________,
                     local_180,1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_338 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_340 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_addObjectsFromArray__0269d540,local_330);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_340,PTR_s_addObjectsFromArray__0269d540,local_318);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_340,PTR_s_addObjectsFromArray__0269d540,local_320);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_340,PTR_s_addObjectsFromArray__0269d540,local_328);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_340,PTR_s_addObjectsFromArray__0269d540,local_338);
          puVar3 = local_340;
          (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_count_0269cfe0);
          IVar4 = local_170;
          if (puVar3 != (undefined *)0x0) {
            puVar3 = local_340;
            (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_normalizeDouyinPlayURL__026adcf8);
            _objc_retainAutoreleasedReturnValue();
            local_348 = IVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            IVar4 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_URLLooksLikeAudioMediaURL__026add00,local_348);
            if ((IVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setVideoURL__026adbb0,local_348)
              ;
              IVar4 = local_170;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_synthesizeDouyinVariantsFromPlay_026adff0,local_348,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setVideoVariants__026add50);
              (*(code *)PTR__objc_release_02578630)(IVar4);
            }
            _objc_storeStrong(&local_348,0);
          }
          IVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf__url_list__s___s____s___https___________________jpeg_jpg_png_webp________,
                     local_180);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = local_170;
          local_350 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf_____download_url_list_downloadUrlList___s___s____s__________,local_180,1);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_170;
          local_358 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_compactedDouyinNoteImageURLs__026adf60,IVar6);
          _objc_retainAutoreleasedReturnValue();
          local_360 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
          local_369 = 0;
          bVar2 = 0;
          if (IVar4 != 0) {
            puVar3 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_videoURL_026ad970);
            _objc_retainAutoreleasedReturnValue();
            local_369 = 1;
            local_368 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar2 = 1;
            if (puVar3 != (undefined *)0x0) {
              bVar2 = local_199;
            }
          }
          if ((local_369 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_368);
          }
          if ((bVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setImageURLs__026add68,local_360);
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setIsImageNote__026adad0,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setImagesFromPageScan__026adeb0,1)
            ;
          }
          IVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_compactedDouyinNoteImageURLs__026adf60,local_350);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_198;
          local_378 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_imageURLs_026adac8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_381 = 0;
          bVar2 = 0;
          if (puVar5 == (undefined *)0x0) {
            IVar4 = local_378;
            (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_count_0269cfe0);
            bVar2 = 0;
            if (IVar4 != 0) {
              puVar5 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_videoURL_026ad970);
              _objc_retainAutoreleasedReturnValue();
              local_381 = 1;
              local_380 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar2 = 1;
              if (puVar5 != (undefined *)0x0) {
                bVar2 = local_199;
              }
            }
          }
          if ((local_381 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_380);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if ((bVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setImageURLs__026add68,local_378);
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setImagesFromPageScan__026adeb0,1)
            ;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setIsImageNote__026adad0,1);
          }
          puVar3 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_imageURLs_026adac8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar2 = 0;
          if (puVar5 == (undefined *)0x0) {
            bVar2 = local_199;
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if ((bVar2 & 1) != 0) {
            IVar4 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_douyinImageURLsFromHTML__026ae000,local_180);
            _objc_retainAutoreleasedReturnValue();
            local_390 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
            if (IVar4 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setImageURLs__026add68,local_390);
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setIsImageNote__026adad0,1);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setImagesFromPageScan__026adeb0,1);
            }
            _objc_storeStrong(&local_390,0);
          }
          IVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &
                     cf__music___s_S__0_800___play_url___s_S__0_200___url_list__s___s____s__________
                     ,local_180,1);
          _objc_retainAutoreleasedReturnValue();
          local_398 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
          if (IVar4 != 0) {
            IVar4 = local_398;
            (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setAudioURL__026addb0);
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          IVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf__origin_cover___s_S__0_500___url_list__s___s____s__________,local_180);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = local_170;
          local_3a0 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf_____cover_dynamic_cover____s_S__0_500___url_list__s___s____s__________,
                     local_180,1);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_3a0;
          local_3a8 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_count_0269cfe0);
          if (IVar4 != 0) {
            IVar4 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_bestCleanURLFromList__026adf50,local_3a0);
            _objc_retainAutoreleasedReturnValue();
            local_3b1 = 0;
            local_6d0 = IVar4;
            if (IVar4 == 0) {
              local_6d0 = local_3a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_firstObject_0269d1f8);
              _objc_retainAutoreleasedReturnValue();
              local_3b0 = local_6d0;
            }
            local_3b1 = IVar4 == 0;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setCoverURL__026add60,local_6d0);
            if ((local_3b1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3b0);
            }
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          puVar3 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_coverURL_026ad9a8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = false;
          if (puVar5 == (undefined *)0x0) {
            IVar4 = local_3a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_count_0269cfe0);
            bVar1 = IVar4 != 0;
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (bVar1) {
            IVar4 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_bestCleanURLFromList__026adf50,local_3a8);
            _objc_retainAutoreleasedReturnValue();
            local_3c1 = 0;
            local_6f8 = IVar4;
            if (IVar4 == 0) {
              local_6f8 = local_3a8;
              (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_firstObject_0269d1f8);
              _objc_retainAutoreleasedReturnValue();
              local_3c0 = local_6f8;
            }
            local_3c1 = IVar4 == 0;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setCoverURL__026add60,local_6f8);
            if ((local_3c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3c0);
            }
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          IVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf__desc__s___s________1_200___,local_180,1);
          _objc_retainAutoreleasedReturnValue();
          local_3d0 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
          if (IVar4 != 0) {
            IVar4 = local_3d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setTitle__0269cef0);
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          IVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                     &cf__nickname__s___s________1_80___,local_180,1);
          _objc_retainAutoreleasedReturnValue();
          local_3d8 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
          if (IVar4 != 0) {
            IVar4 = local_3d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_3d8,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setAuthor__026adda8);
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          puVar3 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_videoURL_026ad970);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          IVar4 = local_170;
          if (puVar5 != (undefined *)0x0) {
            puVar3 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_videoURL_026ad970);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_preferCleanMediaURL__026add40);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setVideoURL__026adbb0);
            (*(code *)PTR__objc_release_02578630)(IVar4);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_normalizeVideoVersusCover__026adff8,local_198);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,local_198);
          puVar3 = local_198;
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = puVar3;
          local_21c = 1;
          _objc_storeStrong(&local_3d8);
          _objc_storeStrong(&local_3d0,0);
          _objc_storeStrong(&local_3a8,0);
          _objc_storeStrong(&local_3a0,0);
          _objc_storeStrong(&local_398,0);
          _objc_storeStrong(&local_378,0);
          _objc_storeStrong(&local_360,0);
          _objc_storeStrong(&local_358,0);
          _objc_storeStrong(&local_350,0);
          _objc_storeStrong(&local_340,0);
          _objc_storeStrong(&local_338,0);
          _objc_storeStrong(&local_330,0);
          _objc_storeStrong(&local_328,0);
          _objc_storeStrong(&local_320,0);
          _objc_storeStrong(&local_318,0);
        }
        else {
          puVar3 = local_198;
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = puVar3;
          local_21c = 1;
        }
      }
      _objc_storeStrong(&local_260,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_fillDouyinResult_fromJSON__026adfb8,local_198,local_250);
      IVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_douyinResultHasPrimaryMedia__026adea0,local_198);
      puVar3 = local_198;
      if ((IVar4 & 1) == 0) goto LAB_0103da30;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = puVar3;
      local_21c = 1;
    }
    _objc_storeStrong(&local_250);
    _objc_storeStrong(&local_248,0);
  }
  else {
    IVar4 = local_228;
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setVideoURL__026adbb0);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_170;
    puVar3 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_douyinVideoIDFromURL__026addd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_douyinBrowserPlaybackURLForVideo_026adde0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setBrowserPlaybackURL__026add58);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_170;
    puVar3 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_synthesizeDouyinVariantsFromPlay_026adff0,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setVideoVariants__026add50);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_4ec = 1;
    if ((local_199 & 1) == 0) {
      pcVar7 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_180,PTR_s_containsString__0269d0b0,&cf_download_url_list);
      local_4ec = 1;
      if (((ulong)pcVar7 & 1) == 0) {
        pcVar7 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_containsString__0269d0b0,&cf_downloadUrlList);
        local_4ec = (byte)pcVar7;
      }
    }
    local_229 = local_4ec & 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_170,PTR_s_normalizeVideoVersusCover__026adff8,local_198);
    local_239 = 0;
    bVar1 = false;
    if ((local_229 & 1) == 0) {
      IVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_douyinResultHasPrimaryMedia__026adea0,local_198);
      bVar1 = false;
      if ((IVar4 & 1) != 0) {
        puVar3 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_browserPlaybackURL_026ad968);
        _objc_retainAutoreleasedReturnValue();
        local_239 = 1;
        local_238 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar3 != (undefined *)0x0;
      }
    }
    if ((local_239 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_238);
    }
    puVar3 = local_198;
    if (!bVar1) goto LAB_0103d804;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar3;
    local_21c = 1;
  }
  _objc_storeStrong(&local_228,0);
LAB_0103f134:
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_168;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

