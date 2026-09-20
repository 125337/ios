// reloadChipBar @ 01b6367c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::reloadChipBar(ID param_1,SEL param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double local_5f0;
  double local_5c8;
  double local_5b8;
  double local_5b0;
  double local_5a0;
  undefined *local_590;
  undefined *local_588;
  cfstringStruct *local_578;
  byte local_56c;
  cfstringStruct *local_550;
  cfstringStruct *local_538;
  undefined *local_510;
  undefined *local_508;
  undefined *local_450;
  undefined *local_368;
  double local_360;
  undefined8 local_358;
  double local_350;
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  double dStack_328;
  double local_320;
  double dStack_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double local_2d8;
  undefined4 local_2cc;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined *local_2a8;
  double local_2a0;
  double local_298;
  undefined8 local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  undefined8 local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  byte local_1f1;
  undefined *local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  undefined *local_1d8;
  byte local_1c9;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  byte local_1b4;
  byte local_1b3;
  byte local_1b2;
  byte local_1b1;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  cfstringStruct *local_160;
  undefined *local_158;
  long local_150;
  double local_148;
  double local_140;
  undefined *local_138;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  SEL local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [128];
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
  uVar3 = *(undefined8 *)(param_1 + (long)_chipBar);
  local_f8 = param_2;
  local_f0 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_filterChipOptions_026a1030);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_f0;
  local_100 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_filterPackRel_026bf8f8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_111 = 0;
  local_121 = 0;
  if (puVar4 == (undefined *)0x0) {
    local_450 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_selectedFilterPackRel_026a3dd0);
    _objc_retainAutoreleasedReturnValue();
    local_121 = 1;
    local_120 = local_450;
  }
  else {
    local_450 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_filterPackRel_026bf8f8);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = local_450;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_450;
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_f0;
  puVar4 = PTR_s_FG_1_026a1018;
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_chipColorWithSel_fallback__026bf918,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_130 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar5 = local_f0;
  puVar4 = PTR_s_Link_100_026a1028;
  dVar13 = 1.0;
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  uVar3 = DAT_02323d98;
  dVar11 = DAT_02323d90;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323da0,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_chipColorWithSel_fallback__026bf918,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_140 = 12.0;
  local_148 = 30.0;
  local_150 = 0;
  puVar4 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_mutableCopy_0269d8a0);
  local_48 = &cf_id;
  local_38 = &cf___new__;
  local_40 = &cf_name;
  local_30 = &cf_e_R_;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_158 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar4 = local_158;
  local_68 = &cf_id;
  local_58 = &cf___manage__;
  local_60 = &cf_name;
  local_50 = &cf__t;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_68,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _memset(auStack_1a0,0,0x40);
  puVar4 = local_158;
  (*(code *)PTR__objc_retain_02578638)();
  local_508 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_e8,0x10);
  if (local_508 != (undefined *)0x0) {
    lVar7 = *local_190;
    local_510 = (undefined *)0x0;
    do {
      do {
        if (*local_190 - lVar7 != 0) {
          _objc_enumerationMutation(*local_190 - lVar7,puVar4);
        }
        pcVar8 = *(cfstringStruct **)(local_198 + (long)local_510 * 8);
        local_160 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_538 = pcVar8;
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_538 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1a8 = local_538;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        pcVar8 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_550 = pcVar8;
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_550 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1b0 = local_550;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        pcVar8 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_isEqualToString__0269ccc8,&cf___new__)
        ;
        local_1b1 = (byte)pcVar8;
        pcVar8 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a8,PTR_s_isEqualToString__0269ccc8,&cf___manage__);
        local_1b2 = (byte)pcVar8;
        bVar2 = 1;
        if ((local_1b1 & 1) == 0) {
          bVar2 = local_1b2;
        }
        local_1b3 = bVar2 & 1;
        local_56c = 0;
        if ((bVar2 & 1) == 0) {
          pcVar8 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_isEqualToString__0269ccc8,local_108)
          ;
          local_56c = (byte)pcVar8;
        }
        local_1b4 = local_56c & 1;
        local_1c9 = 0;
        bVar1 = (local_1b3 & 1) == 0;
        if (bVar1) {
          local_578 = (cfstringStruct *)PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,
                     PTR_s_chipTitleForName_packRel__026a3df8,local_1b0,local_1a8);
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = local_578;
        }
        else {
          local_578 = local_1b0;
        }
        local_1c9 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_1c0 = local_578;
        if ((local_1c9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1c8);
        }
        puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc_init();
        local_1d8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setText__026caa88,local_1c0);
        local_1e1 = 0;
        local_1f1 = 0;
        local_588 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        if ((local_1b4 & 1) == 0) {
          dVar9 = 13.0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          local_1f1 = 1;
          local_1f0 = local_588;
        }
        else {
          uVar3 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
          dVar9 = 13.0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
          _objc_retainAutoreleasedReturnValue();
          local_1e1 = 1;
          local_1e0 = local_588;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setFont__026ca958,local_588);
        if ((local_1f1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1f0);
        }
        if ((local_1e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1e0);
        }
        if ((local_1b4 & 1) == 0) {
          local_590 = local_130;
        }
        else {
          local_590 = local_138;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setTextColor__026caa98,local_590);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setTextAlignment__026caa90,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_sizeToFit_0269ec08);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_bounds_026ca548);
        local_220 = dVar9;
        local_218 = uVar3;
        local_210 = dVar11;
        local_208 = dVar13;
        _CGRectGetWidth();
        local_200 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_bounds_026ca548);
        local_248 = dVar9;
        local_240 = uVar3;
        local_238 = dVar11;
        local_230 = dVar13;
        _CGRectGetHeight(dVar9,uVar3,dVar11,dVar13);
        local_258 = local_200 + 12.0;
        local_260 = 0x4042000000000000;
        local_5a0 = local_258;
        if (local_258 < 36.0) {
          local_5a0 = 36.0;
        }
        local_268 = local_5a0;
        local_250 = local_5a0;
        local_270 = 2.0;
        local_278 = 1.0;
        if ((local_1b4 & 1) == 0) {
          local_5b0 = 0.0;
        }
        else {
          local_5b0 = 3.0;
        }
        local_280 = dVar9 + local_5b0;
        local_290 = 0;
        local_298 = (local_148 - local_280) * 0.5;
        local_5b8 = local_298;
        if (local_298 <= 0.0) {
          local_5b8 = 0.0;
        }
        local_2a0 = local_5b8;
        local_288 = local_5b8;
        puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        local_228 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
        _objc_retainAutoreleasedReturnValue();
        local_2cc = 0;
        local_2d8 = (36.0 - local_148) * 0.5;
        local_5c8 = local_2d8;
        if (local_2d8 <= 0.0) {
          local_5c8 = 0.0;
        }
        local_2e0 = local_5c8;
        dVar11 = local_140;
        dVar13 = local_250;
        dVar9 = local_148;
        local_2a8 = puVar5;
        FUN_01b5a61c();
        local_300 = dVar11;
        dStack_2f8 = local_5c8;
        local_2f0 = dVar13;
        dStack_2e8 = dVar9;
        local_2c8 = dVar11;
        dStack_2c0 = local_5c8;
        local_2b8 = dVar13;
        dStack_2b0 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar11,local_5c8,dVar13,dVar9,local_2a8,PTR_s_setFrame__026ca960);
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_setUserInteractionEnabled__026caad8,0)
        ;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2a8,PTR_s_setAccessibilityIdentifier__0269ebc0,local_1a8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2a8,PTR_s_setAccessibilityLabel__0269e968,local_1b0);
        dVar10 = 0.0;
        dVar9 = local_288;
        dVar11 = local_250;
        dVar13 = local_228;
        FUN_01b5a61c();
        local_340 = dVar10;
        dStack_338 = dVar9;
        local_330 = dVar11;
        dStack_328 = dVar13;
        local_320 = dVar10;
        dStack_318 = dVar9;
        local_310 = dVar11;
        dStack_308 = dVar13;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setUserInteractionEnabled__026caad8,0)
        ;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addSubview__026ca4c0,local_1d8);
        if ((local_1b4 & 1) != 0) {
          local_350 = local_200 * 0.7;
          local_358 = 0x4028000000000000;
          local_5f0 = local_350;
          if (local_350 < 12.0) {
            local_5f0 = 12.0;
          }
          local_360 = local_5f0;
          local_348 = local_5f0;
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          dVar10 = (local_250 - local_348) * 0.5;
          dVar9 = local_288 + local_228 + local_278;
          dVar11 = local_348;
          dVar13 = local_270;
          FUN_01b5a61c();
          (*(code *)PTR__objc_msgSend_02578628)(dVar10,puVar5,PTR_s_initWithFrame__026ca6e8);
          local_368 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setBackgroundColor__026ca888,local_138)
          ;
          puVar5 = local_368;
          (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          dVar10 = 1.0;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_368,PTR_s_setUserInteractionEnabled__026caad8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addSubview__026ca4c0,local_368);
          _objc_storeStrong(&local_150,local_2a8);
          _objc_storeStrong(&local_368,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(local_f0 + _chipBar),PTR_s_addSubview__026ca4c0,local_2a8);
        (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_frame_026ca640);
        _CGRectGetMaxX(dVar10,dVar9);
        uVar3 = 0x4010000000000000;
        local_140 = dVar10 + 4.0;
        _objc_storeStrong(&local_2a8);
        _objc_storeStrong(&local_1d8,0);
        _objc_storeStrong(&local_1c0,0);
        _objc_storeStrong(&local_1b0,0);
        _objc_storeStrong(&local_1a8,0);
        local_510 = local_510 + 1;
      } while (local_510 < local_508);
      local_508 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_e8,0x10)
      ;
      local_510 = (undefined *)0x0;
    } while (local_508 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  dVar13 = 0.0;
  uVar3 = 0;
  uVar12 = 0;
  uVar14 = 0x4044000000000000;
  FUN_01b6252c();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar12,*(undefined8 *)(local_f0 + _chipBar),PTR_s_setContentInset__0269e770);
  dVar11 = local_140 + 8.0;
  uVar3 = 0x4042000000000000;
  FUN_01b62500();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_f0 + _chipBar),PTR_s_setContentSize__026ca8e8);
  if (local_150 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar11 - 16.0,uVar3,dVar13 + 72.0,uVar14,*(undefined8 *)(local_f0 + _chipBar),
               PTR_s_scrollRectToVisible_animated__026b89e0,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

