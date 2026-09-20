// FUN_001cc268 @ 001cc268

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001cc268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  double dVar15;
  undefined8 uVar16;
  ulong local_9b8;
  ulong local_9b0;
  ulong local_970;
  ulong local_968;
  ulong local_930;
  ulong local_928;
  undefined *local_8f8;
  undefined *local_8e8;
  undefined *local_8d0;
  undefined *local_8c0;
  undefined *local_898;
  undefined *local_788;
  ulong local_658;
  ulong local_650;
  ulong local_5d8;
  undefined1 auStack_5d0 [8];
  long local_5c8;
  long *local_5c0;
  ulong local_590;
  undefined1 auStack_588 [8];
  long local_580;
  long *local_578;
  ulong local_548;
  undefined1 auStack_540 [8];
  long local_538;
  long *local_530;
  ulong local_500;
  char *local_4f8;
  byte local_4e9;
  undefined *local_4e8;
  byte local_4d9;
  undefined *local_4d8;
  undefined *local_4d0;
  byte local_4c1;
  undefined *local_4c0;
  byte local_4b1;
  undefined *local_4b0;
  undefined *local_4a8;
  byte local_49a;
  byte local_499;
  undefined *local_498;
  byte local_489;
  undefined *local_488;
  undefined *local_480;
  undefined1 local_471;
  double local_450;
  undefined *local_430;
  byte local_421;
  undefined *local_420;
  byte local_411;
  undefined *local_410;
  undefined *local_408;
  undefined1 local_3f9;
  double local_3f8;
  double local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined *local_3a8;
  double local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  ulong local_380;
  double local_378;
  undefined1 auStack_370 [8];
  long local_368;
  long *local_360;
  ulong local_330;
  ulong local_328;
  undefined1 auStack_320 [48];
  undefined1 auStack_2f0 [52];
  undefined4 local_2bc;
  undefined1 auStack_2b8 [48];
  undefined1 auStack_288 [49];
  byte local_257;
  byte local_256;
  byte local_255;
  byte local_241;
  undefined *local_240;
  undefined8 local_238;
  ulong local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_238 = param_6;
  local_230 = param_5;
  (*DAT_028c8ed8)(param_5,param_6);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_240 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_plusMenuCornerEnabled_026a08d0);
  local_241 = (byte)puVar2;
  puVar2 = local_240;
  (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuBgColorEnabled_026a08d8);
  local_255 = (byte)puVar2;
  puVar2 = local_240;
  (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuTextColorEnabled_026a08e0);
  local_256 = (byte)puVar2;
  puVar2 = local_240;
  (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuIconColorEnabled_026a08e8);
  local_257 = (byte)puVar2;
  if (((((local_241 & 1) == 0) && ((local_255 & 1) == 0)) && ((local_256 & 1) == 0)) &&
     (((ulong)puVar2 & 1) == 0)) {
    _memcpy(auStack_288,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar3 = local_230;
    _memcpy(auStack_2b8,auStack_288,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_2b8);
    local_2bc = 1;
  }
  else {
    uVar16 = 0xc014000000000000;
    _CGAffineTransformMakeTranslation(0);
    uVar3 = local_230;
    _memcpy(auStack_320,auStack_2f0,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_320);
    local_328 = 0;
    _memset(auStack_370,0,0x40);
    uVar3 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_650 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_650 != 0) {
      lVar9 = *local_360;
      local_658 = 0;
      do {
        do {
          if (*local_360 - lVar9 != 0) {
            _objc_enumerationMutation(*local_360 - lVar9,uVar3);
          }
          uVar10 = *(ulong *)(local_368 + local_658 * 8);
          puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_330 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar10 & 1) != 0) {
            _objc_storeStrong(&local_328,local_330);
            local_2bc = 2;
            goto LAB_001cc664;
          }
          local_658 = local_658 + 1;
        } while (local_658 < local_650);
        local_650 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_a8,0x10
                  );
        local_658 = 0;
      } while (local_650 != 0);
    }
    local_2bc = 0;
LAB_001cc664:
    (*(code *)PTR__objc_release_02578630)();
    uVar1 = (uint)uVar3;
    if (local_328 != 0) {
      FUN_00222894(local_328);
      if ((local_241 & 1) == 0) {
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)();
        uVar1 = (uint)puVar2;
      }
      else {
        puVar2 = local_240;
        (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuCornerRadius_026a08f0);
        dVar15 = (double)(long)puVar2;
        uVar3 = local_328;
        local_378 = dVar15;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_bounds_026ca548);
        local_3a0 = dVar15;
        local_398 = uVar16;
        local_390 = param_3;
        local_388 = param_4;
        FUN_00222db4();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
        local_380 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        local_3a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_bounds_026ca548);
        local_3c8 = dVar15;
        uStack_3c0 = uVar16;
        local_3b8 = param_3;
        uStack_3b0 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(dVar15,local_3a8,PTR_s_setFrame__026ca960);
        uVar3 = local_380;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_CGPath_026ca478);
        (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_setPath__026caa08,uVar3);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        dVar15 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
        uVar3 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_240;
        (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuBorderSize_026a08f8);
        uVar1 = (uint)puVar2;
        local_3f8 = dVar15;
        if (0.0 < dVar15) {
          FUN_001d6008();
          local_3f9 = (undefined1)uVar1;
          local_411 = 0;
          local_421 = 0;
          local_788 = local_240;
          if ((uVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuBorderColorLight_026a0908)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_421 = 1;
            local_420 = local_788;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuBorderColorDark_026a0900);
            _objc_retainAutoreleasedReturnValue();
            local_411 = 1;
            local_410 = local_788;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_408 = local_788;
          if ((local_421 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_420);
          }
          if ((local_411 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_410);
          }
          puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          local_430 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setName__0269e0c8,DAT_0257ac50);
          (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_bounds_026ca548);
          local_450 = dVar15;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar15,uVar16,param_3,param_4,local_430,PTR_s_setFrame__026ca960);
          uVar3 = local_380;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_CGPath_026ca478);
          (*(code *)PTR__objc_msgSend_02578628)(local_430,PTR_s_setPath__026caa08,uVar3);
          puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
          (*(code *)PTR__objc_msgSend_02578628)(local_430,PTR_s_setFillColor__026ca948,puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_408;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
          (*(code *)PTR__objc_msgSend_02578628)(local_430,PTR_s_setStrokeColor__026caa78,puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_3f8,local_430,PTR_s_setLineWidth__026ca9b0);
          uVar3 = local_328;
          (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          _objc_storeStrong(&local_430);
          _objc_storeStrong(&local_408,0);
        }
        _objc_storeStrong(&local_3a8);
        puVar5 = &local_380;
        _objc_storeStrong(puVar5,0);
        uVar1 = (uint)puVar5;
      }
      if ((local_255 & 1) != 0) {
        FUN_001d6008();
        local_471 = (undefined1)uVar1;
        local_489 = 0;
        local_499 = 0;
        local_898 = local_240;
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuBgColorLight_026a0918);
          _objc_retainAutoreleasedReturnValue();
          local_499 = 1;
          local_498 = local_898;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuBgColorDark_026a0910);
          _objc_retainAutoreleasedReturnValue();
          local_489 = 1;
          local_488 = local_898;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_480 = local_898;
        if ((local_499 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_498);
        }
        if ((local_489 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_488);
        }
        if (local_480 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_328,PTR_s_setBackgroundColor__026ca888,local_480);
          (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_setImage__026ca978,0);
        }
        ppuVar6 = &local_480;
        _objc_storeStrong(ppuVar6,0);
        uVar1 = (uint)ppuVar6;
      }
    }
    if ((((local_256 & 1) != 0) || ((local_257 & 1) != 0)) && (local_328 != 0)) {
      FUN_001d6008();
      local_49a = (byte)uVar1;
      local_4b1 = 0;
      local_4c1 = 0;
      if ((local_256 & 1) == 0) {
        local_8d0 = (undefined *)0x0;
      }
      else {
        local_8c0 = local_240;
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuTextColorLight_026a0928);
          _objc_retainAutoreleasedReturnValue();
          local_4c1 = 1;
          local_4c0 = local_8c0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuTextColorDark_026a0920);
          _objc_retainAutoreleasedReturnValue();
          local_4b1 = 1;
          local_4b0 = local_8c0;
        }
        local_8d0 = local_8c0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_4a8 = local_8d0;
      if ((local_4c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_4c0);
      }
      if ((local_4b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_4b0);
      }
      local_4d9 = 0;
      local_4e9 = 0;
      if ((local_257 & 1) == 0) {
        local_8f8 = (undefined *)0x0;
      }
      else {
        local_8e8 = local_240;
        if ((local_49a & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuIconColorLight_026a0938);
          _objc_retainAutoreleasedReturnValue();
          local_4e9 = 1;
          local_4e8 = local_8e8;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_plusMenuIconColorDark_026a0930);
          _objc_retainAutoreleasedReturnValue();
          local_4d9 = 1;
          local_4d8 = local_8e8;
        }
        local_8f8 = local_8e8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_4d0 = local_8f8;
      if ((local_4e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_4e8);
      }
      if ((local_4d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_4d8);
      }
      pcVar7 = "RightTopMenuItemBtn";
      _objc_getClass();
      local_4f8 = pcVar7;
      _memset(auStack_540,0,0x40);
      uVar3 = local_328;
      (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_928 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_928 != 0) {
        lVar9 = *local_530;
        local_930 = 0;
        do {
          do {
            if (*local_530 - lVar9 != 0) {
              _objc_enumerationMutation(*local_530 - lVar9,uVar3);
            }
            local_500 = *(ulong *)(local_538 + local_930 * 8);
            _memset(auStack_588,0,0x40);
            uVar10 = local_500;
            (*(code *)PTR__objc_msgSend_02578628)(local_500,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_968 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_968 != 0) {
              lVar11 = *local_578;
              local_970 = 0;
              do {
                do {
                  if (*local_578 - lVar11 != 0) {
                    _objc_enumerationMutation(*local_578 - lVar11,uVar10);
                  }
                  uVar12 = *(ulong *)(local_580 + local_970 * 8);
                  local_548 = uVar12;
                  if ((local_4f8 != (char *)0x0) &&
                     ((*(code *)PTR__objc_msgSend_02578628)
                                (uVar12,PTR_s_isKindOfClass__0269cd68,local_4f8), (uVar12 & 1) != 0)
                     ) {
                    _memset(auStack_5d0,0,0x40);
                    uVar12 = local_548;
                    (*(code *)PTR__objc_msgSend_02578628)(local_548,PTR_s_subviews_026cab40);
                    _objc_retainAutoreleasedReturnValue();
                    local_9b0 = uVar12;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    if (local_9b0 != 0) {
                      lVar13 = *local_5c0;
                      local_9b8 = 0;
                      do {
                        do {
                          if (*local_5c0 - lVar13 != 0) {
                            _objc_enumerationMutation(*local_5c0 - lVar13,uVar12);
                          }
                          uVar14 = *(ulong *)(local_5c8 + local_9b8 * 8);
                          local_590 = uVar14;
                          if (local_4a8 != (undefined *)0x0) {
                            puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar14,PTR_s_isKindOfClass__0269cd68,puVar2);
                            if ((uVar14 & 1) != 0) {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_590,PTR_s_setTextColor__026caa98,local_4a8);
                            }
                          }
                          uVar14 = local_590;
                          if (local_4d0 != (undefined *)0x0) {
                            puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar14,PTR_s_isKindOfClass__0269cd68,puVar2);
                            uVar8 = local_590;
                            if ((uVar14 & 1) != 0) {
                              (*(code *)PTR__objc_retain_02578638)();
                              local_5d8 = uVar8;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (uVar8,PTR_s_setTintColor__026caab0,local_4d0);
                              uVar14 = local_5d8;
                              (*(code *)PTR__objc_msgSend_02578628)(local_5d8,PTR_s_image_026ca678);
                              _objc_retainAutoreleasedReturnValue();
                              (*(code *)PTR__objc_release_02578630)();
                              if (uVar14 != 0) {
                                uVar14 = local_5d8;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_5d8,PTR_s_image_026ca678);
                                _objc_retainAutoreleasedReturnValue();
                                uVar8 = uVar14;
                                (*(code *)PTR__objc_msgSend_02578628)();
                                _objc_retainAutoreleasedReturnValue();
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_5d8,PTR_s_setImage__026ca978);
                                (*(code *)PTR__objc_release_02578630)(uVar8);
                                (*(code *)PTR__objc_release_02578630)(uVar14);
                              }
                              _objc_storeStrong(&local_5d8,0);
                            }
                          }
                          local_9b8 = local_9b8 + 1;
                        } while (local_9b8 < local_9b0);
                        local_9b0 = uVar12;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_5d0,auStack_228,0x10);
                        local_9b8 = 0;
                      } while (local_9b0 != 0);
                    }
                    (*(code *)PTR__objc_release_02578630)(uVar12);
                  }
                  local_970 = local_970 + 1;
                } while (local_970 < local_968);
                local_968 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_588,
                           auStack_1a8,0x10);
                local_970 = 0;
              } while (local_968 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar10);
            local_930 = local_930 + 1;
          } while (local_930 < local_928);
          local_928 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_540,auStack_128,
                     0x10);
          local_930 = 0;
        } while (local_928 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_4d0);
      _objc_storeStrong(&local_4a8,0);
    }
    _objc_storeStrong(&local_328,0);
    local_2bc = 0;
  }
  _objc_storeStrong(&local_240,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

