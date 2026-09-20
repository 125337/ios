// extractPipixiaFromHTML:sourceURL:resolvedURL: @ 01068d14

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRefineLinkParser::extractPipixiaFromHTML_sourceURL_resolvedURL_
          (WCRefineLinkParser *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double in_d0;
  cfstringStruct *local_be8;
  cfstringStruct *local_be0;
  cfstringStruct *local_bb8;
  cfstringStruct *local_b80;
  ulong local_b70;
  cfstringStruct *local_b58;
  ulong local_b08;
  uint local_a94;
  double local_a88;
  ulong local_a60;
  undefined *local_a28;
  undefined *local_a20;
  undefined *local_9b8;
  undefined *local_9b0;
  undefined *local_958;
  undefined *local_950;
  undefined *local_928;
  uint local_8f4;
  double local_8e8;
  uint local_8c4;
  cfstringStruct *local_8b8;
  cfstringStruct *local_8a8;
  undefined *local_858;
  undefined *local_850;
  cfstringStruct *local_838;
  cfstringStruct *local_828;
  cfstringStruct *local_818;
  cfstringStruct *local_808;
  cfstringStruct *local_7f0;
  cfstringStruct *local_7d8;
  cfstringStruct *local_7c0;
  long local_780;
  cfstringStruct *local_748;
  cfstringStruct *local_738;
  cfstringStruct *local_728;
  cfstringStruct *local_708;
  undefined1 auStack_700 [8];
  long local_6f8;
  long *local_6f0;
  ulong local_6c0;
  undefined *local_6b8;
  bool local_6a9;
  cfstringStruct *local_6a8;
  cfstringStruct *local_6a0;
  bool local_691;
  cfstringStruct *local_690;
  bool local_681;
  ulong local_680;
  bool local_671;
  cfstringStruct *local_670;
  cfstringStruct *local_668;
  byte local_659;
  ulong local_658;
  ulong local_650;
  ulong local_648;
  ulong local_640;
  cfstringStruct *local_638;
  byte local_629;
  ulong local_628;
  byte local_619;
  ulong local_618;
  double local_610;
  bool local_601;
  ulong local_600;
  byte local_5f1;
  undefined *local_5f0;
  ulong local_5e8;
  undefined1 auStack_5e0 [8];
  long local_5d8;
  long *local_5d0;
  ulong local_5a0;
  undefined *local_598;
  ulong local_590;
  undefined *local_588;
  undefined *local_580;
  undefined *local_578;
  undefined1 auStack_570 [8];
  long local_568;
  long *local_560;
  ulong local_530;
  undefined1 auStack_528 [8];
  long local_520;
  long *local_518;
  ulong local_4e8;
  bool local_4d9;
  undefined *local_4d8;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined *local_4b0;
  byte local_4a1;
  cfstringStruct *local_4a0;
  byte local_491;
  cfstringStruct *local_490;
  double local_488;
  byte local_479;
  cfstringStruct *local_478;
  bool local_469;
  cfstringStruct *local_468;
  cfstringStruct *local_460;
  byte local_451;
  cfstringStruct *local_450;
  undefined1 auStack_448 [8];
  long local_440;
  long *local_438;
  ulong local_408;
  bool local_3f9;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3f0;
  bool local_3e1;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3d8;
  bool local_3c9;
  cfstringStruct *local_3c8;
  cfstringStruct *local_3c0;
  cfstringStruct *local_3b8;
  cfstringStruct *local_3b0;
  long local_3a8;
  undefined1 *local_3a0;
  undefined *local_398;
  long local_390 [3];
  undefined1 *local_378;
  undefined1 *local_370;
  undefined4 local_364;
  undefined *local_360;
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  long local_348;
  SEL local_340;
  cfstringStruct *local_338;
  undefined *local_330;
  long local_328;
  undefined8 local_320;
  undefined8 local_318;
  long local_310;
  undefined1 auStack_308 [128];
  undefined1 auStack_288 [128];
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  undefined1 auStack_1d8 [128];
  undefined1 auStack_158 [128];
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_348 = 0;
  local_340 = param_2;
  local_338 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_348,param_3);
  local_350 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_350,param_4);
  local_358 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_358,param_5);
  puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
  local_360 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,8);
  if (local_350 == (cfstringStruct *)0x0) {
    local_728 = &::cf___;
  }
  else {
    local_728 = local_350;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setSourceURL__026addf0,local_728);
  if (local_358 == (cfstringStruct *)0x0) {
    if (local_350 == (cfstringStruct *)0x0) {
      local_748 = &::cf___;
    }
    else {
      local_748 = local_350;
    }
    local_738 = local_748;
  }
  else {
    local_738 = local_358;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setResolvedURL__026addf8,local_738);
  lVar13 = local_348;
  (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_length_0269cca0);
  local_330 = local_360;
  if (lVar13 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_364 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,
               &cf_<script[_>__id__RENDER_DATA___>__>___s_S____<_script>,1,0);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = local_348;
    lVar3 = local_348;
    local_370 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_length_0269cca0);
    local_320 = 0;
    local_318 = 0;
    local_390[1] = 0;
    local_390[2] = lVar3;
    local_328 = lVar3;
    local_310 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,lVar13,0,0,lVar3);
    _objc_retainAutoreleasedReturnValue();
    local_378 = puVar2;
    if ((puVar2 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberOfRanges_0269ef18),
       lVar13 = local_348, puVar2 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
      puVar2 = local_360;
      (*(code *)PTR__objc_retain_02578638)();
      local_330 = puVar2;
      local_364 = 1;
    }
    else {
      puVar4 = local_378;
      puVar2 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_rangeAtIndex__0269ef20,1);
      local_3a0 = puVar4;
      local_398 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(lVar13,PTR_s_substringWithRange__0269d138,puVar4,puVar2)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_390[0] = lVar13;
      (*(code *)PTR__objc_msgSend_02578628)(lVar13,PTR_s_stringByRemovingPercentEncoding_0269d840);
      _objc_retainAutoreleasedReturnValue();
      local_780 = lVar13;
      if (lVar13 == 0) {
        local_780 = local_390[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_3a8 = local_780;
      (*(code *)PTR__objc_release_02578630)(lVar13);
      pcVar5 = local_338;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_338,PTR_s_JSONObjectFromString__026adcc0,local_3a8);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_338;
      local_38 = &cf_ppxItemDetail;
      local_30 = &cf_item;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_3b0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_deepValue_path__026ae010,pcVar5);
      _objc_retainAutoreleasedReturnValue();
      local_3b8 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar6 = local_3b8;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_360;
      if (((ulong)pcVar6 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_330 = puVar2;
        local_364 = 1;
      }
      else {
        pcVar6 = local_3b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        pcVar5 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_3c9 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_7c0 = (cfstringStruct *)0x0;
        }
        else {
          local_7c0 = local_3b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
          _objc_retainAutoreleasedReturnValue();
          local_3c8 = local_7c0;
        }
        local_3c9 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_3c0 = local_7c0;
        if ((local_3c9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3c8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_3b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        pcVar5 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_3e1 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_7d8 = (cfstringStruct *)0x0;
        }
        else {
          local_7d8 = local_3b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
          _objc_retainAutoreleasedReturnValue();
          local_3e0 = local_7d8;
        }
        local_3e1 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_3d8 = local_7d8;
        if ((local_3e1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3e0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_3b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_share);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        pcVar5 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_3f9 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_7f0 = (cfstringStruct *)0x0;
        }
        else {
          local_7f0 = local_3b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_share);
          _objc_retainAutoreleasedReturnValue();
          local_3f8 = local_7f0;
        }
        local_3f9 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_3f0 = local_7f0;
        if ((local_3f9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3f8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        _memset(auStack_448,0,0x40);
        pcVar6 = local_3b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
        _objc_retainAutoreleasedReturnValue();
        local_808 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_808 = &::cf___;
        }
        local_d8 = local_808;
        pcVar5 = local_3c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        local_818 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_818 = &::cf___;
        }
        local_d0 = local_818;
        pcVar7 = local_3c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        local_828 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_828 = &::cf___;
        }
        local_c8 = local_828;
        pcVar8 = local_3f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        local_838 = pcVar8;
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_838 = &::cf___;
        }
        local_c0 = local_838;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_d8,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        local_850 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,auStack_b8,
                   0x10);
        if (local_850 != (undefined *)0x0) {
          lVar13 = *local_438;
          local_858 = (undefined *)0x0;
          do {
            do {
              if (*local_438 - lVar13 != 0) {
                _objc_enumerationMutation(*local_438 - lVar13,puVar2);
              }
              uVar14 = *(ulong *)(local_440 + (long)local_858 * 8);
              puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_408 = uVar14;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_isKindOfClass__0269cd68,puVar9);
              if (((uVar14 & 1) != 0) &&
                 (uVar14 = local_408,
                 (*(code *)PTR__objc_msgSend_02578628)(local_408,PTR_s_length_0269cca0), uVar14 != 0
                 )) {
                (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setTitle__0269cef0,local_408);
                local_364 = 2;
                goto LAB_01069890;
              }
              local_858 = local_858 + 1;
            } while (local_858 < local_850);
            local_850 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,auStack_b8
                       ,0x10);
            local_858 = (undefined *)0x0;
          } while (local_850 != (undefined *)0x0);
        }
        local_364 = 0;
LAB_01069890:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        pcVar6 = local_3d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar5 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        if (((ulong)pcVar5 & 1) != 0) {
          pcVar6 = local_3d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setAuthor__026adda8);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
        pcVar6 = local_338;
        pcVar5 = local_3b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
        _objc_retainAutoreleasedReturnValue();
        local_451 = 0;
        local_8a8 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_8a8 = local_3c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
          _objc_retainAutoreleasedReturnValue();
          local_450 = local_8a8;
        }
        local_451 = pcVar5 == (cfstringStruct *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_applyDurationFromValue_toResult__026addb8,local_8a8,local_360,
                   &DAT_00002710);
        if ((local_451 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_450);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar6 = local_3c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_id);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar5 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_469 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_8b8 = (cfstringStruct *)0x0;
        }
        else {
          local_8b8 = local_3c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_id);
          _objc_retainAutoreleasedReturnValue();
          local_468 = local_8b8;
        }
        local_469 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_460 = local_8b8;
        if ((local_469 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_468);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_460;
        (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_length_0269cca0);
        local_479 = 0;
        local_8c4 = 0;
        if (pcVar6 == (cfstringStruct *)0x0) {
          pcVar6 = local_3b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_origin_video_id);
          _objc_retainAutoreleasedReturnValue();
          local_479 = 1;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_478 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_8c4 = (uint)pcVar6;
        }
        if ((local_479 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_478);
        }
        if ((local_8c4 & 1) != 0) {
          pcVar5 = local_3b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_origin_video_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_460;
          local_460 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
        pcVar6 = local_3b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_491 = 0;
        if (((ulong)pcVar5 & 1) == 0) {
          local_8e8 = 0.0;
        }
        else {
          pcVar5 = local_3b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
          _objc_retainAutoreleasedReturnValue();
          local_491 = 1;
          local_490 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_8e8 = in_d0;
        }
        if ((local_491 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_490);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        local_488 = local_8e8;
        local_4a1 = 0;
        local_8f4 = 0;
        if (local_8e8 <= 0.0) {
          pcVar6 = local_3c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
          _objc_retainAutoreleasedReturnValue();
          local_4a1 = 1;
          local_4a0 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_8f4 = (uint)pcVar6;
        }
        if ((local_4a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_4a0);
        }
        if ((local_8f4 & 1) != 0) {
          pcVar6 = local_3c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_488 = local_8e8;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_4b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_3b0);
        _objc_retainAutoreleasedReturnValue();
        local_4b8 = puVar9;
        while (puVar2 = local_4b8,
              (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_count_0269cfe0),
              puVar2 != (undefined *)0x0) {
          puVar2 = local_4b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_4c0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_removeLastObject_0269e830);
          puVar2 = local_4c0;
          puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar9);
          puVar9 = local_4c0;
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((ulong)puVar9 & 1) != 0) {
              _memset(auStack_570,0,0x40);
              puVar2 = local_4c0;
              (*(code *)PTR__objc_retain_02578638)();
              local_9b0 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_570,
                         auStack_1d8,0x10);
              if (local_9b0 != (undefined *)0x0) {
                lVar13 = *local_560;
                local_9b8 = (undefined *)0x0;
                do {
                  do {
                    if (*local_560 - lVar13 != 0) {
                      _objc_enumerationMutation(*local_560 - lVar13,puVar2);
                    }
                    uVar15 = *(ulong *)(local_568 + (long)local_9b8 * 8);
                    puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                    local_530 = uVar15;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar15,PTR_s_isKindOfClass__0269cd68,puVar9);
                    uVar14 = local_530;
                    if ((uVar15 & 1) == 0) {
                      puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar14,PTR_s_isKindOfClass__0269cd68,puVar9);
                      if ((uVar14 & 1) != 0) goto LAB_0106a53c;
                    }
                    else {
LAB_0106a53c:
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_4b8,PTR_s_addObject__0269d180,local_530);
                    }
                    local_9b8 = local_9b8 + 1;
                  } while (local_9b8 < local_9b0);
                  local_9b0 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_570,
                             auStack_1d8,0x10);
                  local_9b8 = (undefined *)0x0;
                } while (local_9b0 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_4c8 = puVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_id);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            puVar10 = puVar9;
            (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
            local_4d9 = false;
            bVar1 = ((ulong)puVar10 & 1) == 0;
            if (bVar1) {
              local_928 = (undefined *)0x0;
            }
            else {
              local_928 = local_4c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_id);
              _objc_retainAutoreleasedReturnValue();
              local_4d8 = local_928;
            }
            local_4d9 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_4d0 = local_928;
            if ((local_4d9 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_4d8);
            }
            (*(code *)PTR__objc_release_02578630)(puVar9);
            pcVar6 = local_460;
            (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_length_0269cca0);
            if ((pcVar6 != (cfstringStruct *)0x0) &&
               (puVar2 = local_4d0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_4d0,PTR_s_isEqualToString__0269ccc8,local_460),
               ((ulong)puVar2 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_addObject__0269d180,local_4c8);
            }
            _memset(auStack_528,0,0x40);
            puVar2 = local_4c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_4c8,PTR_s_allValues_0269dae8);
            _objc_retainAutoreleasedReturnValue();
            local_950 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_950 != (undefined *)0x0) {
              lVar13 = *local_518;
              local_958 = (undefined *)0x0;
              do {
                do {
                  if (*local_518 - lVar13 != 0) {
                    _objc_enumerationMutation(*local_518 - lVar13,puVar2);
                  }
                  uVar15 = *(ulong *)(local_520 + (long)local_958 * 8);
                  puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_4e8 = uVar15;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_isKindOfClass__0269cd68,puVar9)
                  ;
                  uVar14 = local_4e8;
                  if ((uVar15 & 1) == 0) {
                    puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar14,PTR_s_isKindOfClass__0269cd68,puVar9);
                    if ((uVar14 & 1) != 0) goto LAB_0106a2f4;
                  }
                  else {
LAB_0106a2f4:
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4b8,PTR_s_addObject__0269d180,local_4e8);
                  }
                  local_958 = local_958 + 1;
                } while (local_958 < local_950);
                local_950 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_528,
                           auStack_158,0x10);
                local_958 = (undefined *)0x0;
              } while (local_950 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_storeStrong(&local_4d0);
            _objc_storeStrong(&local_4c8,0);
          }
          _objc_storeStrong(&local_4c0,0);
        }
        puVar2 = local_4b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_count_0269cfe0);
        if ((puVar2 == (undefined *)0x0) && (local_3c0 != (cfstringStruct *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_addObject__0269d180,local_3c0);
        }
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = &cf_video_high;
        local_1e8 = &cf_video_mid;
        local_1e0 = &cf_video_low;
        puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_578 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_1f0);
        _objc_retainAutoreleasedReturnValue();
        local_208 = &cf_n;
        local_200 = &cf_hn;
        local_1f8 = &cf_AmEu;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_580 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_208,3);
        _objc_retainAutoreleasedReturnValue();
        local_590 = 0;
        local_588 = puVar2;
        for (local_598 = (undefined *)0x0; puVar2 = local_598, puVar9 = local_580,
            (*(code *)PTR__objc_msgSend_02578628)(local_580,PTR_s_count_0269cfe0), puVar2 < puVar9;
            local_598 = local_598 + 1) {
          _memset(auStack_5e0,0,0x40);
          puVar2 = local_4b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_a20 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5e0,auStack_288,
                     0x10);
          if (local_a20 != (undefined *)0x0) {
            lVar13 = *local_5d0;
            local_a28 = (undefined *)0x0;
            do {
              do {
                if (*local_5d0 - lVar13 != 0) {
                  _objc_enumerationMutation(*local_5d0 - lVar13,puVar2);
                }
                uVar15 = *(ulong *)(local_5d8 + (long)local_a28 * 8);
                puVar9 = local_580;
                local_5a0 = uVar15;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_580,PTR_s_objectAtIndexedSubscript__0269cc78,local_598);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar15,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                uVar14 = uVar15;
                (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_isKindOfClass__0269cd68,puVar10);
                local_a60 = local_5a0;
                local_5f1 = 0;
                local_601 = false;
                bVar1 = (uVar14 & 1) == 0;
                if (bVar1) {
                  local_a60 = 0;
                }
                else {
                  puVar10 = local_580;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_580,PTR_s_objectAtIndexedSubscript__0269cc78,local_598);
                  _objc_retainAutoreleasedReturnValue();
                  local_5f1 = 1;
                  local_5f0 = puVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_a60,PTR_s_objectForKeyedSubscript__0269d098);
                  _objc_retainAutoreleasedReturnValue();
                  local_600 = local_a60;
                }
                local_601 = !bVar1;
                (*(code *)PTR__objc_retain_02578638)();
                local_5e8 = local_a60;
                if ((local_601 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_600);
                }
                if ((local_5f1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_5f0);
                }
                (*(code *)PTR__objc_release_02578630)(uVar15);
                (*(code *)PTR__objc_release_02578630)(puVar9);
                uVar14 = local_5e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_5e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar14;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_619 = 0;
                if ((uVar15 & 1) == 0) {
                  local_a88 = 0.0;
                }
                else {
                  uVar15 = local_5e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_5e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
                  _objc_retainAutoreleasedReturnValue();
                  local_619 = 1;
                  local_618 = uVar15;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_a88 = local_8e8;
                }
                if ((local_619 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_618);
                }
                (*(code *)PTR__objc_release_02578630)(uVar14);
                local_610 = local_a88;
                local_629 = 0;
                local_a94 = 0;
                if (local_a88 <= 0.0) {
                  uVar14 = local_5a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_5a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
                  _objc_retainAutoreleasedReturnValue();
                  local_629 = 1;
                  local_628 = uVar14;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_a94 = (uint)uVar14;
                }
                if ((local_629 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_628);
                }
                if ((local_a94 & 1) != 0) {
                  uVar14 = local_5a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_5a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_610 = local_a88;
                  (*(code *)PTR__objc_release_02578630)(uVar14);
                }
                pcVar6 = local_338;
                local_8e8 = local_488;
                if (((local_488 <= 0.0) || (local_8e8 = local_610, local_610 <= 0.0)) ||
                   (local_8e8 = ABS(local_488 - local_610), local_8e8 <= 0.75)) {
                  uVar14 = local_5e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_5e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url_list);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar6,PTR_s_bestURLFromList_preferBest__026ae018,uVar14,1);
                  _objc_retainAutoreleasedReturnValue();
                  local_638 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(uVar14);
                  pcVar6 = local_638;
                  (*(code *)PTR__objc_msgSend_02578628)(local_638,PTR_s_length_0269cca0);
                  if (pcVar6 == (cfstringStruct *)0x0) {
                    local_364 = 0xe;
                  }
                  else {
                    puVar9 = PTR__OBJC_CLASS___NSURL_026ce328;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
                               local_638);
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar9;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar10;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = puVar11;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(puVar11);
                    (*(code *)PTR__objc_release_02578630)(puVar10);
                    (*(code *)PTR__objc_release_02578630)(puVar9);
                    if (((ulong)puVar12 & 1) == 0) {
                      local_364 = 0xe;
                    }
                    else {
                      uVar14 = local_5e8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_5e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      FUN_01034e28();
                      (*(code *)PTR__objc_release_02578630)(uVar14);
                      uVar14 = local_5e8;
                      local_640 = uVar15;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_5e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
                      _objc_retainAutoreleasedReturnValue();
                      uVar15 = uVar14;
                      FUN_01034e28();
                      (*(code *)PTR__objc_release_02578630)(uVar14);
                      uVar14 = local_5e8;
                      local_648 = uVar15;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_5e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_file_size);
                      _objc_retainAutoreleasedReturnValue();
                      local_659 = 0;
                      local_b08 = uVar14;
                      if (uVar14 == 0) {
                        local_b08 = local_5e8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_5e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_data_size);
                        _objc_retainAutoreleasedReturnValue();
                        local_658 = local_b08;
                      }
                      local_659 = uVar14 == 0;
                      FUN_0105c170();
                      if ((local_659 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_658);
                      }
                      (*(code *)PTR__objc_release_02578630)(uVar14);
                      pcVar5 = local_338;
                      pcVar6 = local_638;
                      puVar9 = local_588;
                      local_650 = local_b08;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_588,PTR_s_objectAtIndexedSubscript__0269cc78,local_598);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar7 = pcVar5;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar5,PTR_s_variantWithURL_label_width_heigh_026addc8,pcVar6,
                                 puVar9,local_640,local_648,local_650);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar5,PTR_s_appendUniqueVariant_to__026addd0,pcVar7,local_578);
                      (*(code *)PTR__objc_release_02578630)(pcVar7);
                      (*(code *)PTR__objc_release_02578630)(puVar9);
                      if (local_590 == 0) {
                        _objc_storeStrong(&local_590,local_5e8);
                      }
                      local_364 = 0;
                    }
                  }
                  _objc_storeStrong(&local_638,0);
                }
                else {
                  local_364 = 0xe;
                }
                _objc_storeStrong(&local_5e8,0);
                local_a28 = local_a28 + 1;
              } while (local_a28 < local_a20);
              local_a20 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5e0,
                         auStack_288,0x10);
              local_a28 = (undefined *)0x0;
            } while (local_a20 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setVideoVariants__026add50,local_578);
        puVar2 = local_578;
        (*(code *)PTR__objc_msgSend_02578628)(local_578,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setVideoURL__026adbb0);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        pcVar6 = local_3c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover_image);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        pcVar5 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_671 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_b58 = (cfstringStruct *)0x0;
        }
        else {
          local_b58 = local_3c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover_image);
          _objc_retainAutoreleasedReturnValue();
          local_670 = local_b58;
        }
        local_671 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_668 = local_b58;
        if ((local_671 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_670);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        if (local_668 == (cfstringStruct *)0x0) {
          uVar14 = local_590;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_590,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover_image);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          uVar15 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_681 = false;
          bVar1 = (uVar15 & 1) == 0;
          if (bVar1) {
            local_b70 = 0;
          }
          else {
            local_b70 = local_590;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_590,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover_image);
            _objc_retainAutoreleasedReturnValue();
            local_680 = local_b70;
          }
          local_681 = !bVar1;
          _objc_storeStrong(&local_668,local_b70);
          if ((local_681 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_680);
          }
          (*(code *)PTR__objc_release_02578630)(uVar14);
        }
        if (local_668 == (cfstringStruct *)0x0) {
          pcVar6 = local_3b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          pcVar5 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_691 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_b80 = (cfstringStruct *)0x0;
          }
          else {
            local_b80 = local_3b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
            _objc_retainAutoreleasedReturnValue();
            local_690 = local_b80;
          }
          local_691 = !bVar1;
          _objc_storeStrong(&local_668,local_b80);
          if ((local_691 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_690);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
        pcVar6 = local_338;
        pcVar5 = local_668;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_668,PTR_s_objectForKeyedSubscript__0269d098,&cf_url_list);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_bestURLFromList_preferBest__026ae018,pcVar5,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setCoverURL__026add60);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar2 = local_360;
        (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (puVar9 == (undefined *)0x0) {
          pcVar6 = local_3b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          pcVar5 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_6a9 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_bb8 = (cfstringStruct *)0x0;
          }
          else {
            local_bb8 = local_3b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
            _objc_retainAutoreleasedReturnValue();
            local_6a8 = local_bb8;
          }
          local_6a9 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_6a0 = local_bb8;
          if ((local_6a9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_6a8);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_6b8 = puVar2;
          _memset(auStack_700,0,0x40);
          pcVar6 = local_6a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_be0 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_700,auStack_308,
                     0x10);
          if (local_be0 != (cfstringStruct *)0x0) {
            lVar13 = *local_6f0;
            local_be8 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_6f0 - lVar13 != 0) {
                  _objc_enumerationMutation(*local_6f0 - lVar13,pcVar6);
                }
                uVar14 = *(ulong *)(local_6f8 + (long)local_be8 * 8);
                puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_6c0 = uVar14;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_isKindOfClass__0269cd68,puVar2);
                pcVar5 = local_338;
                if ((uVar14 & 1) != 0) {
                  uVar14 = local_6c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_6c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_url_list);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar5,PTR_s_bestURLFromList_preferBest__026ae018,uVar14,1);
                  _objc_retainAutoreleasedReturnValue();
                  local_708 = pcVar5;
                  (*(code *)PTR__objc_release_02578630)(uVar14);
                  pcVar5 = local_708;
                  (*(code *)PTR__objc_msgSend_02578628)(local_708,PTR_s_length_0269cca0);
                  if ((pcVar5 != (cfstringStruct *)0x0) &&
                     (puVar2 = local_6b8,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_6b8,PTR_s_containsObject__0269cbb8,local_708),
                     ((ulong)puVar2 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_6b8,PTR_s_addObject__0269d180,local_708);
                  }
                  _objc_storeStrong(&local_708,0);
                }
                local_be8 = (cfstringStruct *)((long)&local_be8->field0_0x0 + 1);
              } while (local_be8 < local_be0);
              local_be0 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_700,
                         auStack_308,0x10);
              local_be8 = (cfstringStruct *)0x0;
            } while (local_be0 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setImageURLs__026add68,local_6b8);
          puVar2 = local_6b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_6b8,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_360,PTR_s_setIsImageNote__026adad0,puVar2 != (undefined *)0x0);
          _objc_storeStrong(&local_6b8);
          _objc_storeStrong(&local_6a0,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_338,PTR_s_normalizeVideoVersusCover__026adff8,local_360);
        puVar2 = local_360;
        (*(code *)PTR__objc_retain_02578638)();
        local_330 = puVar2;
        local_364 = 1;
        _objc_storeStrong(&local_668);
        _objc_storeStrong(&local_590,0);
        _objc_storeStrong(&local_588,0);
        _objc_storeStrong(&local_580,0);
        _objc_storeStrong(&local_578,0);
        _objc_storeStrong(&local_4b8,0);
        _objc_storeStrong(&local_4b0,0);
        _objc_storeStrong(&local_460,0);
        _objc_storeStrong(&local_3f0,0);
        _objc_storeStrong(&local_3d8,0);
        _objc_storeStrong(&local_3c0,0);
      }
      _objc_storeStrong(&local_3b8);
      _objc_storeStrong(&local_3b0,0);
      _objc_storeStrong(&local_3a8,0);
      _objc_storeStrong(local_390,0);
    }
    _objc_storeStrong(&local_378);
    _objc_storeStrong(&local_370,0);
  }
  _objc_storeStrong(&local_360);
  _objc_storeStrong(&local_358,0);
  _objc_storeStrong(&local_350,0);
  _objc_storeStrong(&local_348,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_330;
}

