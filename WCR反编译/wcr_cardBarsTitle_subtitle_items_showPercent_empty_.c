// wcr_cardBarsTitle:subtitle:items:showPercent:empty: @ 01d9f388

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x34 bytes */

ID __thiscall
WCRefineSessionStatsBoardView::wcr_cardBarsTitle_subtitle_items_showPercent_empty_
          (WCRefineSessionStatsBoardView *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5,bool param_6,ID param_7)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double in_d0;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined *local_850;
  double local_848;
  long local_820;
  double local_810;
  double local_800;
  ulong local_780;
  ulong local_778;
  ulong local_730;
  ulong local_728;
  ulong local_630;
  ulong local_628;
  ID local_550;
  byte local_541;
  undefined *local_540;
  byte local_531;
  undefined *local_530;
  undefined *local_528;
  double local_520;
  byte local_511;
  long local_510;
  double local_508;
  double local_500;
  undefined4 local_4f4;
  undefined8 local_4f0;
  undefined8 local_4e8;
  double local_4e0;
  undefined8 local_4d8;
  undefined *local_4d0;
  double local_4c8;
  long local_4c0;
  undefined8 local_4b8;
  double local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined *local_498;
  undefined8 local_490;
  double dStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_468;
  double dStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  ID local_448;
  undefined1 auStack_440 [8];
  long local_438;
  long *local_430;
  long local_400;
  ulong local_3f8;
  undefined1 auStack_3f0 [8];
  long local_3e8;
  long *local_3e0;
  ulong local_3b0;
  long local_3a8;
  ulong local_3a0;
  undefined4 local_394;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  double dStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  double dStack_358;
  undefined8 local_350;
  double dStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_328;
  double dStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  ID local_308;
  double local_300;
  undefined8 local_2f0;
  undefined8 local_2e8;
  double local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  ID local_280;
  double local_278;
  double local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  double local_208;
  ulong local_200;
  double local_1f8;
  ID local_1f0;
  undefined8 local_1e8;
  byte local_1d9;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  SEL local_1c0;
  ID local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  local_1d0 = 0;
  _objc_storeStrong(&local_1d0,param_4);
  local_1d8 = 0;
  _objc_storeStrong(&local_1d8,param_5);
  local_1d9 = (byte)param_6;
  local_1e8 = 0;
  _objc_storeStrong(&local_1e8,param_7);
  IVar1 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_wcr_card_026c4f10);
  _objc_retainAutoreleasedReturnValue();
  local_1f0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1b8,PTR_s_wcr_placeCardTitle_onCard__026c4f18,local_1c8,IVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1b8,PTR_s_wcr_placeCardSubtitle_onCard_aft_026c4f20,local_1d0,local_1f0);
  uVar2 = local_1d8;
  local_1f8 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_200 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_200;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = local_200, (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_count_0269cfe0),
     uVar2 != 0)) {
    local_208 = 16.0;
    _memset(auStack_250,0,0x40);
    uVar2 = local_200;
    (*(code *)PTR__objc_retain_02578638)();
    local_628 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_a8,0x10);
    if (local_628 != 0) {
      lVar8 = *local_240;
      local_630 = 0;
      do {
        do {
          if (*local_240 - lVar8 != 0) {
            _objc_enumerationMutation(*local_240 - lVar8,uVar2);
          }
          local_210 = *(undefined8 *)(local_248 + local_630 * 8);
          puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          dVar11 = local_1f8 + 4.0;
          uVar14 = 0x4020000000000000;
          uVar13 = 0x4020000000000000;
          dVar16 = local_208;
          FUN_01d8ec14();
          local_278 = dVar16;
          local_270 = dVar11;
          local_268 = uVar13;
          local_260 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)(dVar16,dVar11,puVar4,PTR_s_initWithFrame__026ca6e8);
          local_258 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0x4010000000000000);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          uVar12 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(uVar12);
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addSubview__026ca4c0,local_258);
          IVar1 = local_1b8;
          uVar12 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          FUN_01d8f4e8();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcr_label_font_color__026c4e70,uVar12,puVar4);
          _objc_retainAutoreleasedReturnValue();
          local_280 = IVar1;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar12);
          (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_sizeToFit_0269ec08);
          dVar16 = local_1f8;
          uVar12 = 0x4028000000000000;
          dVar11 = local_208 + 12.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_bounds_026ca548);
          uVar15 = 0x4030000000000000;
          local_2b8 = uVar12;
          local_2b0 = uVar13;
          local_2a8 = uVar14;
          FUN_01d8ec14();
          local_2e0 = dVar11;
          local_2d0 = uVar13;
          uStack_2c8 = uVar15;
          local_2a0 = dVar11;
          local_290 = uVar13;
          uStack_288 = uVar15;
          (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addSubview__026ca4c0,local_280);
          (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_frame_026ca640);
          local_300 = dVar11;
          local_2f0 = uVar13;
          local_2e8 = uVar15;
          _CGRectGetMaxX(dVar11,dVar16,uVar13,uVar15);
          local_208 = dVar11 + 14.0;
          _objc_storeStrong(&local_280);
          _objc_storeStrong(&local_258,0);
          local_630 = local_630 + 1;
        } while (local_630 < local_628);
        local_628 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_a8,0x10
                  );
        local_630 = 0;
      } while (local_628 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_1f8 = local_1f8 + 26.0;
  }
  uVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_count_0269cfe0);
  IVar1 = local_1b8;
  uVar12 = local_1e8;
  if (uVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_01d8f4e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_label_font_color__026c4e70,uVar12,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_308 = IVar1;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar13 = 0x4030000000000000;
    uVar12 = 0x4070c00000000000;
    uVar14 = 0x4044000000000000;
    dVar16 = local_1f8;
    FUN_01d8ec14();
    local_350 = uVar13;
    dStack_348 = dVar16;
    local_340 = uVar12;
    uStack_338 = uVar14;
    local_328 = uVar13;
    dStack_320 = dVar16;
    local_318 = uVar12;
    uStack_310 = uVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,dVar16,uVar12,uVar14,local_308,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setTag__026caa80,0x4e);
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addSubview__026ca4c0,local_308);
    uVar13 = 0x4030000000000000;
    dVar16 = local_1f8 + 56.0;
    uVar14 = 0;
    uVar12 = 0x4072c00000000000;
    FUN_01d8ec14();
    local_390 = uVar13;
    uStack_388 = uVar14;
    local_380 = uVar12;
    dStack_378 = dVar16;
    local_370 = uVar13;
    uStack_368 = uVar14;
    local_360 = uVar12;
    dStack_358 = dVar16;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,uVar14,uVar12,dVar16,local_1f0,PTR_s_setFrame__026ca960);
    IVar1 = local_1f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = IVar1;
    local_394 = 1;
    _objc_storeStrong(&local_308,0);
  }
  else {
    local_3a0 = 1;
    local_3a8 = 0;
    _memset(auStack_3f0,0,0x40);
    uVar2 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_728 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f0,auStack_128,0x10);
    if (local_728 != 0) {
      lVar8 = *local_3e0;
      local_730 = 0;
      do {
        do {
          if (*local_3e0 - lVar8 != 0) {
            _objc_enumerationMutation(*local_3e0 - lVar8,uVar2);
          }
          uVar9 = *(ulong *)(local_3e8 + local_730 * 8);
          local_3b0 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          if (local_3a0 < uVar3) {
            local_3a0 = uVar3;
          }
          local_3a8 = local_3a8 + uVar3;
          local_730 = local_730 + 1;
          local_3f8 = uVar3;
        } while (local_730 < local_728);
        local_728 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f0,auStack_128,
                   0x10);
        local_730 = 0;
      } while (local_728 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _memset(auStack_440,0,0x40);
    uVar2 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_778 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_440,auStack_1a8,0x10);
    if (local_778 != 0) {
      lVar8 = *local_430;
      local_780 = 0;
      do {
        do {
          if (*local_430 - lVar8 != 0) {
            _objc_enumerationMutation(*local_430 - lVar8,uVar2);
          }
          IVar1 = local_1b8;
          lVar10 = *(long *)(local_438 + local_780 * 8);
          local_400 = lVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          FUN_01d8f3a4();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcr_label_font_color__026c4e70,lVar10,puVar4);
          _objc_retainAutoreleasedReturnValue();
          local_448 = IVar1;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(lVar10);
          (*(code *)PTR__objc_msgSend_02578628)(local_448,PTR_s_setLineBreakMode__026ca988,4);
          (*(code *)PTR__objc_msgSend_02578628)(local_448,PTR_s_setNumberOfLines__026ca9d8,1);
          uVar12 = 0x4030000000000000;
          uVar13 = 0x4058000000000000;
          uVar14 = 0x4032000000000000;
          dVar16 = local_1f8;
          FUN_01d8ec14();
          local_490 = uVar12;
          dStack_488 = dVar16;
          local_480 = uVar13;
          uStack_478 = uVar14;
          local_468 = uVar12;
          dStack_460 = dVar16;
          local_458 = uVar13;
          uStack_450 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,dVar16,uVar13,uVar14,local_448,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_448,PTR_s_setTag__026caa80,0x56);
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addSubview__026ca4c0,local_448);
          puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          dVar16 = local_1f8 + 5.0;
          uVar12 = 0x405d800000000000;
          uVar13 = 0x4055800000000000;
          uVar14 = 0x4020000000000000;
          FUN_01d8ec14();
          local_4b8 = uVar12;
          local_4b0 = dVar16;
          local_4a8 = uVar13;
          local_4a0 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,dVar16,uVar13,uVar14,puVar4,PTR_s_initWithFrame__026ca6e8);
          local_498 = puVar4;
          FUN_01d8f260();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = local_498;
          (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0x4010000000000000);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_setTag__026caa80,0x49);
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addSubview__026ca4c0,local_498);
          lVar10 = local_400;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_400,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar10);
          if (local_3a0 == 0) {
            local_800 = 0.0;
          }
          else {
            local_800 = (double)NEON_ucvtf(lVar6);
            dVar16 = (double)NEON_ucvtf(local_3a0);
            local_800 = local_800 / dVar16;
          }
          local_4c8 = local_800;
          puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_4c0 = lVar6;
          _objc_alloc();
          local_4f4 = 8;
          local_500 = local_4c8 * 86.0;
          local_810 = local_500;
          if (local_500 <= 8.0) {
            local_810 = 8.0;
          }
          local_508 = local_810;
          uVar13 = 0;
          uVar12 = 0;
          uVar14 = 0x4020000000000000;
          FUN_01d8ec14();
          local_4f0 = uVar12;
          local_4e8 = uVar13;
          local_4e0 = local_810;
          local_4d8 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,uVar13,local_810,uVar14,puVar4,PTR_s_initWithFrame__026ca6e8);
          lVar10 = local_400;
          local_4d0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_400,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
          _objc_retainAutoreleasedReturnValue();
          local_511 = 0;
          local_820 = lVar10;
          if (lVar10 == 0) {
            FUN_01da0980();
            _objc_retainAutoreleasedReturnValue();
            local_510 = local_820;
          }
          local_511 = lVar10 == 0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d0,PTR_s_setBackgroundColor__026ca888,local_820);
          if ((local_511 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_510);
          }
          (*(code *)PTR__objc_release_02578630)(lVar10);
          puVar4 = local_4d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0x4010000000000000);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_setTag__026caa80,0x4a);
          puVar5 = local_4d0;
          puVar4 = PTR_s_description_026ca5f8;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4c8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0)
          ;
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar5,puVar4,puVar7,1);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_addSubview__026ca4c0,local_4d0);
          if (local_3a8 == 0) {
            local_848 = 0.0;
          }
          else {
            dVar16 = (double)NEON_ucvtf(local_4c0);
            local_848 = (double)NEON_ucvtf(local_3a8);
            local_848 = (dVar16 * 100.0) / local_848;
          }
          local_520 = local_848;
          local_531 = 0;
          local_541 = 0;
          local_850 = PTR__OBJC_CLASS___NSString_026cdfe8;
          if ((local_1d9 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_541 = 1;
            local_540 = local_850;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_531 = 1;
            local_530 = local_850;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_528 = local_850;
          if ((local_541 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_540);
          }
          if ((local_531 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_530);
          }
          IVar1 = local_1b8;
          puVar4 = local_528;
          puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                     PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          FUN_01d8f4e8();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcr_label_font_color__026c4e70,puVar4,puVar5);
          _objc_retainAutoreleasedReturnValue();
          local_550 = IVar1;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_550,PTR_s_setTextAlignment__026caa90,2);
          uVar12 = 0x4069c00000000000;
          uVar13 = 0x4053800000000000;
          uVar14 = 0x4032000000000000;
          dVar16 = local_1f8;
          FUN_01d8ec14();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,dVar16,uVar13,uVar14,local_550,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_550,PTR_s_setTag__026caa80,0x4b);
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addSubview__026ca4c0,local_550);
          local_1f8 = local_1f8 + 26.0;
          _objc_storeStrong(&local_550);
          _objc_storeStrong(&local_528,0);
          _objc_storeStrong(&local_4d0,0);
          _objc_storeStrong(&local_498,0);
          _objc_storeStrong(&local_448,0);
          local_780 = local_780 + 1;
        } while (local_780 < local_778);
        local_778 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_440,auStack_1a8,
                   0x10);
        local_780 = 0;
      } while (local_778 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    dVar16 = local_1f8 + 12.0;
    uVar13 = 0x4030000000000000;
    uVar14 = 0;
    uVar12 = 0x4072c00000000000;
    FUN_01d8ec14();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,uVar14,uVar12,dVar16,local_1f0,PTR_s_setFrame__026ca960);
    IVar1 = local_1f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = IVar1;
    local_394 = 1;
  }
  _objc_storeStrong(&local_200);
  _objc_storeStrong(&local_1f0,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_1b0;
}

