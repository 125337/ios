// fillXHSResult:fromNoteDict: @ 0104e44c

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::fillXHSResult_fromNoteDict_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  ulong uVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong local_838;
  ulong local_830;
  ID local_800;
  ID local_7f0;
  ID local_740;
  cfstringStruct *local_708;
  cfstringStruct *local_6f8;
  ulong local_6e8;
  ulong local_6d0;
  ulong local_6b8;
  ulong local_688;
  ulong local_680;
  undefined *local_640;
  undefined *local_638;
  ID local_5e8;
  ID local_5c8;
  ID local_5c0;
  ID local_5a0;
  ID local_580;
  ID local_558;
  ID local_518;
  ID local_508;
  ID local_4e0;
  undefined1 auStack_4d8 [8];
  long local_4d0;
  long *local_4c8;
  ulong local_498;
  undefined *local_490;
  byte local_481;
  ID local_480;
  byte local_471;
  ID local_470;
  ID local_468;
  byte local_459;
  long local_458;
  byte local_449;
  undefined *local_448;
  undefined4 local_440;
  undefined4 local_43c;
  code *local_438;
  undefined *local_430;
  ID local_428;
  byte local_419;
  ID local_418;
  byte local_409;
  undefined *local_408;
  ID local_400;
  byte local_3f1;
  cfstringStruct *local_3f0;
  byte local_3e1;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3d8;
  byte local_3c9;
  ulong local_3c8;
  ulong local_3c0;
  ulong local_3b8;
  byte local_3a9;
  ulong local_3a8;
  ulong local_3a0;
  byte local_391;
  ulong local_390;
  ulong local_388;
  ID local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  ulong local_338;
  ID local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  cfstringStruct *local_2e8;
  ID local_2e0;
  byte local_2d1;
  ID local_2d0;
  byte local_2c1;
  ID local_2c0;
  byte local_2b1;
  ID local_2b0;
  ID local_2a8;
  byte local_299;
  ID local_298;
  ID local_290;
  undefined *local_288;
  byte local_279;
  ID local_278;
  byte local_269;
  ID local_268;
  byte local_259;
  undefined *local_258;
  ID local_250;
  byte local_241;
  ID local_240;
  byte local_231;
  ID local_230;
  ID local_228;
  undefined4 local_21c;
  ID local_218;
  long local_210;
  SEL local_208;
  ID local_200;
  undefined1 auStack_1f8 [128];
  cfstringStruct *local_178;
  undefined1 auStack_170 [128];
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_210 = 0;
  local_208 = param_2;
  local_200 = param_1;
  _objc_storeStrong(&local_210,param_3);
  local_218 = 0;
  _objc_storeStrong(&local_218,param_4);
  IVar3 = local_218;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar3 & 1) == 0) {
    local_21c = 1;
  }
  else {
    lVar11 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar11 == 0) {
      IVar3 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_231 = 0;
      local_241 = 0;
      local_508 = IVar3;
      if (IVar3 == 0) {
        local_518 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayTitle);
        _objc_retainAutoreleasedReturnValue();
        local_231 = 1;
        local_230 = local_518;
        if (local_518 == 0) {
          local_518 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_desc);
          _objc_retainAutoreleasedReturnValue();
          local_241 = 1;
          local_240 = local_518;
        }
        local_508 = local_518;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_228 = local_508;
      if ((local_241 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_240);
      }
      if ((local_231 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_230);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_228;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((IVar3 & 1) != 0) &&
         (IVar3 = local_228, (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0),
         IVar3 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setTitle__0269cef0,local_228);
      }
      _objc_storeStrong(&local_228,0);
    }
    lVar11 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_author_026ad9a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    IVar4 = local_200;
    IVar3 = local_218;
    if (lVar11 == 0) {
      local_38 = &cf_user;
      local_30 = &cf_nickname;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_deepValue_path__026ae010,IVar3);
      _objc_retainAutoreleasedReturnValue();
      local_580 = local_200;
      IVar3 = local_218;
      local_259 = 0;
      local_269 = 0;
      local_279 = 0;
      local_558 = IVar4;
      if (IVar4 == 0) {
        local_48 = &cf_user;
        local_40 = &cf_nickName;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_48,2);
        _objc_retainAutoreleasedReturnValue();
        local_259 = 1;
        local_258 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_580,PTR_s_deepValue_path__026ae010,IVar3);
        _objc_retainAutoreleasedReturnValue();
        local_269 = 1;
        local_268 = local_580;
        if (local_580 == 0) {
          local_580 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickname);
          _objc_retainAutoreleasedReturnValue();
          local_279 = 1;
          local_278 = local_580;
        }
        local_558 = local_580;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = local_558;
      if ((local_279 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_278);
      }
      if ((local_269 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_268);
      }
      if ((local_259 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_258);
      }
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar3 = local_250;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((IVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setAuthor__026adda8,local_250);
      }
      _objc_storeStrong(&local_250,0);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_218;
    local_288 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
    _objc_retainAutoreleasedReturnValue();
    local_299 = 0;
    local_5a0 = IVar3;
    if (IVar3 == 0) {
      local_5a0 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_media);
      _objc_retainAutoreleasedReturnValue();
      local_298 = local_5a0;
    }
    local_299 = IVar3 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_290 = local_5a0;
    if ((local_299 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_298);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_290;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_2b1 = 0;
    local_2c1 = 0;
    if ((IVar3 & 1) == 0) {
      local_5c8 = 0;
    }
    else {
      local_5c0 = local_290;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
      _objc_retainAutoreleasedReturnValue();
      local_2b1 = 1;
      local_2b0 = local_5c0;
      if (local_5c0 == 0) {
        local_5c0 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
        _objc_retainAutoreleasedReturnValue();
        local_2c1 = 1;
        local_2c0 = local_5c0;
      }
      local_5c8 = local_5c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = local_5c8;
    if ((local_2c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2c0);
    }
    if ((local_2b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2b0);
    }
    IVar3 = local_200;
    local_2d1 = 0;
    bVar1 = local_2a8 == 0;
    if (bVar1) {
      local_5e8 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
      _objc_retainAutoreleasedReturnValue();
      local_2d0 = local_5e8;
    }
    else {
      local_5e8 = local_2a8;
    }
    local_2d1 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_applyDurationFromValue_toResult__026addb8,local_5e8,local_210,
               &DAT_00002710);
    if ((local_2d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2d0);
    }
    IVar3 = local_290;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    IVar6 = local_200;
    IVar4 = local_290;
    if ((IVar3 & 1) != 0) {
      local_58 = &cf_media;
      local_50 = &cf_stream;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_deepValue_path__026ae010,IVar4);
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = IVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar3 = local_2e0;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((IVar3 & 1) == 0) {
        IVar4 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_stream);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_2e0;
        local_2e0 = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      IVar3 = local_2e0;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((IVar3 & 1) != 0) {
        _memset(auStack_328,0,0x40);
        local_f0 = &cf_h265;
        local_e8 = &cf_h264;
        local_e0 = &cf_av1;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_f0,3);
        _objc_retainAutoreleasedReturnValue();
        local_638 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_638 != (undefined *)0x0) {
          lVar11 = *local_318;
          local_640 = (undefined *)0x0;
          do {
            do {
              if (*local_318 - lVar11 != 0) {
                _objc_enumerationMutation(*local_318 - lVar11,puVar2);
              }
              local_2e8 = *(cfstringStruct **)(local_320 + (long)local_640 * 8);
              IVar3 = local_2e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2e0,PTR_s_objectForKeyedSubscript__0269d098,local_2e8);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              local_330 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
              if ((IVar3 & 1) == 0) {
                local_21c = 3;
              }
              else {
                _memset(auStack_378,0,0x40);
                IVar3 = local_330;
                (*(code *)PTR__objc_retain_02578638)();
                local_680 = IVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                           auStack_170,0x10);
                if (local_680 != 0) {
                  lVar12 = *local_368;
                  local_688 = 0;
                  do {
                    do {
                      if (*local_368 - lVar12 != 0) {
                        _objc_enumerationMutation(*local_368 - lVar12,IVar3);
                      }
                      uVar13 = *(ulong *)(local_370 + local_688 * 8);
                      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                      local_338 = uVar13;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar13,PTR_s_isKindOfClass__0269cd68,puVar5);
                      if ((uVar13 & 1) != 0) {
                        IVar4 = local_200;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_200,PTR_s_xhsPickStreamURLFromItem__026ae060,local_338);
                        _objc_retainAutoreleasedReturnValue();
                        local_380 = IVar4;
                        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
                        if ((IVar4 == 0) ||
                           (IVar4 = local_380,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_380,PTR_s_hasPrefix__0269d320,&cf_http),
                           (IVar4 & 1) == 0)) {
                          local_21c = 5;
                        }
                        else {
                          uVar13 = local_338;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
                          _objc_retainAutoreleasedReturnValue();
                          uVar7 = uVar13;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          local_391 = 0;
                          if ((uVar7 & 1) == 0) {
                            local_6b8 = 0;
                          }
                          else {
                            local_6b8 = local_338;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
                            _objc_retainAutoreleasedReturnValue();
                            local_391 = 1;
                            local_390 = local_6b8;
                            (*(code *)PTR__objc_msgSend_02578628)();
                          }
                          if ((local_391 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_390);
                          }
                          (*(code *)PTR__objc_release_02578630)(uVar13);
                          local_388 = local_6b8;
                          uVar13 = local_338;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
                          _objc_retainAutoreleasedReturnValue();
                          uVar7 = uVar13;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          local_3a9 = 0;
                          if ((uVar7 & 1) == 0) {
                            local_6d0 = 0;
                          }
                          else {
                            local_6d0 = local_338;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_height)
                            ;
                            _objc_retainAutoreleasedReturnValue();
                            local_3a9 = 1;
                            local_3a8 = local_6d0;
                            (*(code *)PTR__objc_msgSend_02578628)();
                          }
                          if ((local_3a9 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_3a8);
                          }
                          (*(code *)PTR__objc_release_02578630)(uVar13);
                          local_3a0 = local_6d0;
                          local_3b8 = 0;
                          uVar13 = local_338;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
                          _objc_retainAutoreleasedReturnValue();
                          local_3c9 = 0;
                          local_6e8 = uVar13;
                          if (uVar13 == 0) {
                            local_6e8 = local_338;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_338,PTR_s_objectForKeyedSubscript__0269d098,
                                       &cf_dataSize);
                            _objc_retainAutoreleasedReturnValue();
                            local_3c8 = local_6e8;
                          }
                          local_3c9 = uVar13 == 0;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_3c0 = local_6e8;
                          if ((local_3c9 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_3c8);
                          }
                          (*(code *)PTR__objc_release_02578630)(uVar13);
                          uVar13 = local_3c0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_3c0,PTR_s_respondsToSelector__026ca818,
                                     PTR_s_longLongValue_0269d5e0);
                          if ((uVar13 & 1) != 0) {
                            uVar13 = local_3c0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_3c0,PTR_s_longLongValue_0269d5e0);
                            local_3b8 = uVar13;
                          }
                          if ((0 < (long)local_3b8) && ((long)local_3b8 < 0x400)) {
                            local_3b8 = 0;
                          }
                          local_3e1 = 0;
                          local_3f1 = 0;
                          if ((long)local_3a0 < 1) {
                            pcVar8 = local_2e8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_2e8,PTR_s_uppercaseString_0269d6c8);
                            _objc_retainAutoreleasedReturnValue();
                            local_3f1 = 1;
                            local_708 = pcVar8;
                            if (pcVar8 == (cfstringStruct *)0x0) {
                              local_708 = &::cf__;
                            }
                            local_6f8 = local_708;
                            local_3f0 = pcVar8;
                          }
                          else {
                            local_6f8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSString_026cdfe8,
                                       PTR_s_stringWithFormat__0269cca8,&cf__ldp);
                            _objc_retainAutoreleasedReturnValue();
                            local_3e1 = 1;
                            local_3e0 = local_6f8;
                          }
                          (*(code *)PTR__objc_retain_02578638)();
                          local_3d8 = local_6f8;
                          if ((local_3f1 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_3f0);
                          }
                          if ((local_3e1 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_3e0);
                          }
                          IVar4 = local_200;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_200,PTR_s_URLLooksWatermarked__026add20,local_380);
                          if ((IVar4 & 1) != 0) {
                            pcVar9 = local_3d8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_3d8,PTR_s_stringByAppendingString__0269d398,&::cf__);
                            _objc_retainAutoreleasedReturnValue();
                            pcVar8 = local_3d8;
                            local_3d8 = pcVar9;
                            (*(code *)PTR__objc_release_02578630)(pcVar8);
                          }
                          IVar4 = local_200;
                          IVar6 = local_200;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_200,PTR_s_variantWithURL_label_width_heigh_026addc8,
                                     local_380,local_3d8,local_388,local_3a0,local_3b8);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (IVar4,PTR_s_appendUniqueVariant_to__026addd0,IVar6,local_288);
                          (*(code *)PTR__objc_release_02578630)(IVar6);
                          _objc_storeStrong(&local_3d8);
                          _objc_storeStrong(&local_3c0,0);
                          local_21c = 0;
                        }
                        _objc_storeStrong(&local_380,0);
                      }
                      local_688 = local_688 + 1;
                    } while (local_688 < local_680);
                    local_680 = IVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                               auStack_170,0x10);
                    local_688 = 0;
                  } while (local_680 != 0);
                }
                (*(code *)PTR__objc_release_02578630)(IVar3);
                local_21c = 0;
              }
              _objc_storeStrong(&local_330,0);
              local_640 = local_640 + 1;
            } while (local_640 < local_638);
            local_638 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_d8
                       ,0x10);
            local_640 = (undefined *)0x0;
          } while (local_638 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        IVar6 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_200;
        IVar3 = local_290;
        local_409 = 0;
        local_419 = 0;
        local_740 = IVar6;
        if (IVar6 == 0) {
          local_178 = &cf_url;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_178,1);
          _objc_retainAutoreleasedReturnValue();
          local_409 = 1;
          local_408 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_deepValue_path__026ae010,IVar3);
          _objc_retainAutoreleasedReturnValue();
          local_740 = IVar4;
          local_418 = IVar4;
        }
        local_419 = IVar6 == 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_400 = local_740;
        if ((local_419 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_418);
        }
        if ((local_409 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_408);
        }
        (*(code *)PTR__objc_release_02578630)(IVar6);
        IVar3 = local_400;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((IVar3 & 1) != 0) &&
           (IVar4 = local_400,
           (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_hasPrefix__0269d320,&cf_http),
           IVar3 = local_200, (IVar4 & 1) != 0)) {
          IVar4 = local_200;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_200,PTR_s_preferCleanMediaURL__026add40,local_400);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_variantWithURL_label_width_heigh_026addc8,IVar4,&::cf__,0,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_appendUniqueVariant_to__026addd0,IVar6,local_288);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        _objc_storeStrong(&local_400,0);
      }
      _objc_storeStrong(&local_2e0,0);
    }
    puVar2 = local_288;
    (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      local_448 = PTR___NSConcreteGlobalBlock_02578658;
      local_440 = 0xd0800000;
      local_43c = 0;
      local_438 = FUN_01050504;
      local_430 = &DAT_02584850;
      local_428 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_288,PTR_s_sortUsingComparator__0269d168,&local_448);
      puVar2 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setVideoVariants__026add50);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      lVar11 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar11);
      IVar3 = local_200;
      if (lVar12 == 0) {
        puVar2 = local_288;
        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_preferCleanMediaURL__026add40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setVideoURL__026adbb0);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    lVar11 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_459 = 0;
    bVar1 = true;
    if (lVar12 == 0) {
      lVar12 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_videoVariants_026ada88);
      _objc_retainAutoreleasedReturnValue();
      local_459 = 1;
      local_458 = lVar12;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar12 != 0;
    }
    if ((local_459 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_458);
    }
    (*(code *)PTR__objc_release_02578630)(lVar11);
    IVar3 = local_218;
    local_449 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_imageList);
    _objc_retainAutoreleasedReturnValue();
    local_471 = 0;
    local_481 = 0;
    local_7f0 = IVar3;
    if (IVar3 == 0) {
      local_800 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagesList);
      _objc_retainAutoreleasedReturnValue();
      local_471 = 1;
      local_470 = local_800;
      if (local_800 == 0) {
        local_800 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_image_list);
        _objc_retainAutoreleasedReturnValue();
        local_481 = 1;
        local_480 = local_800;
      }
      local_7f0 = local_800;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_468 = local_7f0;
    if ((local_481 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_480);
    }
    if ((local_471 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_470);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_468;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((IVar3 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_490 = puVar2;
      _memset(auStack_4d8,0,0x40);
      IVar3 = local_468;
      (*(code *)PTR__objc_retain_02578638)();
      local_830 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4d8,auStack_1f8,0x10)
      ;
      if (local_830 != 0) {
        lVar11 = *local_4c8;
        local_838 = 0;
        do {
          do {
            if (*local_4c8 - lVar11 != 0) {
              _objc_enumerationMutation(*local_4c8 - lVar11,IVar3);
            }
            uVar13 = *(ulong *)(local_4d0 + local_838 * 8);
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_498 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar13 & 1) != 0) {
              IVar4 = local_200;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_200,PTR_s_xhsBestImageURLFromDict__026ae068,local_498);
              _objc_retainAutoreleasedReturnValue();
              local_4e0 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
              if (IVar4 == 0) {
                local_21c = 7;
              }
              else if ((local_449 & 1) == 0) {
                IVar4 = local_200;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_200,PTR_s_URLLooksWatermarked__026add20,local_4e0);
                if (((IVar4 & 1) == 0) ||
                   (puVar2 = local_490,
                   (*(code *)PTR__objc_msgSend_02578628)(local_490,PTR_s_count_0269cfe0),
                   puVar2 == (undefined *)0x0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_490,PTR_s_addObject__0269d180,local_4e0);
                }
                local_21c = 0;
              }
              else {
                lVar12 = local_210;
                (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_coverURL_026ad9a8);
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar12;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(lVar12);
                if (lVar10 == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_210,PTR_s_setCoverURL__026add60,local_4e0);
                }
                local_21c = 7;
              }
              _objc_storeStrong(&local_4e0,0);
            }
            local_838 = local_838 + 1;
          } while (local_838 < local_830);
          local_830 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4d8,auStack_1f8,
                     0x10);
          local_838 = 0;
        } while (local_830 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (((local_449 & 1) == 0) &&
         (puVar2 = local_490, (*(code *)PTR__objc_msgSend_02578628)(local_490,PTR_s_count_0269cfe0),
         puVar2 != (undefined *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setImageURLs__026add68,local_490);
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setIsImageNote__026adad0,1);
      }
      _objc_storeStrong(&local_490,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_200,PTR_s_normalizeVideoVersusCover__026adff8,local_210);
    _objc_storeStrong(&local_468);
    _objc_storeStrong(&local_2a8,0);
    _objc_storeStrong(&local_290,0);
    _objc_storeStrong(&local_288,0);
    local_21c = 0;
  }
  _objc_storeStrong(&local_218);
  _objc_storeStrong(&local_210,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

