// applyInlineHTMLHighlightPreservingSelection @ 01f0ae2c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::applyInlineHTMLHighlightPreservingSelection
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  cfstringStruct *pcVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *local_7a8;
  undefined *local_7a0;
  undefined *local_778;
  undefined *local_768;
  undefined *local_758;
  undefined *local_748;
  undefined *local_738;
  undefined *local_728;
  undefined *local_700;
  cfstringStruct *local_6f0;
  cfstringStruct *local_6e0;
  undefined *local_640;
  undefined *local_5a0;
  undefined *local_590;
  uint local_56c;
  cfstringStruct *local_560;
  undefined *local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  code *local_4d0;
  undefined *local_4c8;
  undefined *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  cfstringStruct *local_4a8;
  cfstringStruct *local_4a0;
  byte local_498;
  undefined8 local_490;
  cfstringStruct *local_488;
  undefined8 local_480;
  undefined *local_478;
  undefined1 auStack_470 [8];
  long local_468;
  long *local_460;
  undefined8 local_430;
  byte local_421;
  undefined *local_420;
  byte local_411;
  undefined *local_410;
  byte local_401;
  undefined *local_400;
  byte local_3f1;
  undefined *local_3f0;
  byte local_3e1;
  undefined *local_3e0;
  byte local_3d1;
  undefined *local_3d0;
  byte local_3c1;
  undefined *local_3c0;
  byte local_3b1;
  undefined *local_3b0;
  byte local_3a1;
  undefined *local_3a0;
  byte local_391;
  undefined *local_390;
  byte local_381;
  undefined *local_380;
  byte local_371;
  undefined *local_370;
  undefined *local_368;
  undefined *local_360;
  byte local_351;
  undefined *local_350;
  byte local_341;
  undefined *local_340;
  undefined *local_338;
  byte local_329;
  cfstringStruct *local_328;
  byte local_319;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  undefined *puStack_300;
  byte local_2f1;
  undefined *local_2f0;
  byte local_2e1;
  undefined *local_2e0;
  byte local_2d1;
  undefined *local_2d0;
  byte local_2c1;
  undefined *local_2c0;
  byte local_2b1;
  undefined *local_2b0;
  byte local_2a1;
  undefined *local_2a0;
  byte local_291;
  undefined *local_290;
  byte local_281;
  undefined *local_280;
  byte local_271;
  undefined *local_270;
  undefined *local_268;
  byte local_259;
  undefined *local_258;
  byte local_249;
  undefined *local_248;
  undefined *local_240;
  byte local_231;
  cfstringStruct *local_230;
  byte local_221;
  undefined *local_220;
  byte local_215;
  undefined4 local_214;
  cfstringStruct *local_210;
  SEL local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  cfstringStruct *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  cfstringStruct *local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [128];
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  uVar7 = DAT_02324058;
  uVar6 = DAT_02324040;
  uVar5 = DAT_02323f88;
  uVar4 = DAT_02323f60;
  uVar3 = DAT_02323f38;
  uVar2 = DAT_02323f28;
  uVar1 = DAT_02323d60;
  uVar21 = DAT_02323c98;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_208 = param_2;
  local_200 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    pcVar9 = local_200;
    (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_560 = pcVar10;
    if (pcVar10 == (cfstringStruct *)0x0) {
      local_560 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_210 = local_560;
    (*(code *)PTR__objc_release_02578630)(pcVar10);
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    pcVar9 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_length_0269cca0);
    if (pcVar9 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_200,PTR_s_refreshHTMLStatusLabelWithPrefix_026c7fb0,0);
      local_214 = 1;
    }
    else {
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = pcVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar11 = pcVar10;
      FUN_01f0d170();
      local_221 = 0;
      local_56c = 1;
      if (((ulong)pcVar11 & 1) == 0) {
        puVar12 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        local_221 = 1;
        local_220 = puVar12;
        FUN_01f0d170();
        local_56c = (uint)puVar12;
      }
      if ((local_221 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_220);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar10);
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      local_215 = (byte)local_56c & 1;
      local_231 = 0;
      bVar8 = true;
      if ((local_56c & 1) == 0) {
        pcVar9 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_traitCollection_026caba8);
        _objc_retainAutoreleasedReturnValue();
        local_231 = 1;
        local_230 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar8 = pcVar9 == (cfstringStruct *)((long)&MACH_HEADER.magic + 2);
      }
      local_215 = bVar8;
      if ((local_231 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_230);
      }
      local_249 = 0;
      local_259 = 0;
      local_590 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_215 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_259 = 1;
        local_258 = local_590;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_0232c528,DAT_0233a760,DAT_0233a758,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_249 = 1;
        local_248 = local_590;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_240 = local_590;
      if ((local_259 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_258);
      }
      if ((local_249 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_248);
      }
      local_271 = 0;
      local_281 = 0;
      local_5a0 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_215 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_0233a740,uVar6,DAT_02323ff8,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_281 = 1;
        local_280 = local_5a0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323d68,DAT_0233a750,DAT_02323d50,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_271 = 1;
        local_270 = local_5a0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_268 = local_5a0;
      if ((local_281 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_280);
      }
      if ((local_271 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_270);
      }
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlLineNumberView_026c80a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlLineNumberView_026c80a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlLineNumberView_026c80a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = pcVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar10);
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      local_291 = 0;
      local_2a1 = 0;
      local_640 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_215 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_2a1 = 1;
        local_2a0 = local_640;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02324258,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_291 = 1;
        local_290 = local_640;
      }
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(local_640,PTR_s_CGColor_026ca470);
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = pcVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar11 = pcVar10;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      (*(code *)PTR__objc_release_02578630)(pcVar10);
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      if ((local_2a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2a0);
      }
      if ((local_291 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_290);
      }
      local_2b1 = 0;
      local_2c1 = 0;
      if ((local_215 & 1) == 0) {
        puVar12 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar21,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_2c1 = 1;
        local_2c0 = puVar12;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_2b1 = 1;
        local_2b0 = puVar12;
      }
      pcVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlLineNumberView_026c80a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      if ((local_2c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2c0);
      }
      if ((local_2b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2b0);
      }
      pcVar9 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_length_0269cca0);
      if (pcVar9 < (cfstringStruct *)0x1d4c1) {
        pcVar9 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = pcVar9;
        puVar12 = PTR_s_selectedRange_026a43a0;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_308 = pcVar10;
        puStack_300 = puVar12;
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        pcVar9 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_319 = 0;
        local_329 = 0;
        local_6e0 = pcVar10;
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_6f0 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4029000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
          _objc_retainAutoreleasedReturnValue();
          local_319 = 1;
          local_318 = local_6f0;
          if (local_6f0 == (cfstringStruct *)0x0) {
            local_6f0 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x4029000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                       PTR_s_systemFontOfSize__0269cc50);
            _objc_retainAutoreleasedReturnValue();
            local_329 = 1;
            local_328 = local_6f0;
          }
          local_6e0 = local_6f0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_310 = local_6e0;
        if ((local_329 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_328);
        }
        if ((local_319 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_318);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        local_341 = 0;
        local_351 = 0;
        local_700 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if ((local_215 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          local_351 = 1;
          local_350 = local_700;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323e40,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          local_341 = 1;
          local_340 = local_700;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_338 = local_700;
        if ((local_351 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_350);
        }
        if ((local_341 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_340);
        }
        puVar12 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
        _objc_alloc();
        pcVar9 = local_210;
        local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        local_38 = local_310;
        local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
        local_30 = local_338;
        puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar12,PTR_s_initWithString_attributes__026a02b0,pcVar9);
        local_360 = puVar12;
        (*(code *)PTR__objc_release_02578630)(puVar13);
        local_98 = &cf_pattern;
        local_88 = &cf_<___[_s_S]*___>;
        local_90 = &cf_color;
        local_371 = 0;
        local_381 = 0;
        local_728 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if ((local_215 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,0x3fe0000000000000,DAT_02323d40,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_381 = 1;
          local_380 = local_728;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,DAT_02323ee8,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_371 = 1;
          local_370 = local_728;
        }
        local_80 = local_728;
        puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_88,&local_98,2);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = &cf_pattern;
        local_a8 = &cf_<__[_>__>;
        local_b0 = &cf_color;
        local_391 = 0;
        local_3a1 = 0;
        local_738 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_78 = puVar12;
        if ((local_215 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,DAT_02323c70,DAT_02323d70,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_3a1 = 1;
          local_3a0 = local_738;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,uVar21,0x3fee666666666666,PTR__OBJC_CLASS___UIColor_026cdf78
                     ,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_391 = 1;
          local_390 = local_738;
        }
        local_a0 = local_738;
        puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_a8,&local_b8,2);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = &cf_pattern;
        local_c8 = &cf__a_zA_Z________s___;
        local_d0 = &cf_color;
        local_3b1 = 0;
        local_3c1 = 0;
        local_748 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_70 = puVar13;
        if ((local_215 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323f80,DAT_02323da8,uVar4,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_3c1 = 1;
          local_3c0 = local_748;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_3b1 = 1;
          local_3b0 = local_748;
        }
        local_c0 = local_748;
        puVar14 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c8,&local_d8,2);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = &cf_pattern;
        local_e8 = &
                   cf__b_function_const_let_var_return_if_else_for_while_class_new_document_window_script_style_body_div_canvas_audio_video__b
        ;
        local_f0 = &cf_color;
        local_3d1 = 0;
        local_3e1 = 0;
        local_758 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_68 = puVar14;
        if ((local_215 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,DAT_02323e80,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_3e1 = 1;
          local_3e0 = local_758;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_3d1 = 1;
          local_3d0 = local_758;
        }
        local_e0 = local_758;
        puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e8,&local_f8,2);
        _objc_retainAutoreleasedReturnValue();
        local_118 = &cf_pattern;
        local_108 = &cf___________________;
        local_110 = &cf_color;
        local_3f1 = 0;
        local_401 = 0;
        local_768 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_60 = puVar15;
        if ((local_215 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02339ae8,DAT_02323cc0,DAT_02323c90,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_401 = 1;
          local_400 = local_768;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,uVar4,DAT_02332e58,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_3f1 = 1;
          local_3f0 = local_768;
        }
        local_100 = local_768;
        puVar16 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_108,&local_118,2);
        _objc_retainAutoreleasedReturnValue();
        local_138 = &cf_pattern;
        local_128 = &cf___0_9a_fA_F__3_8_;
        local_130 = &cf_color;
        local_411 = 0;
        local_421 = 0;
        local_778 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_58 = puVar16;
        if ((local_215 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar21,DAT_02323f18,0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_421 = 1;
          local_420 = local_778;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,uVar5,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_411 = 1;
          local_410 = local_778;
        }
        local_120 = local_778;
        puVar17 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_128,&local_138,2);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_50 = puVar17;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_78,6);
        _objc_retainAutoreleasedReturnValue();
        local_368 = puVar18;
        (*(code *)PTR__objc_release_02578630)(puVar17);
        if ((local_421 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_420);
        }
        if ((local_411 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_410);
        }
        (*(code *)PTR__objc_release_02578630)(puVar16);
        if ((local_401 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_400);
        }
        if ((local_3f1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3f0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar15);
        if ((local_3e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3e0);
        }
        if ((local_3d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3d0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar14);
        if ((local_3c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3c0);
        }
        if ((local_3b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3b0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar13);
        if ((local_3a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3a0);
        }
        if ((local_391 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_390);
        }
        (*(code *)PTR__objc_release_02578630)(puVar12);
        if ((local_381 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_380);
        }
        if ((local_371 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_370);
        }
        _memset(auStack_470,0,0x40);
        puVar12 = local_368;
        (*(code *)PTR__objc_retain_02578638)();
        local_7a0 = puVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_470,auStack_1b8,
                   0x10);
        if (local_7a0 != (undefined *)0x0) {
          lVar20 = *local_460;
          local_7a8 = (undefined *)0x0;
          do {
            do {
              if (*local_460 - lVar20 != 0) {
                _objc_enumerationMutation(*local_460 - lVar20,puVar12);
              }
              puVar13 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
              uVar21 = *(undefined8 *)(local_468 + (long)local_7a8 * 8);
              local_430 = uVar21;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar21,PTR_s_objectForKeyedSubscript__0269d098,&cf_pattern);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar13,PTR_s_regularExpressionWithPattern_opt_0269ef10);
              _objc_retainAutoreleasedReturnValue();
              local_478 = puVar13;
              (*(code *)PTR__objc_release_02578630)(uVar21);
              uVar21 = local_430;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_430,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
              _objc_retainAutoreleasedReturnValue();
              pcVar9 = local_210;
              puVar13 = local_478;
              pcVar10 = local_210;
              local_480 = uVar21;
              (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_length_0269cca0);
              puVar14 = local_360;
              local_1f0 = 0;
              local_1e8 = 0;
              local_490 = 0;
              local_4e0 = PTR___NSConcreteGlobalBlock_02578658;
              local_4d8 = 0xd0800000;
              local_4d4 = 0;
              local_4d0 = FUN_01f0d370;
              local_4c8 = &DAT_0258cb20;
              local_488 = pcVar10;
              local_1f8 = pcVar10;
              local_1e0 = pcVar10;
              (*(code *)PTR__objc_retain_02578638)();
              uVar21 = local_480;
              local_4c0 = puVar14;
              (*(code *)PTR__objc_retain_02578638)();
              uVar1 = local_430;
              local_4b8 = uVar21;
              (*(code *)PTR__objc_retain_02578638)();
              pcVar11 = local_200;
              local_4b0 = uVar1;
              (*(code *)PTR__objc_retain_02578638)();
              pcVar10 = local_210;
              local_4a8 = pcVar11;
              (*(code *)PTR__objc_retain_02578638)();
              local_4a0 = pcVar10;
              local_498 = local_215 & 1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar13,PTR_s_enumerateMatchesInString_options_0269ef28,pcVar9,0,local_490,
                         local_488,&local_4e0);
              _objc_storeStrong(&local_4a0,0);
              _objc_storeStrong(&local_4a8,0);
              _objc_storeStrong(&local_4b0,0);
              _objc_storeStrong(&local_4b8,0);
              _objc_storeStrong(&local_4c0,0);
              _objc_storeStrong(&local_480,0);
              _objc_storeStrong(&local_478,0);
              local_7a8 = local_7a8 + 1;
            } while (local_7a8 < local_7a0);
            local_7a0 = puVar12;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_470,
                       auStack_1b8,0x10);
            local_7a8 = (undefined *)0x0;
          } while (local_7a0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar12);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_200,PTR_s_applyInlineHTMLSearchHighlightTo_026c8198,local_360);
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setApplyingHTMLHighlight__026c81a0,1);
        pcVar9 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        pcVar9 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        local_1d8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        local_1c8 = local_310;
        local_1d0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
        local_1c0 = local_338;
        puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1c8,&local_1d8,2);
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        (*(code *)PTR__objc_release_02578630)(puVar12);
        pcVar9 = local_308;
        pcVar10 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        pcVar11 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar19 = pcVar11;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar11);
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        if (pcVar9 <= pcVar19) {
          pcVar9 = local_200;
          (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar9);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setApplyingHTMLHighlight__026c81a0,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_200,PTR_s_refreshHTMLStatusLabelWithPrefix_026c7fb0);
        _objc_storeStrong(&local_368,0);
        _objc_storeStrong(&local_360,0);
        _objc_storeStrong(&local_338,0);
        _objc_storeStrong(&local_310,0);
        local_214 = 0;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4029000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
        _objc_retainAutoreleasedReturnValue();
        local_2d1 = 0;
        if (puVar12 == (undefined *)0x0) {
          puVar13 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4029000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          local_2d0 = puVar13;
        }
        pcVar9 = local_200;
        local_2d1 = puVar12 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        if ((local_2d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2d0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar12);
        local_2e1 = 0;
        local_2f1 = 0;
        if ((local_215 & 1) == 0) {
          puVar12 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          local_2f1 = 1;
          local_2f0 = puVar12;
        }
        else {
          puVar12 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          local_2e1 = 1;
          local_2e0 = puVar12;
        }
        pcVar9 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        if ((local_2f1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2f0);
        }
        if ((local_2e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2e0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_200,PTR_s_applyInlineHTMLSearchHighlightTo_026c8188);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_200,PTR_s_refreshHTMLStatusLabelWithPrefix_026c7fb0,&cf__N);
        local_214 = 1;
      }
      _objc_storeStrong(&local_268);
      _objc_storeStrong(&local_240,0);
    }
    _objc_storeStrong(&local_210,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

