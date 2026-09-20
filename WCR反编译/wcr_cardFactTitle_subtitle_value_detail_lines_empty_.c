// wcr_cardFactTitle:subtitle:value:detail:lines:empty: @ 01da09c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x40 bytes */

ID __thiscall
WCRefineSessionStatsBoardView::wcr_cardFactTitle_subtitle_value_detail_lines_empty_
          (WCRefineSessionStatsBoardView *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5,ID param_6,ID param_7,ID param_8)

{
  ID IVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  double in_d0;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double local_698;
  ulong local_648;
  ulong local_640;
  double local_610;
  ID local_400;
  undefined1 auStack_3f8 [8];
  long local_3f0;
  long *local_3e8;
  undefined8 local_3b8;
  undefined8 local_3b0;
  double local_3a8;
  undefined8 local_3a0;
  double local_398;
  undefined8 local_390;
  double dStack_388;
  undefined8 local_380;
  double dStack_378;
  undefined8 local_370;
  double dStack_368;
  undefined8 local_360;
  double dStack_358;
  double local_348;
  double local_340;
  undefined4 local_334;
  undefined8 local_330;
  double dStack_328;
  undefined8 local_320;
  double dStack_318;
  undefined8 local_310;
  double local_308;
  undefined8 local_300;
  double local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  double local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined *local_280;
  undefined *local_278;
  undefined *local_270;
  ulong local_268;
  undefined8 local_260;
  double dStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_238;
  double dStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  ID local_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  ID local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  ID local_138;
  double local_130;
  ID local_128;
  undefined8 local_120;
  ulong local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  SEL local_f0;
  ID local_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  local_f0 = param_2;
  local_e8 = param_1;
  _objc_storeStrong(&local_f8,param_3);
  local_100 = 0;
  _objc_storeStrong(&local_100,param_4);
  local_108 = 0;
  _objc_storeStrong(&local_108,param_5);
  local_110 = 0;
  _objc_storeStrong(&local_110,param_6);
  local_118 = 0;
  _objc_storeStrong(&local_118,param_7);
  local_120 = 0;
  _objc_storeStrong(&local_120,param_8);
  IVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_wcr_card_026c4f10);
  _objc_retainAutoreleasedReturnValue();
  local_128 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_wcr_placeCardTitle_onCard__026c4f18,local_f8,IVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_wcr_placeCardSubtitle_onCard_aft_026c4f20,local_100,local_128);
  lVar8 = local_108;
  local_130 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if ((lVar8 == 0) &&
     (uVar2 = local_118, (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0),
     IVar1 = local_e8, uVar7 = local_120, uVar2 == 0)) {
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_01d8f4e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_label_font_color__026c4e70,uVar7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_138 = IVar1;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar9 = 0x4030000000000000;
    uVar7 = 0x4070c00000000000;
    uVar11 = 0x4044000000000000;
    dVar12 = local_130;
    FUN_01d8ec14();
    local_180 = uVar9;
    local_170 = uVar7;
    uStack_168 = uVar11;
    local_158 = uVar9;
    local_148 = uVar7;
    uStack_140 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,dVar12,uVar7,uVar11,local_138,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTag__026caa80,0x4e);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_138);
    uVar9 = 0x4030000000000000;
    dVar12 = local_130 + 56.0;
    uVar11 = 0;
    uVar7 = 0x4072c00000000000;
    FUN_01d8ec14();
    local_1c0 = uVar9;
    uStack_1b8 = uVar11;
    local_1b0 = uVar7;
    dStack_1a8 = dVar12;
    local_1a0 = uVar9;
    uStack_198 = uVar11;
    local_190 = uVar7;
    dStack_188 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,uVar11,uVar7,dVar12,local_128,PTR_s_setFrame__026ca960);
    IVar1 = local_128;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = IVar1;
    local_1c4 = 1;
    _objc_storeStrong(&local_138,0);
  }
  else {
    lVar3 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
    IVar1 = local_e8;
    lVar8 = local_108;
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x403c000000000000,*(undefined8 *)PTR__UIFontWeightBold_02578140,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_01d8f3a4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_label_font_color__026c4e70,lVar8,puVar4)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = IVar1;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1d0,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
      uVar9 = 0x4030000000000000;
      uVar7 = 0x4070c00000000000;
      uVar11 = 0x4042000000000000;
      dVar12 = local_130;
      FUN_01d8ec14();
      local_210 = uVar9;
      local_200 = uVar7;
      uStack_1f8 = uVar11;
      local_1f0 = uVar9;
      local_1e0 = uVar7;
      uStack_1d8 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,dVar12,uVar7,uVar11,local_1d0,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setTag__026caa80,0x4c);
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_1d0);
      local_130 = local_130 + 40.0;
      _objc_storeStrong(&local_1d0,0);
    }
    lVar3 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
    IVar1 = local_e8;
    lVar8 = local_110;
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_01d8f4e8();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_label_font_color__026c4e70,lVar8,puVar4)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_218 = IVar1;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar9 = 0x4030000000000000;
      uVar7 = 0x4070c00000000000;
      uVar11 = 0x4034000000000000;
      dVar12 = local_130;
      FUN_01d8ec14();
      local_260 = uVar9;
      dStack_258 = dVar12;
      local_250 = uVar7;
      uStack_248 = uVar11;
      local_238 = uVar9;
      dStack_230 = dVar12;
      local_228 = uVar7;
      uStack_220 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,dVar12,uVar7,uVar11,local_218,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_setTag__026caa80,0x4e);
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_218);
      local_130 = local_130 + 24.0;
      _objc_storeStrong(&local_218,0);
    }
    uVar2 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
    if (uVar2 == 0) {
      _memset(auStack_3f8,0,0x40);
      uVar2 = local_118;
      (*(code *)PTR__objc_retain_02578638)();
      local_640 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f8,auStack_d8,0x10);
      if (local_640 != 0) {
        lVar8 = *local_3e8;
        local_648 = 0;
        do {
          do {
            if (*local_3e8 - lVar8 != 0) {
              _objc_enumerationMutation(*local_3e8 - lVar8,uVar2);
            }
            IVar1 = local_e8;
            uVar7 = *(undefined8 *)(local_3f0 + local_648 * 8);
            puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
            local_3b8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                       PTR_s_systemFontOfSize__0269cc50);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            FUN_01d8f3a4();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_wcr_label_font_color__026c4e70,uVar7,puVar4);
            _objc_retainAutoreleasedReturnValue();
            local_400 = IVar1;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_setNumberOfLines__026ca9d8,0);
            IVar1 = local_400;
            dVar12 = 8000.0;
            FUN_01d8ebe8();
            (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_sizeThatFits__0269ec10);
            local_698 = (double)(long)dVar12;
            if (local_698 <= 20.0) {
              local_698 = 20.0;
            }
            FUN_01d8ec14();
            (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_setFrame__026ca960);
            (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_setTag__026caa80,0x4e);
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_400);
            (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_frame_026ca640);
            local_130 = local_130 + local_698 + 8.0;
            _objc_storeStrong(&local_400,0);
            local_648 = local_648 + 1;
          } while (local_648 < local_640);
          local_640 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f8,auStack_d8,
                     0x10);
          local_648 = 0;
        } while (local_640 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      uVar2 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      local_268 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableParagraphStyle_026cf238;
      local_270 = puVar4;
      _objc_alloc_init();
      local_278 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff4000000000000,puVar5,PTR_s_setLineHeightMultiple__026c4f58);
      (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_setParagraphSpacing__026c4f60);
      (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_setAlignment__026ca858,0);
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      _objc_alloc();
      uVar2 = local_268;
      local_58 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      local_40 = local_270;
      local_50 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
      puVar5 = puVar4;
      FUN_01d8f4e8();
      _objc_retainAutoreleasedReturnValue();
      local_48 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_02578088;
      local_30 = local_278;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_38 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithString_attributes__026a02b0,uVar2);
      local_280 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = PTR__OBJC_CLASS___UITextView_026ce1b8;
      _objc_alloc();
      uVar9 = 0x4024000000000000;
      uVar7 = 0x4071800000000000;
      uVar11 = 0x4044000000000000;
      dVar12 = local_130;
      FUN_01d8ec14();
      local_2a8 = uVar9;
      local_2a0 = dVar12;
      local_298 = uVar7;
      local_290 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,dVar12,uVar7,uVar11,puVar4,PTR_s_initWithFrame__026ca6e8);
      local_288 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setEditable__026a9fc8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setSelectable__026a9fd0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setScrollEnabled__0269e428,0);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setAttributedText__026a0000,local_280);
      uVar11 = 0x4024000000000000;
      uVar9 = 0x4010000000000000;
      uVar10 = 0x4020000000000000;
      uVar7 = uVar11;
      FUN_01da1ad4();
      local_2f0 = uVar9;
      uStack_2e8 = uVar11;
      local_2e0 = uVar10;
      uStack_2d8 = uVar7;
      local_2c8 = uVar9;
      uStack_2c0 = uVar11;
      local_2b8 = uVar10;
      uStack_2b0 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,uVar11,local_288,PTR_s_setTextContainerInset__026a9fd8);
      puVar4 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_textContainer_026a34b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setTag__026caa80,0x4f);
      puVar4 = local_288;
      uVar7 = 0x4071800000000000;
      dVar12 = 8000.0;
      FUN_01d8ebe8();
      local_310 = uVar7;
      local_308 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_sizeThatFits__0269ec10);
      local_300 = uVar7;
      local_2f8 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_frame_026ca640);
      local_334 = 0x1c;
      local_340 = (double)(long)local_2f8;
      local_610 = local_340;
      if (local_340 <= 28.0) {
        local_610 = 28.0;
      }
      local_348 = local_610;
      dStack_318 = local_610;
      dStack_358 = local_610;
      dStack_378 = local_610;
      local_390 = uVar7;
      dStack_388 = dVar12;
      local_380 = uVar10;
      local_370 = uVar7;
      dStack_368 = dVar12;
      local_360 = uVar10;
      local_330 = uVar7;
      dStack_328 = dVar12;
      local_320 = uVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_288);
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_frame_026ca640);
      local_130 = local_130 + local_610 + 8.0;
      local_3b0 = uVar7;
      local_3a8 = dVar12;
      local_3a0 = uVar10;
      local_398 = local_610;
      _objc_storeStrong(&local_288);
      _objc_storeStrong(&local_280,0);
      _objc_storeStrong(&local_278,0);
      _objc_storeStrong(&local_270,0);
      _objc_storeStrong(&local_268,0);
    }
    dVar12 = local_130 + 14.0;
    uVar9 = 0x4030000000000000;
    uVar11 = 0;
    uVar7 = 0x4072c00000000000;
    FUN_01d8ec14();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,uVar11,uVar7,dVar12,local_128,PTR_s_setFrame__026ca960);
    IVar1 = local_128;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = IVar1;
    local_1c4 = 1;
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_e0;
}

