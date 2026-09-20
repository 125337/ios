// FUN_0154f2fc @ 0154f2fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_0154f2fc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,byte param_7)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double local_878;
  ulong local_858;
  ulong local_850;
  ulong local_810;
  ulong local_808;
  undefined1 *local_7b8;
  cfstringStruct *local_778;
  cfstringStruct *local_768;
  double local_748;
  cfstringStruct *local_738;
  long local_6e8;
  long local_690;
  long local_678;
  cfstringStruct *local_650;
  ulong local_608;
  ulong local_600;
  undefined1 auStack_580 [8];
  long local_578;
  long *local_570;
  undefined8 local_540;
  ulong local_538;
  undefined1 auStack_530 [8];
  long local_528;
  long *local_520;
  ulong local_4f0;
  double local_4e8;
  double local_4e0;
  byte local_4c1;
  undefined1 *local_4c0;
  byte local_4b1;
  undefined1 *local_4b0;
  undefined8 local_4a8;
  undefined *local_488;
  byte local_479;
  cfstringStruct *local_478;
  byte local_469;
  cfstringStruct *local_468;
  byte local_459;
  cfstringStruct *local_458;
  byte local_449;
  cfstringStruct *local_448;
  undefined8 local_420;
  double dStack_418;
  double local_410;
  undefined8 uStack_408;
  undefined *local_400;
  double local_3f8;
  double local_3f0;
  undefined8 local_3e8;
  double local_3e0;
  undefined8 local_3d8;
  double local_3d0;
  double local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  double local_3b0;
  undefined8 local_3a8;
  undefined *local_3a0;
  undefined8 local_398;
  long local_390;
  double local_388;
  undefined8 local_380;
  undefined *local_378;
  long local_370;
  cfstringStruct *local_368 [6];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined *local_318;
  double local_310;
  double local_308;
  double local_300;
  long local_2f8;
  undefined4 local_2ec;
  long local_2e8;
  double local_2e0;
  long local_2d8;
  long local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  cfstringStruct *local_2a0;
  long local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  long local_270;
  undefined1 *local_268;
  byte local_25c;
  byte local_25b;
  byte local_25a;
  byte local_259;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  double local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  double local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined4 local_1c8;
  byte local_1c1;
  cfstringStruct *local_1c0;
  ulong local_1b8;
  double local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_5);
  local_1c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1c0,param_6);
  local_1c1 = param_7;
  if ((local_1b8 == 0) || (local_1c0 == (cfstringStruct *)0x0)) {
    local_1b0 = 0.0;
    local_1c8 = 1;
  }
  else {
    _memset(auStack_210,0,0x40);
    uVar5 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_600 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10);
    if (local_600 != 0) {
      lVar8 = *local_200;
      local_608 = 0;
      do {
        do {
          if (*local_200 - lVar8 != 0) {
            _objc_enumerationMutation(*local_200 - lVar8,uVar1);
          }
          local_1d0 = *(undefined8 *)(local_208 + local_608 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_removeFromSuperview_026ca800);
          local_608 = local_608 + 1;
        } while (local_608 < local_600);
        local_600 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10
                  );
        local_608 = 0;
      } while (local_600 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_setAssociatedObject(local_1b8,DAT_028c5df8,local_1c0);
    uVar5 = local_1b8;
    uVar10 = DAT_028c5e10;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_1c1 & 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar5,uVar10,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_015483b8(local_1b8);
    FUN_0156ac38(local_1b8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_bounds_026ca548);
    local_238 = param_1;
    local_230 = param_2;
    local_228 = param_3;
    local_220 = param_4;
    _CGRectGetWidth(param_1,param_2,param_3);
    local_218 = param_1;
    if (0.0 < param_1) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_240 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_chatAvatarProfileCardFunctionPag_026b0570);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_1c0;
      local_248 = puVar2;
      FUN_01583530();
      _objc_retainAutoreleasedReturnValue();
      local_250 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_primary);
      _objc_retainAutoreleasedReturnValue();
      local_650 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_650 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_258 = local_650;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_250;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_showsMessage);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      uVar5 = (ulong)pcVar4 & 0xffffffff;
      local_259 = (byte)pcVar4;
      FUN_01545618();
      local_25a = uVar5 == 2;
      puVar6 = local_240;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_240,PTR_s_chatAvatarProfileCardMessageActi_026b0548);
      local_25b = (byte)puVar6;
      if (((ulong)puVar6 & 1) != 0) {
        local_259 = 0;
      }
      local_25c = local_25a & 1;
      FUN_01584398();
      puVar6 = local_240;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_240,PTR_s_chatAvatarProfileCardIncompleteR_026b0990);
      local_270 = 4;
      local_278 = 8.0;
      local_280 = 52.0;
      if ((local_25c & 1) == 0) {
        local_280 = 40.0;
      }
      dVar11 = 4.0;
      local_288 = (double)(long)((local_218 - 24.0) / 4.0);
      local_290 = 0.0;
      local_268 = puVar6;
      for (local_298 = 0; lVar8 = local_298, pcVar3 = local_258,
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_count_0269cfe0),
          lVar8 < (long)pcVar3; local_298 = local_298 + 1) {
        pcVar3 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_258,PTR_s_objectAtIndexedSubscript__0269cc78,local_298);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = 0;
        if (local_270 != 0) {
          local_2a8 = local_298 / local_270;
        }
        lVar8 = 0;
        if (local_270 != 0) {
          lVar8 = local_298 / local_270;
        }
        local_2b0 = local_298 - lVar8 * local_270;
        local_2b8 = local_2a8 * local_270;
        local_2c8 = local_270;
        pcVar4 = local_258;
        local_2a0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_count_0269cfe0);
        local_2d0 = (long)pcVar4 - local_2b8;
        local_678 = local_2d0;
        if (local_2c8 < local_2d0) {
          local_678 = local_2c8;
        }
        local_2d8 = local_678;
        local_2c0 = local_678;
        local_2e8 = local_678 + -1;
        local_2ec = 0;
        local_690 = local_2e8;
        if (local_2e8 < 0) {
          local_690 = 0;
        }
        local_2f8 = local_690;
        local_2e0 = (double)local_690 * local_278 + local_288 * (double)local_678;
        local_300 = 0.0;
        if (local_678 < local_270) {
          if (local_268 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
            local_300 = (double)(long)((local_218 - local_2e0) * 0.5);
          }
          else if (local_268 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
            local_300 = local_218 - local_2e0;
          }
        }
        local_308 = local_300 + (local_288 + local_278) * (double)local_2b0;
        local_310 = (double)local_2a8 * (local_280 + local_278);
        puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
        _objc_retainAutoreleasedReturnValue();
        dVar11 = local_308;
        dVar14 = local_310;
        dVar13 = local_288;
        dVar15 = local_280;
        local_318 = puVar2;
        FUN_0152a0a0();
        local_338 = dVar11;
        dStack_330 = dVar14;
        local_328 = dVar13;
        dStack_320 = dVar15;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar11,dVar14,dVar13,dVar15,local_318,PTR_s_setFrame__026ca960);
        puVar2 = local_318;
        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4030000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_318;
        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_setClipsToBounds__026ca8c8,1);
        pcVar3 = local_1c0;
        FUN_01585184(local_1c0,local_2a0,local_1b8,local_1c1 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_368[0] = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_backgroundColor);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_368[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_368[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_borderColor);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_CGColor_026ca470);
        puVar2 = local_318;
        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        _objc_setAssociatedObject(local_318,DAT_028c5df8,local_1c0,1);
        _objc_setAssociatedObject(local_318,DAT_028c5ec8,local_2a0,3);
        _objc_setAssociatedObject(local_318,DAT_028c5ed0,local_1b8,0);
        puVar2 = local_318;
        puVar7 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTopBarProfileCardPresenter_026ce228,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_addTarget_action_forControlEvent_026ca4c8,puVar7,
                   PTR_s_wcr_handleProfileCardActionButto_026b0558,0x40);
        if ((local_25c & 1) == 0) {
          local_6e8 = (long)((local_280 - 18.0) * 0.5);
        }
        else {
          local_6e8 = 0x4020000000000000;
        }
        local_370 = local_6e8;
        puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc();
        dVar14 = local_288 - 12.0;
        uVar10 = 0x4018000000000000;
        uVar16 = 0x4032000000000000;
        lVar8 = local_370;
        FUN_0152a0a0();
        local_398 = uVar10;
        local_390 = lVar8;
        local_388 = dVar14;
        local_380 = uVar16;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,lVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
        local_378 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTextAlignment__026caa90,1);
        uVar10 = *(undefined8 *)PTR__UIFontWeightSemibold_02578160;
        puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_setFont__026ca958);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        pcVar3 = local_368[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_368[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_titleColor);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_setTextColor__026caa98);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_378,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe6666666666666,local_378,PTR_s_setMinimumScaleFactor__026ca9d0);
        pcVar3 = local_2a0;
        FUN_01587154(local_2a0,local_248);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_setText__026caa88);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_addSubview__026ca4c0,local_378);
        if ((local_25c & 1) != 0) {
          puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          _objc_alloc();
          dVar14 = local_288 - 12.0;
          uVar10 = 0x4018000000000000;
          uVar12 = 0x403c000000000000;
          uVar16 = 0x402c000000000000;
          FUN_0152a0a0();
          local_3c0 = uVar10;
          local_3b8 = uVar12;
          local_3b0 = dVar14;
          local_3a8 = uVar16;
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,uVar12,puVar2,PTR_s_initWithFrame__026ca6e8);
          local_3a0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTextAlignment__026caa90,1);
          uVar10 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
          puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4023000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_systemFontOfSize_weight__026cab60);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_setFont__026ca958);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          pcVar3 = local_368[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_368[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_statusColor);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_setTextColor__026caa98);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3a0,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3fe8000000000000,local_3a0,PTR_s_setMinimumScaleFactor__026ca9d0);
          pcVar3 = local_368[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_368[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_status);
          _objc_retainAutoreleasedReturnValue();
          local_738 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_738 = &cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_setText__026caa88,local_738);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_addSubview__026ca4c0,local_3a0);
          _objc_storeStrong(&local_3a0,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addSubview__026ca4c0,local_318);
        local_3c8 = local_290;
        dVar11 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_frame_026ca640);
        local_3f0 = dVar11;
        local_3e8 = uVar10;
        local_3e0 = dVar14;
        local_3d8 = uVar16;
        _CGRectGetMaxY(dVar11,uVar10);
        local_748 = dVar11;
        if (dVar11 <= local_3c8) {
          local_748 = local_3c8;
        }
        local_3f8 = local_748;
        local_290 = local_748;
        local_3d0 = dVar11;
        _objc_storeStrong(&local_378);
        _objc_storeStrong(local_368,0);
        _objc_storeStrong(&local_318,0);
        _objc_storeStrong(&local_2a0,0);
      }
      if ((local_259 & 1) != 0) {
        pcVar3 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_count_0269cfe0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          local_290 = local_290 + 10.0;
        }
        puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = 0;
        uVar16 = 0x4047000000000000;
        dVar11 = local_290;
        dVar14 = local_218;
        local_400 = puVar2;
        FUN_0152a0a0();
        local_420 = uVar10;
        dStack_418 = dVar11;
        local_410 = dVar14;
        uStack_408 = uVar16;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,local_400,PTR_s_setFrame__026ca960);
        puVar2 = local_400;
        (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4030000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_setClipsToBounds__026ca8c8,1);
        local_449 = 0;
        local_459 = 0;
        if ((local_1c1 & 1) == 0) {
          local_768 = &cf__5A95FF;
          FUN_01551c04(DAT_02323f10);
          _objc_retainAutoreleasedReturnValue();
          local_459 = 1;
          local_458 = local_768;
        }
        else {
          local_768 = &cf__4C8DFF;
          FUN_01551c04(DAT_02323e88);
          _objc_retainAutoreleasedReturnValue();
          local_449 = 1;
          local_448 = local_768;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_400,PTR_s_setBackgroundColor__026ca888,local_768);
        if ((local_459 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_458);
        }
        if ((local_449 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_448);
        }
        puVar2 = local_400;
        (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_469 = 0;
        local_479 = 0;
        if ((local_1c1 & 1) == 0) {
          local_778 = &cf__5A95FF;
          uVar10 = DAT_02323ec8;
          FUN_01551c04();
          _objc_retainAutoreleasedReturnValue();
          local_479 = 1;
          local_478 = local_778;
        }
        else {
          local_778 = &cf__6EA2FF;
          uVar10 = DAT_02323e80;
          FUN_01551c04();
          _objc_retainAutoreleasedReturnValue();
          local_469 = 1;
          local_468 = local_778;
        }
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_778,PTR_s_CGColor_026ca470);
        puVar2 = local_400;
        (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if ((local_479 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_478);
        }
        if ((local_469 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_468);
        }
        _objc_setAssociatedObject(local_400,DAT_028c5df8,local_1c0);
        _objc_setAssociatedObject(local_400,DAT_028c5ec8,_WCRefineProfileCardActionIDMessage,3);
        _objc_setAssociatedObject(local_400,DAT_028c5ed0,local_1b8,0);
        puVar2 = local_400;
        puVar7 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTopBarProfileCardPresenter_026ce228,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_addTarget_action_forControlEvent_026ca4c8,puVar7,
                   PTR_s_wcr_handleProfileCardActionButto_026b0558,0x40);
        puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_bounds_026ca548);
        local_4a8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,dVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
        local_488 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTextAlignment__026caa90,1);
        dVar11 = *(double *)PTR__UIFontWeightSemibold_02578160;
        dVar14 = 16.0;
        puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_488,PTR_s_setFont__026ca958);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_4b1 = 0;
        local_4c1 = 0;
        local_7b8 = local_240;
        if ((local_1c1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_240,PTR_s_chatAvatarProfileCardButtonTitle_026b0568);
          _objc_retainAutoreleasedReturnValue();
          local_4c1 = 1;
          local_4c0 = local_7b8;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_240,PTR_s_chatAvatarProfileCardButtonTitle_026b0560);
          _objc_retainAutoreleasedReturnValue();
          local_4b1 = 1;
          local_4b0 = local_7b8;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_488,PTR_s_setTextColor__026caa98,local_7b8);
        if ((local_4c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_4c0);
        }
        if ((local_4b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_4b0);
        }
        puVar2 = PTR_WCRefineProfileCardActionCatalog_026ced78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineProfileCardActionCatalog_026ced78,
                   PTR_s_displayTitleForActionID_customTi_026b0578,
                   _WCRefineProfileCardActionIDMessage,local_248);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_488,PTR_s_setText__026caa88);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_addSubview__026ca4c0,local_488);
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addSubview__026ca4c0,local_400);
        (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_frame_026ca640);
        local_4e8 = dVar14;
        local_4e0 = dVar11;
        _CGRectGetMaxY();
        local_290 = dVar14;
        _objc_storeStrong(&local_488);
        _objc_storeStrong(&local_400,0);
      }
      if ((local_25b & 1) != 0) {
        _memset(auStack_530,0,0x40);
        uVar5 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_808 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_530,auStack_128,
                   0x10);
        if (local_808 != 0) {
          lVar8 = *local_520;
          local_810 = 0;
          do {
            do {
              if (*local_520 - lVar8 != 0) {
                _objc_enumerationMutation(*local_520 - lVar8,uVar1);
              }
              uVar9 = *(ulong *)(local_528 + local_810 * 8);
              local_4f0 = uVar9;
              _objc_getAssociatedObject(uVar9,DAT_028c5ec8);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar9;
              FUN_01528c84();
              _objc_retainAutoreleasedReturnValue();
              local_538 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar9);
              uVar5 = local_538;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_538,PTR_s_isEqualToString__0269ccc8,
                         _WCRefineProfileCardActionIDMessage);
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_4f0,PTR_s_removeFromSuperview_026ca800);
              }
              _objc_storeStrong(&local_538,0);
              local_810 = local_810 + 1;
            } while (local_810 < local_808);
            local_808 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_530,auStack_128
                       ,0x10);
            local_810 = 0;
          } while (local_808 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_290 = 0.0;
        _memset(auStack_580,0,0x40);
        uVar5 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_850 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_850 != 0) {
          lVar8 = *local_570;
          local_858 = 0;
          do {
            do {
              dVar14 = dVar11;
              if (*local_570 - lVar8 != 0) {
                _objc_enumerationMutation(*local_570 - lVar8,uVar5);
                dVar14 = dVar11;
              }
              dVar13 = local_290;
              local_540 = *(undefined8 *)(local_578 + local_858 * 8);
              dVar11 = local_290;
              (*(code *)PTR__objc_msgSend_02578628)(local_540,PTR_s_frame_026ca640);
              _CGRectGetMaxY(dVar11,dVar14);
              local_878 = dVar11;
              if (dVar11 <= dVar13) {
                local_878 = dVar13;
              }
              local_290 = local_878;
              local_858 = local_858 + 1;
            } while (local_858 < local_850);
            local_850 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_580,auStack_1a8
                       ,0x10);
            local_858 = 0;
          } while (local_850 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar5 = local_1b8;
      uVar10 = DAT_028c5e78;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,uVar10,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar5 = local_1b8;
      uVar10 = DAT_028c5fa0;
      pcVar3 = local_1c0;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,uVar10,pcVar3,3);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_1b0 = local_290;
      local_1c8 = 1;
      _objc_storeStrong(&local_258);
      _objc_storeStrong(&local_250,0);
      _objc_storeStrong(&local_248,0);
      _objc_storeStrong(&local_240,0);
    }
    else {
      local_1b0 = 0.0;
      local_1c8 = 1;
    }
  }
  _objc_storeStrong(&local_1c0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_1b0;
}

