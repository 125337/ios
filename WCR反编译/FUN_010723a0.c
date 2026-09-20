// FUN_010723a0 @ 010723a0

void FUN_010723a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined8 local_460;
  cfstringStruct *local_458;
  cfstringStruct *local_450;
  cfstringStruct *local_448;
  cfstringStruct *local_440;
  cfstringStruct *local_438;
  cfstringStruct *local_430;
  cfstringStruct *local_428;
  cfstringStruct *local_420;
  cfstringStruct *local_418;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined8 local_3e0;
  cfstringStruct *local_3d8;
  cfstringStruct *local_3d0;
  undefined **local_3c8;
  undefined8 local_3c0;
  int local_3b4;
  undefined **local_3b0;
  undefined **local_3a8;
  undefined **local_3a0;
  undefined **local_398;
  undefined **local_390;
  undefined8 local_388;
  undefined *local_380;
  undefined *local_378;
  cfstringStruct *local_370;
  cfstringStruct *local_368;
  undefined *local_360;
  undefined *local_358;
  undefined4 local_34c;
  undefined *local_348;
  undefined *local_340;
  undefined *local_338;
  undefined4 local_32c;
  undefined *local_328;
  undefined4 local_31c;
  undefined *local_318;
  undefined *local_310;
  undefined *local_308;
  undefined4 local_2fc;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  undefined8 local_2d8;
  undefined **local_2d0;
  undefined8 local_2c8;
  undefined8 *local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  uint local_290;
  uint local_28c;
  undefined **local_288;
  undefined8 local_280;
  cfstringStruct *local_278;
  undefined *local_270;
  undefined1 *local_268;
  undefined *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  uint local_214;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined **local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined8 local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  byte local_150;
  cfstringStruct *local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  undefined *local_128;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  bool local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_44;
  long local_40;
  cfstringStruct *local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_1a8 = param_3;
  local_1a0 = param_1;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,local_1a8);
  local_40 = local_1a0;
  uVar2 = *(ulong *)(local_1a0 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_finished_026a15b0);
  if ((uVar2 & 1) != 0) {
    local_44 = 1;
    goto LAB_01073748;
  }
  if (local_38 == (cfstringStruct *)0x0) {
    local_1b0 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar2 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) != 0) {
      pcVar7 = (cfstringStruct *)PTR_WCRefineLinkParser_026ce168;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_JSONObjectFromString__026adcc0,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_1d0 = pcVar7;
      local_50 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      pcVar7 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar7 & 1) == 0) {
        local_1d8 = (cfstringStruct *)0x0;
      }
      else {
        local_1d8 = local_50;
      }
      local_1e8 = local_1d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_1e8;
      pcVar7 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_capturedUrls);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1e0 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      pcVar7 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_69 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_1f0 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      else {
        pcVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_capturedUrls);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = pcVar7;
        local_68 = pcVar7;
      }
      local_69 = !bVar1;
      local_1f8 = local_1f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_1f8;
      if ((local_69 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(local_1e0);
      pcVar7 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_200 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      pcVar7 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_81 = 0;
      if (((ulong)pcVar7 & 1) == 0) {
        local_208 = (cfstringStruct *)0x0;
      }
      else {
        pcVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_208 = pcVar7;
      }
      local_210 = local_208;
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(local_200);
      local_78 = local_210;
      local_270 = PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar4 = *(undefined8 *)(local_1a0 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_pollCount_026ae170);
      local_288 = &PTR_s_session_0269d000;
      pcVar7 = local_58;
      local_280 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_captured);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_58;
      local_220 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_288[0x13],&cf_ready);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_58;
      local_228 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_288[0x13],&cf_page);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_58;
      local_230 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_288[0x13],&cf_title);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_58;
      local_238 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_288[0x13],&cf_openApp);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_58;
      local_240 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_288[0x13],&cf_hasVideo);
      _objc_retainAutoreleasedReturnValue();
      local_278 = local_78;
      pcVar7 = local_60;
      local_248 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_componentsJoinedByString__0269d140,&cf__)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_58;
      local_250 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_288[0x13],&cf_err);
      _objc_retainAutoreleasedReturnValue();
      local_460 = local_280;
      local_458 = local_220;
      local_450 = local_228;
      local_448 = local_230;
      local_440 = local_238;
      local_438 = local_240;
      local_430 = local_248;
      local_428 = local_278;
      local_420 = local_250;
      puVar3 = local_270;
      local_418 = pcVar6;
      local_268 = (undefined1 *)&local_460;
      local_258 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_270,PTR_s_stringWithFormat__0269cca8,
                 &
                 cf_poll__ldcaptured___ready___page___title___openApp___hasVideo___imgs__luurls___err___
                );
      _objc_retainAutoreleasedReturnValue();
      local_260 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_1a0 + 0x20),PTR_s_setLastDiag__026ae180);
      (*(code *)PTR__objc_release_02578630)(local_260);
      (*(code *)PTR__objc_release_02578630)(local_258);
      (*(code *)PTR__objc_release_02578630)(local_250);
      (*(code *)PTR__objc_release_02578630)(local_248);
      (*(code *)PTR__objc_release_02578630)(local_240);
      (*(code *)PTR__objc_release_02578630)(local_238);
      (*(code *)PTR__objc_release_02578630)(local_230);
      (*(code *)PTR__objc_release_02578630)(local_228);
      (*(code *)PTR__objc_release_02578630)(local_220);
      local_91 = 0;
      local_214 = 1;
      if (local_58 != (cfstringStruct *)0x0) {
        pcVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_ok);
        _objc_retainAutoreleasedReturnValue();
        local_28c = 1;
        local_91 = 1;
        local_90 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_214 = (uint)pcVar7 ^ local_28c;
      }
      local_290 = local_214;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_290 & 1) == 0) {
        puVar3 = PTR_WCRefineLinkParseResult_026cecb0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
        local_100 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setPlatform__026adde8,1);
        pcVar7 = *(cfstringStruct **)(local_1a0 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_sourceURL_026ad980);
        _objc_retainAutoreleasedReturnValue();
        local_2e8 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_2e8 = &cf___;
        }
        local_2e0 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setSourceURL__026addf0,local_2e8);
        (*(code *)PTR__objc_release_02578630)(local_2e0);
        pcVar7 = *(cfstringStruct **)(local_1a0 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_pageURL_026ae148);
        _objc_retainAutoreleasedReturnValue();
        local_2f8 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_2f8 = &cf___;
        }
        local_2f0 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setResolvedURL__026addf8,local_2f8);
        (*(code *)PTR__objc_release_02578630)(local_2f0);
        local_310 = PTR_WCRefineLinkParser_026ce168;
        puVar3 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_resolvedURL_026ad978);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_310;
        local_308 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_douyinURLIsImageNote__026ade98);
        local_111 = 0;
        local_2fc = 1;
        if (((ulong)puVar8 & 1) == 0) {
          local_318 = PTR_WCRefineLinkParser_026ce168;
          puVar3 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_sourceURL_026ad980);
          _objc_retainAutoreleasedReturnValue();
          local_111 = 1;
          puVar8 = local_318;
          local_110 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_douyinURLIsImageNote__026ade98);
          local_2fc = SUB84(puVar8,0);
        }
        local_31c = local_2fc;
        if ((local_111 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_110);
        }
        (*(code *)PTR__objc_release_02578630)(local_308);
        local_32c = 1;
        local_101 = (byte)local_31c & 1;
        local_340 = PTR_WCRefineLinkParser_026ce168;
        puVar3 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_resolvedURL_026ad978);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_340;
        local_338 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_douyinAwemeIDFromURL__026adf78);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 0;
        local_139 = 0;
        local_348 = puVar8;
        local_328 = puVar8;
        if (puVar8 == (undefined *)0x0) {
          local_358 = PTR_WCRefineLinkParser_026ce168;
          puVar3 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_sourceURL_026ad980);
          _objc_retainAutoreleasedReturnValue();
          local_34c = 1;
          local_129 = 1;
          puVar8 = local_358;
          local_128 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_douyinAwemeIDFromURL__026adf78);
          _objc_retainAutoreleasedReturnValue();
          local_139 = (byte)local_34c & 1 & (byte)local_34c;
          local_348 = puVar8;
          local_138 = puVar8;
        }
        local_360 = local_348;
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = local_360;
        if ((local_139 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_138);
        }
        if ((local_129 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        (*(code *)PTR__objc_release_02578630)(local_328);
        (*(code *)PTR__objc_release_02578630)(local_338);
        pcVar7 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_raw);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_368 = pcVar7;
        local_148 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        pcVar7 = local_368;
        (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar7 & 1) == 0) {
          local_370 = local_148;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          pcVar7 = local_370;
          (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar7 & 1) != 0) goto LAB_0107346c;
        }
        else {
LAB_0107346c:
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLinkParser_026ce168,PTR_s_fillDouyinResult_fromJSON__026adfb8,
                     local_100,local_148);
        }
        local_378 = PTR_WCRefineLinkParser_026ce168;
        local_380 = local_100;
        uVar4 = *(undefined8 *)(local_1a0 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_finishOnCardPlayback_026ae1b0);
        puVar3 = local_378;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_378,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,local_380,uVar4);
        if (((ulong)puVar3 & 1) == 0) {
          uVar4 = *(undefined8 *)(local_1a0 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_webView_026a12c0);
          _objc_retainAutoreleasedReturnValue();
          local_3c8 = &local_198;
          local_198 = PTR___NSConcreteStackBlock_02578660;
          local_190 = 0xc2000000;
          local_18c = 0;
          local_188 = FUN_01073860;
          local_180 = &DAT_02584d00;
          local_390 = &local_178;
          local_3f0 = local_120;
          local_3c0 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_178 = local_3f0;
          local_3b4 = 1;
          local_150 = local_101 & 1;
          local_398 = local_3c8 + 5;
          local_3e8 = local_100;
          (*(code *)PTR__objc_retain_02578638)();
          local_170 = local_3e8;
          local_3a0 = local_3c8 + 6;
          local_3e0 = *(undefined8 *)(local_1a0 + 0x20);
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = local_3e0;
          local_3a8 = local_3c8 + 7;
          local_3d8 = local_58;
          (*(code *)PTR__objc_retain_02578638)();
          local_160 = local_3d8;
          local_3b0 = local_3c8 + 8;
          local_3d0 = local_50;
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = local_3d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3c0,PTR_s_evaluateJavaScript_completionHan_026a12f0,
                     &
                     cf_JSON_stringify__window___WCR_DY_RESPONSES______map_function_x__returnx_body____
                     ,local_3c8);
          (*(code *)PTR__objc_release_02578630)(local_3c0);
          local_44 = local_3b4;
          local_388 = 0;
          _objc_storeStrong(local_3b0);
          _objc_storeStrong(local_3a8,local_388);
          _objc_storeStrong(local_3a0,local_388);
          _objc_storeStrong(local_398,local_388);
          _objc_storeStrong(local_390,local_388);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_1a0 + 0x20),
                     PTR_s_finishDouyinPollResult_payload_i_026ae1b8,local_100,local_58,
                     local_101 & 1,local_50);
          local_44 = 0;
        }
        local_3f8 = 0;
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_120,local_3f8);
        _objc_storeStrong(&local_100,local_3f8);
      }
      else {
        pcVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_page);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_298 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar7 = local_298;
        (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_a9 = false;
        bVar1 = ((ulong)pcVar7 & 1) == 0;
        if (bVar1) {
          local_2a0 = &cf___;
        }
        else {
          pcVar7 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_page);
          _objc_retainAutoreleasedReturnValue();
          local_2a0 = pcVar7;
          local_a8 = pcVar7;
        }
        local_a9 = !bVar1;
        local_2a8 = local_2a0;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = local_2a8;
        if ((local_a9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        (*(code *)PTR__objc_release_02578630)(local_298);
        uVar2 = *(ulong *)(local_1a0 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_reloadDouyinIfStuckOnBlank__026ae1a0,local_a0);
        if ((uVar2 & 1) == 0) {
          lVar5 = *(long *)(local_1a0 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_pollCount_026ae170);
          if (lVar5 == 1) {
LAB_01072db0:
            local_2b0 = &PTR_s_session_0269d000;
            pcVar7 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_captured);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_58;
            local_b8 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,local_2b0[0x13],&cf_ready);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = local_58;
            local_c0 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,local_2b0[0x13],&cf_page);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_58;
            local_c8 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,local_2b0[0x13],&cf_err);
            _objc_retainAutoreleasedReturnValue();
            local_2b8 = 0;
            local_d0 = pcVar6;
            _objc_storeStrong(&local_d0);
            _objc_storeStrong(&local_c8,local_2b8);
            _objc_storeStrong(&local_c0,local_2b8);
            _objc_storeStrong(&local_b8,local_2b8);
          }
          else {
            lVar5 = *(long *)(local_1a0 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_pollCount_026ae170);
            if (lVar5 % 4 == 0) goto LAB_01072db0;
          }
          lVar5 = *(long *)(local_1a0 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_pollCount_026ae170);
          if (lVar5 % 2 == 0) {
            uVar4 = *(undefined8 *)(local_1a0 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_webView_026a12c0);
            _objc_retainAutoreleasedReturnValue();
            local_2d0 = &local_f8;
            local_f8 = PTR___NSConcreteStackBlock_02578660;
            local_f0 = 0xc2000000;
            local_ec = 0;
            local_e8 = FUN_01073774;
            local_e0 = &DAT_02584cd0;
            local_2c0 = &local_d8;
            local_2d8 = *(undefined8 *)(local_1a0 + 0x20);
            local_2c8 = uVar4;
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = local_2d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2c8,PTR_s_evaluateJavaScript_completionHan_026a12f0,
                       &cf_document_documentElement_outerHTML,local_2d0);
            (*(code *)PTR__objc_release_02578630)(local_2c8);
            _objc_storeStrong(local_2c0,0);
          }
        }
        local_44 = 1;
        _objc_storeStrong(&local_a0,0);
      }
      local_400 = 0;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,local_400);
      _objc_storeStrong(&local_50,local_400);
      if (local_44 == 0) {
        local_44 = 0;
      }
      goto LAB_01073748;
    }
  }
  local_1c8 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar4 = *(undefined8 *)(local_1a0 + 0x20);
  local_1b8 = &PTR_s_douyinImageURLsFromHTML__026ae000;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_pollCount_026ae170);
  local_458 = local_38;
  puVar3 = local_1c8;
  local_460 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1c8,PTR_s_stringWithFormat__0269cca8,&cf_poll__ldjsError___);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_1a0 + 0x20),PTR_s_setLastDiag__026ae180);
  (*(code *)PTR__objc_release_02578630)(local_1c0);
  lVar5 = *(long *)(local_1a0 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,local_1b8[0x2e]);
  if (lVar5 != 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_1a0 + 0x20),PTR_s_pollCount_026ae170);
  }
  local_44 = 1;
LAB_01073748:
  local_408 = 0;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,local_408);
  return;
}

