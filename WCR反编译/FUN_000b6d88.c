// FUN_000b6d88 @ 000b6d88

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000b6d88(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double local_7a0;
  double local_798;
  double local_768;
  double local_750;
  double local_748;
  double local_718;
  double local_708;
  cfstringStruct *local_6b0;
  undefined *local_680;
  undefined *local_678;
  double local_650;
  double local_620;
  undefined *local_5b8;
  undefined4 local_5b0;
  undefined4 local_5ac;
  code *local_5a8;
  undefined *local_5a0;
  undefined *local_598;
  undefined *local_590;
  undefined1 auStack_588 [48];
  undefined1 auStack_558 [48];
  undefined *local_528;
  undefined4 local_520;
  undefined4 local_51c;
  code *local_518;
  undefined *local_510;
  undefined *local_508;
  undefined *local_500;
  undefined *local_4f8;
  double local_4f0;
  double local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined *local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  double local_4b8;
  double local_4b0;
  undefined *local_4a8 [3];
  double local_490;
  double dStack_488;
  undefined *local_460 [5];
  undefined *local_438 [6];
  undefined8 local_408;
  double local_3f8;
  double dStack_3f0;
  undefined *local_3e8;
  undefined *local_3e0 [3];
  double local_3c8;
  double local_3c0;
  undefined *local_3b8 [3];
  double local_3a0;
  double local_398;
  undefined8 local_380;
  undefined8 uStack_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  undefined *local_350;
  double local_348;
  undefined8 local_340;
  undefined8 local_330;
  undefined *local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  undefined8 local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  undefined8 local_228;
  undefined8 local_220;
  double local_218;
  double local_210;
  double local_208;
  undefined8 local_200;
  double local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 uStack_1d8;
  double local_1d0;
  undefined8 uStack_1c8;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  cfstringStruct *local_178;
  double local_170;
  undefined *local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_108;
  double local_100;
  ulong local_f8;
  undefined4 local_f0;
  undefined *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar1 = DAT_02323d48;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_1;
  dStack_c0 = param_2;
  _objc_storeStrong(&local_d0,param_3);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_4);
  puVar4 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
             PTR_s_configuredActionMenuEntries_0269e540);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    local_f0 = 1;
  }
  else {
    uVar5 = local_d8;
    FUN_000b6300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIWindow_026cdf68;
    local_f8 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) == 0) {
      local_f0 = 1;
    }
    else {
      FUN_000b6cfc(local_d0,0);
      dVar11 = local_c8;
      dVar10 = dStack_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_convertPoint_toView__0269e548,local_f8);
      local_130 = 0x405e000000000000;
      local_138 = dVar10 - 18.0;
      local_620 = local_138;
      if (local_138 <= 120.0) {
        local_620 = 120.0;
      }
      local_140 = local_620;
      local_128 = local_620;
      local_148 = 40.0;
      puVar4 = local_e0;
      local_108 = dVar11;
      local_100 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
      dVar11 = local_148;
      if ((puVar4 != (undefined *)0x0) &&
         (puVar4 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
         dVar10 = local_128, local_128 < dVar11 * (double)puVar4)) {
        local_150 = 30.0;
        puVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
        local_158 = (double)(long)(dVar10 / (double)puVar4);
        local_650 = local_158;
        if (local_158 <= local_150) {
          local_650 = local_150;
        }
        local_160 = local_650;
        local_148 = local_650;
      }
      uVar13 = 0x4041000000000000;
      uVar9 = 0x402c000000000000;
      if (34.0 <= local_148) {
        uVar9 = 0x402e000000000000;
      }
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      dVar11 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      local_170 = 0.0;
      local_168 = puVar4;
      _memset(auStack_1b8,0,0x40);
      puVar4 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_678 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10)
      ;
      if (local_678 != (undefined *)0x0) {
        lVar7 = *local_1a8;
        local_680 = (undefined *)0x0;
        do {
          do {
            dVar10 = dVar11;
            uVar9 = uVar13;
            if (*local_1a8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1a8 - lVar7,puVar4);
              dVar10 = dVar11;
              uVar9 = uVar13;
            }
            pcVar8 = *(cfstringStruct **)(local_1b0 + (long)local_680 * 8);
            local_178 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            local_6b0 = pcVar8;
            if (pcVar8 == (cfstringStruct *)0x0) {
              local_6b0 = &cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1c0 = local_6b0;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            pcVar8 = local_1c0;
            uVar13 = 0x7fefffffffffffff;
            dVar11 = 22.0;
            FUN_000badb0();
            local_b8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
            local_b0 = local_168;
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_200 = uVar13;
            local_1f8 = dVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = local_200;
            dVar11 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar8,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar6,0);
            local_1f0 = uVar13;
            local_1e8 = dVar11;
            local_1e0 = dVar10;
            uStack_1d8 = uVar9;
            local_1d0 = dVar10;
            uStack_1c8 = uVar9;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            local_208 = local_170;
            local_210 = (double)(long)local_1d0;
            local_708 = local_210;
            if (local_210 <= local_170) {
              local_708 = local_170;
            }
            local_218 = local_708;
            local_170 = local_708;
            _objc_storeStrong(&local_1c0,0);
            local_680 = local_680 + 1;
          } while (local_680 < local_678);
          local_678 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                     0x10);
          local_680 = (undefined *)0x0;
        } while (local_678 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_220 = 0x4032000000000000;
      local_228 = 0x403c000000000000;
      local_240 = 0x4062800000000000;
      local_280 = local_170 + 36.0 + 28.0;
      local_718 = local_280;
      if (local_280 <= 148.0) {
        local_718 = 148.0;
      }
      local_250 = local_718;
      local_238 = local_718;
      dVar10 = 80.0;
      local_260 = 80.0;
      dVar11 = local_170;
      local_248 = local_280;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
      local_288 = dVar10;
      local_278 = dVar11;
      local_270 = uVar13;
      _CGRectGetWidth(dVar10,local_280);
      local_2b0 = local_148;
      local_268 = dVar10 - 20.0;
      local_748 = local_268;
      if (local_268 <= local_260) {
        local_748 = local_260;
      }
      local_290 = local_748;
      local_258 = local_748;
      if (local_748 <= local_238) {
        local_750 = local_748;
      }
      else {
        local_750 = local_238;
      }
      local_298 = local_750;
      local_230 = local_750;
      puVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
      local_2b0 = local_2b0 * (double)puVar4;
      local_2b8 = local_128;
      local_768 = local_2b0;
      if (local_128 <= local_2b0) {
        local_768 = local_128;
      }
      local_2c0 = local_768;
      local_2a8 = local_768;
      dVar10 = local_128;
      local_2a0 = local_2b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
      local_2f0 = local_768;
      local_2e8 = dVar10;
      local_2e0 = dVar11;
      local_2d8 = uVar13;
      _CGRectGetWidth(local_768,dVar10,dVar11);
      local_2d0 = (local_768 - local_230) - 10.0;
      local_300 = 0x4024000000000000;
      local_308 = local_108 - local_230 * 0.5;
      local_798 = local_308;
      if (local_308 <= 10.0) {
        local_798 = 10.0;
      }
      local_310 = local_798;
      local_2f8 = local_798;
      local_7a0 = local_2d0;
      if (local_798 <= local_2d0) {
        local_7a0 = local_798;
      }
      local_318 = local_7a0;
      local_2c8 = local_7a0;
      local_320 = (local_100 - local_2a8) - 10.0;
      uVar9 = 0x4028000000000000;
      if (local_320 < 12.0) {
        local_320 = 12.0;
      }
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      dVar11 = local_320;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
      local_348 = dVar11;
      local_340 = uVar9;
      local_330 = uVar13;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar11,uVar9,local_108,uVar13,puVar4,PTR_s_initWithFrame__026ca6e8);
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_328 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_328,PTR_s_setAlpha__026ca860);
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      dVar11 = local_2c8;
      dVar10 = local_320;
      dVar12 = local_230;
      dVar14 = local_2a8;
      FUN_000baddc();
      local_370 = dVar11;
      local_368 = dVar10;
      local_360 = dVar12;
      local_358 = dVar14;
      (*(code *)PTR__objc_msgSend_02578628)(dVar11,dVar10,puVar4,PTR_s_initWithFrame__026ca6e8);
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_350 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar4 = local_350;
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_setClipsToBounds__026ca8c8,0);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
      puVar6 = local_350;
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_350;
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3e23d70a);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_350;
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4032000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar13 = 0;
      uVar9 = 0x4020000000000000;
      FUN_000badb0();
      puVar4 = local_350;
      local_380 = uVar13;
      uStack_378 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = local_380;
      uVar9 = uStack_378;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_bounds_026ca548);
      local_3a0 = dVar12;
      local_398 = dVar14;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_bezierPathWithRoundedRect_corner_026ca530);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGPath_026ca478);
      puVar6 = local_350;
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_bounds_026ca548);
      local_3c8 = dVar12;
      local_3c0 = dVar14;
      (*(code *)PTR__objc_msgSend_02578628)(uVar13,puVar4,PTR_s_initWithFrame__026ca6e8);
      local_3b8[0] = puVar4;
      FUN_000bae28();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_setOpaque__026ca9f8,0);
      puVar4 = local_3b8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_3b8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_3b8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = 0x3fe6666666666666;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      FUN_000baf24();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
      puVar6 = local_3b8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_3b8[0],PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_addSubview__026ca4c0,local_3b8[0]);
      puVar4 = local_3b8[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_3e0[0] = puVar4;
      puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithEffect__026ca6e0);
      local_3e8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_bounds_026ca548);
      local_408 = uVar13;
      local_3f8 = dVar12;
      dStack_3f0 = dVar14;
      (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_setAutoresizingMask__026ca878,0x12);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_3e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_addSubview__026ca4c0,local_3e8);
      puVar6 = local_3e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_3e0[0];
      local_3e0[0] = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8[0],PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithFrame__026ca6e8);
      local_438[0] = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setAutoresizingMask__026ca878,0x12);
      FUN_000bae28();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_438[0],PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_438[0],PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_3e0[0],PTR_s_addSubview__026ca4c0,local_438[0]);
      _objc_storeStrong(local_438);
      _objc_storeStrong(&local_3e8,0);
      puVar4 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_3e0[0],PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar13,uVar9,dVar12,dVar14,puVar4,PTR_s_initWithFrame__026ca6e8);
      local_460[0] = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setAutoresizingMask__026ca878,0x12);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_460[0],PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_460[0],PTR_s_setShowsVerticalScrollIndicator__026caa68,local_2a8 < local_2a0)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_460[0],PTR_s_setAlwaysBounceVertical__026ca868,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_460[0],PTR_s_setUserInteractionEnabled__026caad8,0);
      dVar11 = local_230;
      dVar10 = local_2a0;
      FUN_000badb0();
      local_490 = dVar11;
      dStack_488 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar11,dVar10,local_460[0],PTR_s_setContentSize__026ca8e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_3e0[0],PTR_s_addSubview__026ca4c0,local_460[0]);
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      uVar9 = 0;
      uVar13 = 0;
      dVar11 = local_230;
      dVar10 = local_2a0;
      FUN_000baddc();
      local_4c8 = uVar13;
      local_4c0 = uVar9;
      local_4b8 = dVar11;
      local_4b0 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar13,uVar9,dVar11,dVar10,puVar4,PTR_s_initWithFrame__026ca6e8);
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_4a8[0] = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_4a8[0],PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar4 = local_4a8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_4a8[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_4a8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_4a8[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_460[0],PTR_s_addSubview__026ca4c0,local_4a8[0]);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      puVar6 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_e0;
      puVar2 = local_168;
      local_528 = PTR___NSConcreteGlobalBlock_02578658;
      local_520 = 0xd0800000;
      local_51c = 0;
      local_518 = FUN_000bb020;
      local_510 = &DAT_02579e80;
      local_4f0 = local_148;
      local_4e8 = local_230;
      local_4e0 = local_220;
      local_4d8 = local_228;
      local_4d0 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar6 = local_4a8[0];
      local_508 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_4d0;
      local_500 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_4f8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_528);
      (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_addSubview__026ca4c0,local_350);
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addSubview__026ca4c0,local_328);
      _objc_setAssociatedObject(local_d0,&DAT_028c80b8,local_328,1);
      _objc_setAssociatedObject(local_d0,&DAT_028c80bb,local_350,1);
      _objc_setAssociatedObject(local_d0,&DAT_028c80b9,local_4d0,1);
      _objc_setAssociatedObject(local_d0,&DAT_028c80bc,local_e0,1);
      _objc_setAssociatedObject(local_d0,&DAT_028c80ba,0,1);
      _CGAffineTransformMakeScale(uVar1);
      puVar4 = local_350;
      _memcpy(auStack_588,auStack_558,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTransform__026caad0,auStack_588);
      puVar2 = local_328;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_5b8 = PTR___NSConcreteStackBlock_02578660;
      local_5b0 = 0xc2000000;
      local_5ac = 0;
      local_5a8 = FUN_000bbd54;
      local_5a0 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      puVar6 = local_350;
      local_598 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_590 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d40,puVar4,PTR_s_animateWithDuration_animations__026ca4e0,&local_5b8);
      _objc_storeStrong(&local_590);
      _objc_storeStrong(&local_598,0);
      _objc_storeStrong(&local_4f8,0);
      _objc_storeStrong(&local_500,0);
      _objc_storeStrong(&local_508,0);
      _objc_storeStrong(&local_4d0,0);
      _objc_storeStrong(local_4a8,0);
      _objc_storeStrong(local_460,0);
      _objc_storeStrong(local_3e0,0);
      _objc_storeStrong(local_3b8,0);
      _objc_storeStrong(&local_350,0);
      _objc_storeStrong(&local_328,0);
      _objc_storeStrong(&local_168,0);
      local_f0 = 0;
    }
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

