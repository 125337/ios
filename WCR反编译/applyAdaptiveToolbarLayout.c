// applyAdaptiveToolbarLayout @ 01641e54

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyAdaptiveToolbarLayout(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  double in_d0;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double in_d2;
  double dVar15;
  undefined8 uVar16;
  double local_778;
  double local_738;
  double local_730;
  double local_728;
  ulong local_700;
  ulong local_6f8;
  ulong local_6b0;
  ulong local_6a8;
  double local_670;
  double local_668;
  double local_660;
  double local_658;
  double local_650;
  double local_648;
  double local_608;
  ID local_600;
  ID local_5f8;
  ulong local_4b0;
  ulong local_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double dStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  double local_460;
  double local_458;
  undefined8 local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  undefined8 local_428;
  double local_420;
  double local_418;
  undefined8 local_410;
  double local_408;
  double local_400;
  double local_3f8;
  long local_3f0;
  long local_3e8;
  ulong local_3e0;
  undefined1 auStack_3d8 [8];
  long local_3d0;
  long *local_3c8;
  ulong local_398;
  long local_390;
  ulong local_388;
  undefined1 auStack_380 [8];
  long local_378;
  long *local_370;
  ulong local_340;
  undefined8 local_338;
  double local_330;
  double local_328;
  double local_320;
  undefined8 local_318;
  double local_310;
  undefined8 local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  double local_268;
  undefined8 local_258;
  undefined8 local_238;
  undefined1 local_219;
  ID local_218;
  byte local_209;
  ID local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  ID local_1c8;
  ID local_1c0;
  int local_1b4;
  ID local_1b0;
  ID local_1a8;
  ID local_1a0;
  int local_194;
  ID local_190;
  SEL local_188;
  ID local_180;
  double local_178;
  double local_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long alStack_68 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_188 = param_2;
  local_180 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toolbarCollapsed_026b1db8);
  if ((param_1 & 1) == 0) {
    local_194 = 1;
    IVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbarColumnCount_026b1dc0);
    local_5f8 = IVar3;
    if ((long)IVar3 <= (long)local_194) {
      local_5f8 = (long)local_194;
    }
    local_1a8 = local_5f8;
    local_190 = local_5f8;
    local_1b4 = 2;
    IVar4 = local_180;
    local_1a0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbarRowCount_026b1dc8);
    local_600 = IVar4;
    if ((long)IVar4 <= (long)local_1b4) {
      local_600 = (long)local_1b4;
    }
    local_1c8 = local_600;
    local_1b0 = local_600;
    local_1c0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbarItemHeight_026b1dd0);
    uVar12 = 0x3ff0000000000000;
    if (in_d0 <= 1.0) {
      local_608 = 52.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbarItemHeight_026b1dd0);
      local_608 = in_d0;
    }
    local_1d0 = local_608;
    uVar10 = 0x4028000000000000;
    local_1d8 = 12.0;
    IVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar15 = in_d2;
    local_200 = uVar10;
    local_1f8 = uVar12;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar12 = 0x4024000000000000;
    local_209 = 0;
    local_219 = 0;
    uVar1 = in_d2 < 10.0;
    bVar2 = false;
    local_1e0 = in_d2;
    if ((bool)uVar1) {
      IVar3 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_209 = 1;
      local_208 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar3 != 0;
      local_219 = uVar1;
      local_218 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      uVar1 = local_219;
    }
    local_219 = uVar1;
    if ((local_209 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_208);
    }
    if (bVar2) {
      IVar3 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_238 = uVar12;
      local_1e0 = dVar15;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    uVar12 = 0x4024000000000000;
    if (local_1e0 < 10.0) {
      puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_258 = uVar12;
      local_1e0 = dVar15;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_270 = 0x406e000000000000;
    local_278 = local_1e0 - local_1d8 * 2.0;
    local_648 = local_278;
    if (local_278 <= 240.0) {
      local_648 = 240.0;
    }
    local_280 = local_648;
    local_268 = local_648;
    local_288 = 6.0;
    local_290 = 0x404c000000000000;
    local_298 = 0x4042000000000000;
    local_170 = (local_648 - 6.0) / (double)(long)local_190;
    local_2c0 = (double)(long)local_170;
    local_2a8 = 0x4042000000000000;
    local_2b8 = 0x404c000000000000;
    local_650 = local_2c0;
    if (56.0 < local_2c0) {
      local_650 = 56.0;
    }
    local_2c8 = local_650;
    local_2b0 = local_650;
    if (local_650 <= 36.0) {
      local_658 = 36.0;
    }
    else {
      local_658 = local_650;
    }
    local_2d0 = local_658;
    local_2a0 = local_658;
    if (local_648 + 0.5 < (double)(long)local_190 * local_658 + 6.0) {
      local_2d8 = 0x4040000000000000;
      local_178 = (local_648 - 6.0) / (double)(long)local_190;
      local_2e0 = (double)(long)local_178;
      local_660 = local_2e0;
      if (local_2e0 <= 32.0) {
        local_660 = 32.0;
      }
      local_2e8 = local_660;
      local_2a0 = local_660;
    }
    local_2f0 = (double)(long)local_190 * local_2a0 + 6.0;
    local_2f8 = local_1d0 * (double)(long)local_1b0;
    local_308 = 0x4032000000000000;
    local_318 = 0x4036000000000000;
    local_320 = local_2a0 * DAT_02323f38;
    local_668 = local_320;
    if (22.0 < local_320) {
      local_668 = 22.0;
    }
    local_328 = local_668;
    local_310 = local_668;
    if (local_668 <= 18.0) {
      local_670 = 18.0;
    }
    else {
      local_670 = local_668;
    }
    local_330 = local_670;
    local_300 = local_670;
    local_338 = 0x4022000000000000;
    if (44.0 <= local_2a0) {
      local_338 = 0x4024000000000000;
    }
    _memset(alStack_68,0,0x40);
    _memset(auStack_380,0,0x40);
    IVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbar_026b1cd0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_6a8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_e8,0x10);
    if (local_6a8 != 0) {
      lVar7 = *local_370;
      local_6b0 = 0;
      do {
        do {
          if (*local_370 - lVar7 != 0) {
            _objc_enumerationMutation(*local_370 - lVar7,IVar4);
          }
          uVar8 = *(ulong *)(local_378 + local_6b0 * 8);
          puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
          local_340 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((((uVar8 & 1) != 0) &&
               (uVar8 = local_340,
               (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_tag_026cab98),
               local_388 = uVar8, 99 < (long)uVar8)) &&
              (local_390 = (long)(uVar8 - 100) / 0x14, -1 < local_390)) && (local_390 < 8)) {
            alStack_68[local_390] = alStack_68[local_390] + 1;
          }
          local_6b0 = local_6b0 + 1;
        } while (local_6b0 < local_6a8);
        local_6a8 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_e8,0x10
                  );
        local_6b0 = 0;
      } while (local_6a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _memset(auStack_3d8,0,0x40);
    IVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbar_026b1cd0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_6f8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d8,auStack_168,0x10);
    if (local_6f8 != 0) {
      lVar7 = *local_3c8;
      local_700 = 0;
      do {
        do {
          if (*local_3c8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_3c8 - lVar7,IVar4);
          }
          uVar8 = *(ulong *)(local_3d0 + local_700 * 8);
          puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
          local_398 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((uVar8 & 1) != 0) &&
             (uVar8 = local_398, (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_tag_026cab98)
             , local_3e0 = uVar8, 99 < (long)uVar8)) {
            local_3e8 = (long)(uVar8 - 100) / 0x14;
            local_3f0 = (long)(uVar8 - 100) % 0x14;
            local_3f8 = local_2a0;
            local_400 = (double)local_3f0 * local_2a0 + local_288 * 0.5;
            lVar9 = local_3e8;
            if (((-1 < local_3e8) &&
                ((lVar9 = local_3e8 + -8, local_3e8 < 8 &&
                 (lVar9 = alStack_68[local_3e8], 0 < lVar9)))) &&
               (lVar9 = alStack_68[local_3e8] - local_190, alStack_68[local_3e8] < (long)local_190))
            {
              local_408 = local_2a0;
              if (alStack_68[local_3e8] < 3) {
                local_410 = 0x4058000000000000;
                local_420 = local_2a0;
                local_428 = 0x4053000000000000;
                if (76.0 <= local_2a0) {
                  local_728 = local_2a0;
                }
                else {
                  local_728 = 76.0;
                }
                local_430 = local_728;
                local_418 = local_728;
                if (local_728 <= 96.0) {
                  local_730 = local_728;
                }
                else {
                  local_730 = 96.0;
                }
                local_438 = local_730;
                local_408 = local_730;
              }
              local_440 = 16.0;
              if (alStack_68[local_3e8] < 2) {
                local_440 = 0.0;
              }
              lVar9 = alStack_68[local_3e8] + -1;
              local_448 = local_440 * (double)lVar9 + (double)alStack_68[local_3e8] * local_408;
              local_3f8 = local_408;
              local_450 = 0;
              local_458 = (local_2f0 - local_448) * 0.5;
              local_738 = local_458;
              if (local_458 <= 0.0) {
                local_738 = 0.0;
              }
              local_460 = local_738;
              local_400 = local_738 + (local_408 + local_440) * (double)local_3f0;
            }
            dVar13 = (double)local_3e8 * local_1d0;
            dVar15 = local_400;
            dVar14 = local_3f8;
            dVar11 = local_1d0;
            FUN_0163f5dc(lVar9);
            local_4a0 = dVar15;
            dStack_498 = dVar13;
            local_490 = dVar14;
            dStack_488 = dVar11;
            local_480 = dVar15;
            dStack_478 = dVar13;
            local_470 = dVar14;
            dStack_468 = dVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar15,dVar13,dVar14,dVar11,local_398,PTR_s_setFrame__026ca960);
            uVar8 = local_398;
            (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_viewWithTag__026cabe0,0x321);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_398;
            local_4a8 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_viewWithTag__026cabe0,0x322);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = local_4a8;
            puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            local_4b0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
            if ((uVar8 & 1) != 0) {
              dVar11 = (local_3f8 - local_300) * 0.5;
              uVar12 = 0x4018000000000000;
              dVar15 = local_300;
              dVar14 = local_300;
              FUN_0163f5dc();
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar11,uVar12,dVar15,dVar14,local_4a8,PTR_s_setFrame__026ca960);
            }
            uVar8 = local_4b0;
            puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
            if ((uVar8 & 1) != 0) {
              dVar15 = local_3f8 - 4.0;
              uVar12 = 0x4000000000000000;
              uVar10 = 0x403e000000000000;
              uVar16 = 0x4030000000000000;
              FUN_0163f5dc();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar12,uVar10,dVar15,uVar16,local_4b0,PTR_s_setFrame__026ca960);
              puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_338,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
                         PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_setFont__026ca958);
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            _objc_storeStrong(&local_4b0);
            _objc_storeStrong(&local_4a8,0);
          }
          local_700 = local_700 + 1;
        } while (local_700 < local_6f8);
        local_6f8 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d8,auStack_168,
                   0x10);
        local_700 = 0;
      } while (local_6f8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar10 = 0;
    uVar12 = 0;
    dVar15 = local_2f0;
    dVar14 = local_2f8;
    FUN_0163f5dc();
    IVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbar_026b1cd0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar12,uVar10,dVar15,dVar14);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    dVar15 = local_2f0;
    dVar14 = local_2f8;
    FUN_0163f628();
    IVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar15,dVar14);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (1.0 <= local_2f0) {
      local_778 = local_2f0;
    }
    else {
      local_778 = 1.0;
    }
    uVar10 = 0;
    uVar12 = 0;
    dVar15 = local_2f8;
    FUN_0163f5dc();
    IVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_toolbarBlur_026b1cc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar12,uVar10,local_778,dVar15);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_refreshEffectToggleUI_026b1dd8);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

