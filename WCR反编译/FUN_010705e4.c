// FUN_010705e4 @ 010705e4

void FUN_010705e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  uint local_2a4;
  undefined8 local_2a0;
  undefined *local_298;
  uint local_28c;
  undefined8 local_288;
  uint local_27c;
  undefined8 local_278;
  undefined *local_270;
  uint local_264;
  undefined *local_260;
  undefined8 local_258;
  undefined *local_250;
  undefined *local_248;
  uint local_23c;
  undefined8 local_238;
  undefined *local_230;
  uint local_224;
  ulong local_220;
  ulong local_218;
  undefined8 local_210;
  ulong local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  uint local_1f0;
  uint local_1ec;
  ulong local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined **local_160;
  undefined8 local_158;
  ulong local_150;
  undefined8 local_148;
  ulong local_140;
  undefined *local_138;
  undefined *local_130;
  undefined **local_128;
  ulong local_120;
  undefined8 local_118;
  long local_110;
  undefined8 *local_108;
  byte local_f9;
  undefined8 local_f8;
  byte local_e9;
  undefined8 local_e8;
  undefined *local_e0;
  byte local_d1;
  undefined8 local_d0;
  ulong local_c8;
  byte local_b9;
  undefined8 local_b8;
  byte local_a9;
  undefined8 local_a8;
  undefined *local_a0;
  byte local_91;
  undefined8 local_90;
  byte local_81;
  undefined8 local_80;
  byte local_71;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  undefined1 local_48 [8];
  undefined8 local_40;
  long local_38;
  undefined1 local_30 [8];
  long local_28;
  
  local_108 = &local_70;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_118 = param_3;
  local_110 = param_1;
  local_38 = param_1;
  _objc_storeStrong(&local_40);
  uVar3 = local_118;
  local_108[5] = 0;
  _objc_storeStrong(local_48,uVar3);
  puVar1 = local_108;
  local_108[4] = local_110;
  if (puVar1[5] == 0) {
    local_120 = local_108[6];
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar6 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar6 & 1) != 0) {
      puVar2 = PTR_WCRefineLinkParser_026ce168;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_JSONObjectFromString__026adcc0,local_108[6]);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_108;
      local_108[2] = puVar2;
      local_140 = puVar1[2];
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      uVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar6 & 1) == 0) {
        local_148 = 0;
      }
      else {
        local_148 = local_108[2];
      }
      local_1a8 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      lVar4 = local_110;
      local_108[1] = local_1a8;
      local_1a0 = PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_pollCount_026ae170);
      uVar5 = local_108[1];
      local_160 = &PTR_s_session_0269d000;
      local_198 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_ready)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_108[1];
      local_190 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,local_160[0x13],&cf_page);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_108[1];
      local_188 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,local_160[0x13],&cf_title);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_108[1];
      local_180 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,local_160[0x13],&cf_hasVideo);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_108[1];
      local_178 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,local_160[0x13],&cf_clicked);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_108[1];
      local_170 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,local_160[0x13],&cf_httpErrorPage);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_108[1];
      local_168 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,local_160[0x13],&cf_login);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_108[1];
      local_158 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,local_160[0x13],&cf_rawKeys);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_150 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      uVar6 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_71 = 0;
      local_81 = 0;
      if ((uVar6 & 1) == 0) {
        local_1b0 = 0;
      }
      else {
        uVar3 = local_108[1];
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_rawKeys);
        _objc_retainAutoreleasedReturnValue();
        *local_108 = uVar3;
        local_1b4 = 1;
        local_71 = 1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_81 = (byte)local_1b4 & 1 & (byte)local_1b4;
        local_1b0 = uVar3;
        local_80 = uVar3;
      }
      local_1d8 = local_1b0;
      uVar3 = local_108[1];
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_err);
      _objc_retainAutoreleasedReturnValue();
      local_320 = local_198;
      local_318 = local_190;
      local_310 = local_188;
      local_308 = local_180;
      local_300 = local_178;
      local_2f8 = local_170;
      local_2f0 = local_168;
      local_2e8 = local_158;
      local_2e0 = local_1d8;
      puVar2 = local_1a0;
      local_2d8 = uVar3;
      local_1d0 = (undefined1 *)&local_320;
      local_1c0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_stringWithFormat__0269cca8,
                 &
                 cf_poll__ldready___page___title___hasVideo___clicked___httpError___login___rawKeys___err___
                );
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_110 + 0x20),PTR_s_setLastDiag__026ae180);
      (*(code *)PTR__objc_release_02578630)(local_1c8);
      (*(code *)PTR__objc_release_02578630)(local_1c0);
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(*local_108);
      }
      (*(code *)PTR__objc_release_02578630)(local_150);
      (*(code *)PTR__objc_release_02578630)(local_158);
      (*(code *)PTR__objc_release_02578630)(local_168);
      (*(code *)PTR__objc_release_02578630)(local_170);
      (*(code *)PTR__objc_release_02578630)(local_178);
      (*(code *)PTR__objc_release_02578630)(local_180);
      (*(code *)PTR__objc_release_02578630)(local_188);
      (*(code *)PTR__objc_release_02578630)(local_190);
      uVar6 = local_108[1];
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_ok);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_91 = 0;
      local_1dc = 1;
      if ((uVar6 & 1) != 0) {
        uVar3 = local_108[1];
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_ok);
        _objc_retainAutoreleasedReturnValue();
        local_1ec = 1;
        local_91 = 1;
        local_90 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1dc = (uint)uVar3 ^ local_1ec;
      }
      local_1f0 = local_1dc;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      (*(code *)PTR__objc_release_02578630)(local_1e8);
      if ((local_1f0 & 1) == 0) {
        lVar4 = *(long *)(local_110 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_pollCount_026ae170);
        if (lVar4 != 1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_110 + 0x20),PTR_s_pollCount_026ae170);
        }
        puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
        local_a0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,6);
        pcVar7 = *(cfstringStruct **)(local_110 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_sourceURL_026ad980);
        _objc_retainAutoreleasedReturnValue();
        local_200 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_200 = &cf___;
        }
        local_1f8 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setSourceURL__026addf0,local_200);
        (*(code *)PTR__objc_release_02578630)(local_1f8);
        uVar6 = local_108[1];
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_page);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_208 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        uVar6 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_a9 = 0;
        local_b9 = 0;
        if ((uVar6 & 1) == 0) {
          uVar3 = *(undefined8 *)(local_110 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_pageURL_026ae148);
          _objc_retainAutoreleasedReturnValue();
          local_b9 = 1;
          local_210 = uVar3;
          local_b8 = uVar3;
        }
        else {
          uVar3 = local_108[1];
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_page);
          _objc_retainAutoreleasedReturnValue();
          local_a9 = 1;
          local_210 = uVar3;
          local_a8 = uVar3;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setResolvedURL__026addf8,local_210);
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        (*(code *)PTR__objc_release_02578630)(local_208);
        uVar6 = local_108[1];
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_raw)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_218 = uVar6;
        local_c8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        uVar6 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar6 & 1) == 0) {
          local_220 = local_c8;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          uVar6 = local_220;
          (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar6 & 1) != 0) goto LAB_010711e0;
        }
        else {
LAB_010711e0:
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLinkParser_026ce168,PTR_s_fillInstagramResult_fromJSON__026ae100,
                     local_a0,local_c8);
        }
        puVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        local_230 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d1 = 0;
        local_224 = 0;
        if (puVar2 == (undefined *)0x0) {
          uVar3 = local_108[1];
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
          _objc_retainAutoreleasedReturnValue();
          local_d1 = 1;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_238 = uVar3;
          local_d0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          uVar3 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_224 = (uint)uVar3;
        }
        local_23c = local_224;
        if ((local_d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        (*(code *)PTR__objc_release_02578630)(local_230);
        if ((local_23c & 1) != 0) {
          uVar3 = local_108[1];
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
          _objc_retainAutoreleasedReturnValue();
          local_258 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setVideoURL__026adbb0);
          (*(code *)PTR__objc_release_02578630)(local_258);
          local_250 = PTR_WCRefineLinkParser_026ce168;
          puVar2 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_videoURL_026ad970);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = local_250;
          local_248 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_250,PTR_s_variantWithURL_label_width_heigh_026addc8,puVar2,&cf__,0,0);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = puVar8;
          (*(code *)PTR__objc_release_02578630)(local_248);
          if (local_e0 != (undefined *)0x0) {
            local_108[8] = local_e0;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       local_30,1);
            _objc_retainAutoreleasedReturnValue();
            local_260 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setVideoVariants__026add50);
            (*(code *)PTR__objc_release_02578630)(local_260);
          }
          _objc_storeStrong(&local_e0,0);
        }
        puVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_coverURL_026ad9a8);
        _objc_retainAutoreleasedReturnValue();
        local_270 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_e9 = 0;
        local_264 = 0;
        if (puVar2 == (undefined *)0x0) {
          uVar3 = local_108[1];
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
          _objc_retainAutoreleasedReturnValue();
          local_e9 = 1;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_278 = uVar3;
          local_e8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          uVar3 = local_278;
          (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_264 = (uint)uVar3;
        }
        local_27c = local_264;
        if ((local_e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        (*(code *)PTR__objc_release_02578630)(local_270);
        if ((local_27c & 1) != 0) {
          uVar3 = local_108[1];
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
          _objc_retainAutoreleasedReturnValue();
          local_288 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setCoverURL__026add60);
          (*(code *)PTR__objc_release_02578630)(local_288);
        }
        puVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        local_298 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_f9 = 0;
        local_28c = 0;
        if (puVar2 == (undefined *)0x0) {
          uVar3 = local_108[1];
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          local_f9 = 1;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_2a0 = uVar3;
          local_f8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          uVar3 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_28c = (uint)uVar3;
        }
        local_2a4 = local_28c;
        if ((local_f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f8);
        }
        (*(code *)PTR__objc_release_02578630)(local_298);
        if ((local_2a4 & 1) != 0) {
          uVar3 = local_108[1];
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          local_2b0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTitle__0269cef0);
          (*(code *)PTR__objc_release_02578630)(local_2b0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParser_026ce168,PTR_s_normalizeVideoVersusCover__026adff8,
                   local_a0);
        puVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_hasMedia_026ada58);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_110 + 0x20),PTR_s_finishWithResult_error__026adfc0,
                     local_a0,0);
        }
        local_2b8 = 0;
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_a0,local_2b8);
        *(undefined4 *)((long)local_108 + 0x1c) = 0;
      }
      else {
        lVar4 = *(long *)(local_110 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_pollCount_026ae170);
        if (lVar4 != 1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_110 + 0x20),PTR_s_pollCount_026ae170);
        }
        *(undefined4 *)((long)local_108 + 0x1c) = 1;
      }
      local_2c0 = 0;
      _objc_storeStrong(local_68);
      _objc_storeStrong(local_60,local_2c0);
      if (*(int *)((long)local_108 + 0x1c) == 0) {
        *(undefined4 *)((long)local_108 + 0x1c) = 0;
      }
      goto LAB_01071860;
    }
  }
  local_138 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar3 = *(undefined8 *)(local_110 + 0x20);
  local_128 = &PTR_s_douyinImageURLsFromHTML__026ae000;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_pollCount_026ae170);
  local_318 = local_108[5];
  puVar2 = local_138;
  local_320 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_stringWithFormat__0269cca8,&cf_poll__ldjsError___);
  _objc_retainAutoreleasedReturnValue();
  local_130 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_110 + 0x20),PTR_s_setLastDiag__026ae180);
  (*(code *)PTR__objc_release_02578630)(local_130);
  lVar4 = *(long *)(local_110 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,local_128[0x2e]);
  if (lVar4 != 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_110 + 0x20),PTR_s_pollCount_026ae170);
  }
  *(undefined4 *)((long)local_108 + 0x1c) = 1;
LAB_01071860:
  local_2c8 = 0;
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_40,local_2c8);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

