// wcr_cardWords:title:range:empty:compact: @ 01db0d8c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x34 bytes */

ID WCRefineSessionStatsBoardView::wcr_cardWords_title_range_empty_compact_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7)

{
  double dVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double local_730;
  double local_728;
  double local_720;
  double local_718;
  undefined8 local_698;
  double local_690;
  ulong local_648;
  ulong local_640;
  ulong local_5f0;
  ulong local_5e8;
  cfstringStruct *local_588;
  ID local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  double local_370;
  double dStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  double local_350;
  double dStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  double local_330;
  double dStack_328;
  ID local_318;
  undefined *local_310;
  ulong local_308;
  undefined8 local_300;
  double local_2f8;
  double local_2f0;
  ulong local_2e8;
  ulong local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  ulong local_298;
  ulong local_290;
  undefined8 local_288;
  double local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined *local_268;
  ulong local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  ulong local_210;
  int local_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  double dStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  double dStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  ID local_180;
  double local_178;
  ID local_170;
  undefined1 local_161;
  undefined8 local_160;
  undefined8 local_158;
  cfstringStruct *local_150;
  ulong local_148;
  SEL local_140;
  ID local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02323f60;
  dVar16 = DAT_02323c98;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  dVar17 = DAT_02323c98;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_150,param_4);
  local_158 = 0;
  _objc_storeStrong(&local_158,param_5);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_6);
  local_161 = (undefined1)param_7;
  IVar2 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_wcr_card_026c4f10);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = local_138;
  pcVar3 = local_150;
  local_170 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_588 = &cf_p;
  }
  else {
    local_588 = local_150;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar8,PTR_s_wcr_placeCardTitle_onCard__026c4f18,local_588,local_170);
  uVar4 = local_148;
  local_178 = dVar17;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
  IVar8 = local_138;
  uVar9 = local_160;
  if (uVar4 == 0) {
    puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    FUN_01d8f4e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_wcr_label_font_color__026c4e70,uVar9,puVar6);
    _objc_retainAutoreleasedReturnValue();
    local_180 = IVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    dVar16 = local_178 + 4.0;
    uVar13 = 0x4030000000000000;
    uVar9 = 0x4070c00000000000;
    uVar19 = 0x4044000000000000;
    FUN_01d8ec14();
    local_1c0 = uVar13;
    dStack_1b8 = dVar16;
    local_1b0 = uVar9;
    uStack_1a8 = uVar19;
    local_1a0 = uVar13;
    dStack_198 = dVar16;
    local_190 = uVar9;
    uStack_188 = uVar19;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,dVar16,uVar9,uVar19,local_180,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setTag__026caa80,0x4e);
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addSubview__026ca4c0,local_180);
    uVar13 = 0x4030000000000000;
    dVar16 = local_178 + 60.0;
    uVar19 = 0;
    uVar9 = 0x4072c00000000000;
    FUN_01d8ec14();
    local_200 = uVar13;
    uStack_1f8 = uVar19;
    local_1f0 = uVar9;
    dStack_1e8 = dVar16;
    local_1e0 = uVar13;
    uStack_1d8 = uVar19;
    local_1d0 = uVar9;
    dStack_1c8 = dVar16;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,uVar19,uVar9,dVar16,local_170,PTR_s_setFrame__026ca960);
    IVar8 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = IVar8;
    local_204 = 1;
    _objc_storeStrong(&local_180,0);
  }
  else {
    local_210 = 1;
    _memset(auStack_258,0,0x40);
    uVar4 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_5e8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10);
    if (local_5e8 != 0) {
      lVar10 = *local_248;
      local_5f0 = 0;
      do {
        do {
          if (*local_248 - lVar10 != 0) {
            _objc_enumerationMutation(*local_248 - lVar10,uVar4);
          }
          uVar11 = *(ulong *)(local_250 + local_5f0 * 8);
          local_218 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar11);
          if (local_210 < uVar5) {
            local_210 = uVar5;
          }
          local_5f0 = local_5f0 + 1;
          local_260 = uVar5;
        } while (local_5f0 < local_5e8);
        local_5e8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10
                  );
        local_5f0 = 0;
      } while (local_5e8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    dVar17 = local_178 + 6.0;
    uVar13 = 0;
    uVar9 = 0x4072c00000000000;
    uVar19 = 0x4044000000000000;
    FUN_01d8ec14();
    local_288 = uVar13;
    local_280 = dVar17;
    local_278 = uVar9;
    local_270 = uVar19;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,dVar17,uVar9,uVar19,puVar6,PTR_s_initWithFrame__026ca6e8);
    local_268 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTag__026caa80,0x5c);
    local_290 = 0;
    _memset(auStack_2d8,0,0x40);
    uVar4 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_640 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_128,0x10);
    if (local_640 != 0) {
      lVar10 = *local_2c8;
      local_648 = 0;
      do {
        do {
          if (*local_2c8 - lVar10 != 0) {
            _objc_enumerationMutation(*local_2c8 - lVar10,uVar4);
          }
          uVar11 = *(ulong *)(local_2d0 + local_648 * 8);
          local_298 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_word);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_2e0 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar6);
          uVar5 = local_2e0;
          if ((uVar11 & 1) == 0) {
            local_204 = 5;
          }
          else {
            puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = local_2e0;
            local_2e0 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar11);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            uVar5 = local_2e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
            if (uVar5 < 2) {
              local_204 = 5;
            }
            else {
              uVar5 = local_298;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_298,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar5);
              if (local_210 == 0) {
                local_690 = 0.0;
              }
              else {
                local_690 = (double)NEON_ucvtf(uVar11);
                dVar17 = (double)NEON_ucvtf(local_210);
                local_690 = local_690 / dVar17;
              }
              local_2f0 = local_690;
              local_2f8 = local_690 * 15.0 + 13.0;
              if (local_690 < dVar1) {
                local_698 = *(undefined8 *)PTR__UIFontWeightSemibold_02578160;
              }
              else {
                local_698 = *(undefined8 *)PTR__UIFontWeightBold_02578140;
              }
              local_300 = local_698;
              uVar5 = local_290;
              local_2e8 = uVar11;
              FUN_01dad9f8();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
              local_308 = uVar5;
              _objc_alloc();
              dVar17 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
              dVar20 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)PTR__CGRectZero_025782f0,
                         *(undefined8 *)(PTR__CGRectZero_025782f0 + 8));
              puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
              local_310 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_setBackgroundColor__026ca888);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_setOpaque__026ca9f8,0);
              IVar8 = local_138;
              uVar5 = local_2e0;
              puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar8,PTR_s_wcr_label_font_color__026c4e70,uVar5,puVar6,local_308);
              _objc_retainAutoreleasedReturnValue();
              local_318 = IVar8;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_setNumberOfLines__026ca9d8);
              (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_setTextAlignment__026caa90,1);
              (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_sizeToFit_0269ec08);
              (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_frame_026ca640);
              uStack_378 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
              local_380 = *(undefined8 *)PTR__CGPointZero_025782e0;
              dVar17 = (double)(long)dVar17 + 4.0;
              dVar20 = (double)(long)dVar20 + 2.0;
              local_370 = dVar17;
              dStack_368 = dVar20;
              local_360 = local_380;
              uStack_358 = uStack_378;
              local_350 = dVar17;
              dStack_348 = dVar20;
              local_340 = local_380;
              uStack_338 = uStack_378;
              local_330 = dVar17;
              dStack_328 = dVar20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_380,uStack_378,local_318,PTR_s_setFrame__026ca960);
              IVar8 = local_138;
              puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &::cf__);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x4022000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                         PTR_s_systemFontOfSize_weight__026cab60);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_308;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_308,PTR_s_colorWithAlphaComponent__026ca578);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar8,PTR_s_wcr_label_font_color__026c4e70,puVar6,puVar7);
              _objc_retainAutoreleasedReturnValue();
              local_388 = IVar8;
              (*(code *)PTR__objc_release_02578630)(uVar5);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_setNumberOfLines__026ca9d8,1);
              (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_sizeToFit_0269ec08);
              (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_frame_026ca640);
              dVar17 = (double)(long)dVar17;
              dVar20 = (double)(long)dVar20;
              local_718 = dVar17 * dVar1;
              if (local_718 <= 8.0) {
                local_718 = 8.0;
              }
              local_720 = dVar17;
              if (local_718 <= dVar17) {
                local_720 = local_718;
              }
              local_728 = dVar20 * dVar16;
              if (local_728 <= 6.0) {
                local_728 = 6.0;
              }
              local_730 = dVar20;
              if (local_728 <= dVar20) {
                local_730 = local_728;
              }
              local_720 = local_330 + local_720;
              local_730 = dStack_328 + local_730;
              uVar9 = 0;
              dVar14 = 0.0;
              FUN_01d8ec14();
              (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_setFrame__026ca960);
              (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_bounds_026ca548);
              _CGRectGetWidth(dVar14,uVar9);
              dVar15 = dVar14 - dVar17;
              dVar18 = dVar17;
              (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_bounds_026ca548);
              _CGRectGetHeight(dVar15,dVar18,local_720,local_730);
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar14 - dVar17,dVar15 - dVar20,dVar17,dVar20,local_388,
                         PTR_s_setFrame__026ca960);
              (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_addSubview__026ca4c0,local_318);
              (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_addSubview__026ca4c0,local_388);
              (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_addSubview__026ca4c0,local_310);
              lVar12 = local_290 - 0xf;
              if (local_290 + 1 < 0x10) {
                local_204 = 0;
              }
              else {
                lVar12 = 4;
                local_204 = 4;
              }
              local_290 = local_290 + 1;
              _objc_storeStrong(lVar12,&local_388);
              _objc_storeStrong(&local_318,0);
              _objc_storeStrong(&local_310,0);
              _objc_storeStrong(&local_308,0);
            }
          }
          _objc_storeStrong(&local_2e0,0);
          if ((local_204 != 0) && (local_204 != 5)) goto LAB_01db1dec;
          local_648 = local_648 + 1;
        } while (local_648 < local_640);
        local_640 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_128,
                   0x10);
        local_648 = 0;
      } while (local_640 != 0);
    }
    local_204 = 0;
LAB_01db1dec:
    (*(code *)PTR__objc_release_02578630)(uVar4);
    dVar16 = 300.0;
    uVar9 = 0x4030000000000000;
    uVar13 = 0x4028000000000000;
    uVar19 = 0x4024000000000000;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_wcr_reflowCloud_width_pad_gapX_g_026c4e10,local_268);
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addSubview__026ca4c0,local_268);
    (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_frame_026ca640);
    _CGRectGetMaxY(dVar16,uVar9,uVar13,uVar19);
    uVar19 = 0x4072c00000000000;
    uVar9 = 0x4030000000000000;
    dVar16 = dVar16 + 16.0;
    uVar13 = 0;
    FUN_01d8ec14();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,uVar13,uVar19,dVar16,local_170,PTR_s_setFrame__026ca960);
    IVar8 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = IVar8;
    local_204 = 1;
    _objc_storeStrong(&local_268,0);
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_130;
}

