// FUN_00444744 @ 00444744

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00444744(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double local_7b0;
  double local_738;
  double local_718;
  double local_710;
  double local_700;
  undefined **local_6a8;
  undefined8 local_698;
  cfstringStruct *local_670;
  byte local_660;
  uint local_654;
  cfstringStruct *local_640;
  cfstringStruct *local_620;
  undefined *local_5f0;
  undefined *local_5e8;
  uint local_4c8;
  undefined *local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  undefined *local_3a8;
  double local_3a0;
  undefined8 local_398;
  double local_390;
  double local_388;
  undefined8 local_380;
  double dStack_378;
  double local_370;
  double dStack_368;
  undefined8 local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  double local_340;
  undefined8 uStack_338;
  double local_330;
  double dStack_328;
  double local_318;
  undefined8 uStack_310;
  double local_308;
  double dStack_300;
  undefined *local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  byte local_241;
  undefined8 local_240;
  byte local_231;
  undefined8 local_230;
  undefined *local_228;
  byte local_219;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  byte local_202;
  byte local_201;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  cfstringStruct *local_1b0;
  undefined *local_1a8;
  double local_1a0;
  double local_198;
  undefined *local_190;
  undefined *local_188;
  byte local_179;
  ulong local_178;
  ulong local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_150;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar2 & 1) != 0) && (uVar3 = local_130, FUN_0045867c(), (uVar3 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_WCRLE_ensureChipBar_026a3ba0);
    uVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_viewWithTag__026cabe0,0x2c63f);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    local_140 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_150 = 1;
    }
    else {
      puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_filterChipOptions_026a1030);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
      local_158 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_selectedFilterPackRel_026a3dd0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_160 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_contentRevision_026a3dd8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_boardSortMode_026a3de0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_allChipHidden_026a3de8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ungroupedChipHidden_026a3df0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_stringWithFormat__0269cca8,&cf__lu__lu__ld__ld__d__d___);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_130;
      local_168 = puVar2;
      _objc_getAssociatedObject(local_130,DAT_026e0368);
      _objc_retainAutoreleasedReturnValue();
      local_179 = 0;
      local_170 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,local_168);
      local_4c8 = 0;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_179 = 1;
        local_178 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_4c8 = 0;
        if (uVar3 != 0) {
          uVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isHidden_026ca768);
          local_4c8 = (uint)uVar3 ^ 1;
        }
      }
      if ((local_179 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_178);
      }
      if ((local_4c8 & 1) == 0) {
        _objc_setAssociatedObject(local_130,DAT_026e0368,local_168,3);
        uVar3 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar2 = PTR_s_FG_1_026a1018;
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
        _objc_retainAutoreleasedReturnValue();
        FUN_004584a0();
        _objc_retainAutoreleasedReturnValue();
        local_188 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar2 = PTR_s_Link_100_026a1028;
        dVar13 = 1.0;
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        dVar10 = DAT_02323d98;
        dVar12 = DAT_02323d90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323da0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        FUN_004584a0();
        _objc_retainAutoreleasedReturnValue();
        local_190 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_198 = 0.0;
        local_1a0 = 30.0;
        puVar4 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_mutableCopy_0269d8a0);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_1a8 = puVar4;
        if (DAT_028ca9b8 == 0) {
          local_48 = &cf_id;
          local_38 = &cf___new__;
          local_40 = &cf_name;
          local_30 = &cf_e_R_;
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_1a8;
          local_68 = &cf_id;
          local_58 = &cf___manage__;
          local_60 = &cf_name;
          local_50 = &cf__t;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        else {
          local_88 = &cf_id;
          local_78 = &cf___manage__;
          local_80 = &cf_name;
          puVar5 = puVar4;
          FUN_0043c204();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__b_);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_70 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_88,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar2 = local_1a8;
          local_a8 = &cf_id;
          local_98 = &cf___cancel__;
          local_a0 = &cf_name;
          local_90 = &cf_Sm;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_98,&local_a8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        _memset(auStack_1f0,0,0x40);
        puVar2 = local_1a8;
        (*(code *)PTR__objc_retain_02578638)();
        local_5e8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                   0x10);
        if (local_5e8 != (undefined *)0x0) {
          lVar7 = *local_1e0;
          local_5f0 = (undefined *)0x0;
          do {
            do {
              if (*local_1e0 - lVar7 != 0) {
                _objc_enumerationMutation(*local_1e0 - lVar7,puVar2);
              }
              pcVar8 = *(cfstringStruct **)(local_1e8 + (long)local_5f0 * 8);
              local_1b0 = pcVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              local_620 = pcVar8;
              if (pcVar8 == (cfstringStruct *)0x0) {
                local_620 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1f8 = local_620;
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              pcVar8 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              local_640 = pcVar8;
              if (pcVar8 == (cfstringStruct *)0x0) {
                local_640 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_200 = local_640;
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              pcVar8 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_isEqualToString__0269ccc8,&cf___new__);
              local_654 = 1;
              if (((ulong)pcVar8 & 1) == 0) {
                pcVar8 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_isEqualToString__0269ccc8,&cf___manage__);
                local_654 = 1;
                if (((ulong)pcVar8 & 1) == 0) {
                  pcVar8 = local_1f8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f8,PTR_s_isEqualToString__0269ccc8,&cf___cancel__);
                  local_654 = (uint)pcVar8;
                }
              }
              local_201 = (byte)local_654 & 1;
              local_660 = 0;
              if ((local_654 & 1) == 0) {
                pcVar8 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_isEqualToString__0269ccc8,local_160);
                local_660 = (byte)pcVar8;
              }
              local_202 = local_660 & 1;
              local_219 = 0;
              bVar1 = (local_201 & 1) == 0;
              if (bVar1) {
                local_670 = (cfstringStruct *)PTR_WCRefineLocalEmoticonStore_026ce440;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineLocalEmoticonStore_026ce440,
                           PTR_s_chipTitleForName_packRel__026a3df8,local_200,local_1f8);
                _objc_retainAutoreleasedReturnValue();
                local_218 = local_670;
              }
              else {
                local_670 = local_200;
              }
              local_219 = bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_210 = local_670;
              if ((local_219 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_218);
              }
              puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
              _objc_alloc_init();
              local_228 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setText__026caa88,local_210);
              local_231 = 0;
              local_241 = 0;
              if ((local_202 & 1) == 0) {
                dVar9 = 13.0;
                local_698 = 0;
                FUN_00459420();
                _objc_retainAutoreleasedReturnValue();
                local_241 = 1;
                local_240 = local_698;
              }
              else {
                dVar9 = 14.0;
                local_698 = 1;
                FUN_00459420();
                _objc_retainAutoreleasedReturnValue();
                local_231 = 1;
                local_230 = local_698;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setFont__026ca958,local_698);
              if ((local_241 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_240);
              }
              if ((local_231 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_230);
              }
              if ((local_202 & 1) == 0) {
                local_6a8 = &local_188;
              }
              else {
                local_6a8 = &local_190;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_228,PTR_s_setTextColor__026caa98,*local_6a8);
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setTextAlignment__026caa90,1);
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_sizeToFit_0269ec08);
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_bounds_026ca548);
              local_270 = dVar9;
              local_268 = dVar10;
              local_260 = dVar12;
              local_258 = dVar13;
              _CGRectGetWidth();
              local_250 = dVar9;
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_bounds_026ca548);
              local_298 = dVar9;
              local_290 = dVar10;
              local_288 = dVar12;
              local_280 = dVar13;
              _CGRectGetHeight(dVar9,dVar10,dVar12,dVar13);
              local_2a8 = local_250 + 12.0;
              local_2b0 = 0x4042000000000000;
              local_700 = local_2a8;
              if (local_2a8 < 36.0) {
                local_700 = 36.0;
              }
              local_2b8 = local_700;
              local_2a0 = local_700;
              local_2c0 = 2.0;
              local_2c8 = 1.0;
              if ((local_202 & 1) == 0) {
                local_710 = 0.0;
              }
              else {
                local_710 = 3.0;
              }
              local_2d0 = dVar9 + local_710;
              local_2e0 = 0;
              local_2e8 = (local_1a0 - local_2d0) * 0.5;
              local_718 = local_2e8;
              if (local_2e8 <= 0.0) {
                local_718 = 0.0;
              }
              local_2f0 = local_718;
              local_2d8 = local_718;
              puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
              local_278 = dVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = 0;
              dVar10 = local_198;
              dVar12 = local_2a0;
              dVar13 = local_1a0;
              local_2f8 = puVar4;
              FUN_004593d4();
              local_340 = dVar10;
              uStack_338 = uVar11;
              local_330 = dVar12;
              dStack_328 = dVar13;
              local_318 = dVar10;
              uStack_310 = uVar11;
              local_308 = dVar12;
              dStack_300 = dVar13;
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar10,uVar11,dVar12,dVar13,local_2f8,PTR_s_setFrame__026ca960);
              puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_setBackgroundColor__026ca888);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_setUserInteractionEnabled__026caad8,1);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_setAccessibilityIdentifier__0269ebc0,local_1f8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_setAccessibilityLabel__0269e968,local_200);
              uVar11 = 0;
              dVar10 = local_2d8;
              dVar12 = local_2a0;
              dVar13 = local_278;
              FUN_004593d4();
              local_380 = uVar11;
              dStack_378 = dVar10;
              local_370 = dVar12;
              dStack_368 = dVar13;
              local_360 = uVar11;
              dStack_358 = dVar10;
              local_350 = dVar12;
              dStack_348 = dVar13;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar11,dVar10,local_228,PTR_s_setFrame__026ca960);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_228,PTR_s_setUserInteractionEnabled__026caad8,0);
              (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_addSubview__026ca4c0,local_228);
              if ((local_202 & 1) != 0) {
                local_390 = local_250 * 0.7;
                local_398 = 0x4028000000000000;
                local_738 = local_390;
                if (local_390 < 12.0) {
                  local_738 = 12.0;
                }
                local_3a0 = local_738;
                local_388 = local_738;
                puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
                _objc_alloc();
                dVar10 = (local_2a0 - local_388) * 0.5;
                dVar9 = local_2d8 + local_278 + local_2c8;
                dVar12 = local_388;
                dVar13 = local_2c0;
                FUN_004593d4();
                local_3c8 = dVar10;
                local_3c0 = dVar9;
                local_3b8 = dVar12;
                local_3b0 = dVar13;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar10,dVar9,puVar4,PTR_s_initWithFrame__026ca6e8);
                local_3a8 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTag__026caa80,DAT_023241a8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3a8,PTR_s_setBackgroundColor__026ca888,local_190);
                puVar4 = local_3a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3a8,PTR_s_setUserInteractionEnabled__026caad8,0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f8,PTR_s_addSubview__026ca4c0,local_3a8);
                _objc_storeStrong(&local_3a8,0);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_130,
                         PTR_s_WCRLE_onChipTap__026a3bb8,0x40);
              if ((local_201 & 1) == 0) {
                puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_initWithTarget_action__026ca718,local_130,
                           PTR_s_WCRLE_onChipLongPress__026a3be0);
                local_3d0 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_02323c78,puVar4,PTR_s_setMinimumPressDuration__026ca9c8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f8,PTR_s_addGestureRecognizer__026ca4a8,local_3d0);
                _objc_storeStrong(&local_3d0,0);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_2f8);
              pcVar8 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_isEqualToString__0269ccc8,&cf___manage__);
              if (((ulong)pcVar8 & 1) != 0) {
                FUN_00457ac4(local_2f8);
              }
              dVar10 = local_2a0 + 4.0;
              local_198 = local_198 + dVar10;
              _objc_storeStrong(&local_2f8);
              _objc_storeStrong(&local_228,0);
              _objc_storeStrong(&local_210,0);
              _objc_storeStrong(&local_200,0);
              _objc_storeStrong(&local_1f8,0);
              local_5f0 = local_5f0 + 1;
            } while (local_5f0 < local_5e8);
            local_5e8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                       auStack_128,0x10);
            local_5f0 = (undefined *)0x0;
          } while (local_5e8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        dVar9 = local_198;
        local_7b0 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_bounds_026ca548);
        _CGRectGetWidth(local_7b0,dVar10,dVar12,dVar13);
        if (local_7b0 <= dVar9) {
          local_7b0 = dVar9;
        }
        dVar10 = local_1a0;
        FUN_00454080();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_7b0,dVar10,local_140,PTR_s_setContentSize__026ca8e8);
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setNeedsLayout_0269deb8);
        _objc_storeStrong(&local_1a8);
        _objc_storeStrong(&local_190,0);
        _objc_storeStrong(&local_188,0);
        local_150 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_WCRLE_layoutChipBar_026a3ba8);
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_WCRLE_applyChipSelection_026a3bc0);
        local_150 = 1;
      }
      _objc_storeStrong(&local_170);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_160,0);
      _objc_storeStrong(&local_158,0);
    }
    _objc_storeStrong(&local_140,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

