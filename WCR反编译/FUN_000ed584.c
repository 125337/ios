// FUN_000ed584 @ 000ed584

void FUN_000ed584(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double local_848;
  double local_800;
  double local_7f8;
  double local_778;
  double local_770;
  double local_768;
  double local_728;
  ulong local_6b0;
  ulong local_6a8;
  undefined *local_630;
  undefined4 local_628;
  undefined4 local_624;
  code *local_620;
  undefined *local_618;
  undefined *local_610;
  undefined *local_608;
  undefined1 auStack_600 [48];
  undefined1 auStack_5d0 [48];
  undefined *local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  code *local_590;
  undefined *local_588;
  undefined *local_580;
  undefined *local_578;
  undefined *local_570;
  double local_568;
  double local_560;
  undefined8 local_558;
  undefined *local_550;
  undefined8 local_548;
  undefined8 local_540;
  double local_538;
  double local_530;
  undefined *local_528;
  double local_520;
  double dStack_518;
  double local_510;
  double dStack_508;
  undefined8 local_500;
  undefined8 local_4f8;
  double local_4f0;
  double local_4e8;
  undefined *local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  double local_4c8;
  double local_4c0;
  undefined *local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  double local_4a0;
  double dStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  double local_480;
  double dStack_478;
  undefined *local_470;
  undefined *local_468;
  undefined *local_460;
  undefined8 local_458;
  undefined8 local_450;
  double local_448;
  double local_440;
  undefined *local_438;
  undefined8 local_430;
  undefined8 local_428;
  double local_420;
  double local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  undefined *local_3d0;
  undefined *local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  undefined *local_3a0;
  double local_398;
  double local_390;
  double dStack_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  double dStack_328;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2d8;
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
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  double local_108;
  undefined *local_100;
  undefined4 local_f4;
  ulong local_f0 [3];
  byte local_d1;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar1 = DAT_02323d48;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_5);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_6);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_7);
  local_d1 = param_8;
  FUN_000eb8bc(local_c0,0);
  uVar2 = local_c8;
  FUN_000ec210();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIWindow_026cdf68;
  local_f0[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_f4 = 1;
  }
  else {
    uVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (uVar2 == 0) {
      local_f4 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      local_108 = 0.0;
      local_100 = puVar3;
      _memset(auStack_150,0,0x40);
      uVar2 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_6a8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      if (local_6a8 != 0) {
        lVar6 = *local_140;
        local_6b0 = 0;
        do {
          do {
            dVar10 = param_3;
            dVar12 = param_4;
            if (*local_140 - lVar6 != 0) {
              _objc_enumerationMutation(*local_140 - lVar6,uVar2);
              dVar10 = param_3;
              dVar12 = param_4;
            }
            uVar7 = *(undefined8 *)(local_148 + local_6b0 * 8);
            local_110 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            dVar8 = 1.7976931348623157e+308;
            dVar9 = 22.0;
            local_158 = uVar7;
            FUN_000f0244();
            local_b8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
            local_b0 = local_100;
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_1a0 = dVar8;
            local_198 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
            _objc_retainAutoreleasedReturnValue();
            param_4 = local_1a0;
            param_3 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar3,0);
            local_190 = param_4;
            local_188 = param_3;
            local_180 = dVar10;
            dStack_178 = dVar12;
            local_170 = dVar10;
            dStack_168 = dVar12;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_108 < local_170) {
              local_108 = (double)(long)local_170;
            }
            _objc_storeStrong(&local_158,0);
            local_6b0 = local_6b0 + 1;
          } while (local_6b0 < local_6a8);
          local_6a8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_6b0 = 0;
        } while (local_6a8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_1a8 = 40.0;
      local_1b0 = 0x4030000000000000;
      local_1c0 = 0x405e000000000000;
      local_1c8 = local_108 + 32.0;
      local_728 = local_1c8;
      if (local_1c8 <= 120.0) {
        local_728 = 120.0;
      }
      local_1d0 = local_728;
      local_1b8 = local_728;
      uVar2 = local_d0;
      dVar12 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      dVar8 = (double)uVar2;
      local_1d8 = dVar8 * 40.0;
      local_1e8 = 440.0;
      local_1f8 = local_1a8;
      dVar10 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_bounds_026ca548);
      local_220 = dVar10;
      local_218 = dVar8;
      local_210 = dVar12;
      local_208 = param_4;
      _CGRectGetHeight(dVar10,dVar8);
      uVar2 = local_c8;
      local_200 = dVar10 - 100.0;
      local_768 = local_200;
      if (local_200 <= local_1f8) {
        local_768 = local_1f8;
      }
      local_228 = local_768;
      local_1f0 = local_768;
      if (local_768 <= local_1e8) {
        local_770 = local_768;
      }
      else {
        local_770 = local_1e8;
      }
      local_230 = local_770;
      local_1e0 = local_770;
      local_240 = local_1d8;
      local_248 = local_770;
      if (local_770 <= local_1d8) {
        local_778 = local_770;
      }
      else {
        local_778 = local_1d8;
      }
      local_250 = local_778;
      local_238 = local_778;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
      local_290 = local_778;
      local_288 = local_770;
      local_280 = dVar12;
      local_278 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertRect_toView__0269ded8,local_f0[0]);
      local_270 = local_778;
      dStack_268 = local_770;
      local_260 = dVar12;
      dStack_258 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_bounds_026ca548);
      local_2c0 = param_4;
      local_2b8 = dVar12;
      local_2b0 = local_770;
      local_2a8 = local_778;
      _CGRectGetMaxX(param_4,dVar12,local_770,local_778);
      local_2a0 = (param_4 - local_1b8) - 10.0;
      local_2d0 = 10.0;
      dStack_2f8 = dStack_268;
      local_300 = local_270;
      dStack_2e8 = dStack_258;
      local_2f0 = local_260;
      dVar10 = local_270;
      _CGRectGetMaxX(local_270,dStack_268,local_260,dStack_258);
      local_2d8 = dVar10 - local_1b8;
      local_7f8 = local_2d8;
      if (local_2d8 <= local_2d0) {
        local_7f8 = local_2d0;
      }
      local_308 = local_7f8;
      local_2c8 = local_7f8;
      if (local_7f8 <= local_2a0) {
        local_800 = local_7f8;
      }
      else {
        local_800 = local_2a0;
      }
      local_310 = local_800;
      local_298 = local_800;
      dStack_338 = dStack_268;
      local_340 = local_270;
      dStack_328 = dStack_258;
      local_330 = local_260;
      dVar10 = local_270;
      dVar8 = local_260;
      dVar9 = dStack_258;
      _CGRectGetMaxY(local_270,dStack_268);
      local_318 = dVar10 + 8.0;
      local_848 = local_318 + local_238;
      dVar10 = local_848;
      dVar12 = local_238;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_bounds_026ca548);
      local_360 = dVar10;
      local_358 = dVar12;
      local_350 = dVar8;
      local_348 = dVar9;
      _CGRectGetHeight(dVar10,dVar12,dVar8);
      dVar12 = 12.0;
      dVar10 = dVar10 - 12.0;
      if (dVar10 < local_848) {
        local_368 = 12.0;
        dStack_388 = dStack_268;
        local_390 = local_270;
        dStack_378 = dStack_258;
        local_380 = local_260;
        dVar10 = local_270;
        dVar12 = local_260;
        dVar9 = dStack_258;
        _CGRectGetMinY(local_270,dStack_268);
        dVar10 = (dVar10 - 8.0) - local_238;
        local_848 = dVar10;
        if (dVar10 <= local_368) {
          local_848 = local_368;
        }
        local_398 = local_848;
        local_318 = local_848;
        local_370 = dVar10;
      }
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_bounds_026ca548);
      local_3c0 = local_848;
      local_3b8 = dVar10;
      local_3b0 = dVar12;
      local_3a8 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_848,dVar10,dVar12,dVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_3a0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_3a0,PTR_s_setUserInteractionEnabled__026caad8,local_d1 & 1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_3a0,PTR_s_setAlpha__026ca860);
      if (((local_d1 & 1) != 0) &&
         (uVar2 = local_c0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_c0,PTR_s_respondsToSelector__026ca818,
                    PTR_s_WCRefine_onChatTopBarGroupMenuTa_0269e950), (uVar2 & 1) != 0)) {
        puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_initWithTarget_action__026ca718,local_c0,
                   PTR_s_WCRefine_onChatTopBarGroupMenuTa_0269e950);
        local_3c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setCancelsTouchesInView__026ca8b8,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3a0,PTR_s_addGestureRecognizer__026ca4a8,local_3c8);
        _objc_storeStrong(&local_3c8,0);
      }
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      dVar10 = local_298;
      dVar12 = local_318;
      dVar8 = local_1b8;
      dVar9 = local_238;
      FUN_000e64a0();
      local_3f0 = dVar10;
      local_3e8 = dVar12;
      local_3e0 = dVar8;
      local_3d8 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(dVar10,dVar12,puVar3,PTR_s_initWithFrame__026ca6e8);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_3d0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_3d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_setClipsToBounds__026ca8c8,0);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      puVar4 = local_3d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_3d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3e23d70a);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_3d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4032000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar7 = 0;
      uVar11 = 0x4020000000000000;
      FUN_000f0244();
      puVar3 = local_3d0;
      local_400 = uVar7;
      uStack_3f8 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uStack_408 = uStack_3f8;
      local_410 = local_400;
      uVar7 = local_400;
      uVar11 = uStack_3f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_bounds_026ca548);
      local_430 = uVar7;
      local_428 = uVar11;
      local_420 = dVar8;
      local_418 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_bezierPathWithRoundedRect_corner_026ca530);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGPath_026ca478);
      puVar4 = local_3d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_bounds_026ca548);
      local_458 = uVar7;
      local_450 = uVar11;
      local_448 = dVar8;
      local_440 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,puVar3,PTR_s_initWithFrame__026ca6e8);
      local_438 = puVar3;
      FUN_000f0270();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_setOpaque__026ca9f8,0);
      puVar3 = local_438;
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_438;
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_438;
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0x3fe6666666666666;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      FUN_000f0364();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      puVar4 = local_438;
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_438,PTR_s_setUserInteractionEnabled__026caad8,local_d1 & 1);
      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_addSubview__026ca4c0,local_438);
      puVar4 = local_438;
      puVar5 = local_438;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
      local_460 = puVar4;
      FUN_000f0460();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_effectWithStyle__026ca628,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      local_468 = puVar3;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithEffect__026ca6e0,local_468);
      local_470 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_bounds_026ca548);
      local_4b0 = uVar7;
      uStack_4a8 = uVar11;
      local_4a0 = dVar8;
      dStack_498 = dVar9;
      local_490 = uVar7;
      uStack_488 = uVar11;
      local_480 = dVar8;
      dStack_478 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_setAutoresizingMask__026ca878,0x12);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_470;
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_setOpaque__026ca9f8,0);
      FUN_000f0494();
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_470,PTR_s_setUserInteractionEnabled__026caad8,local_d1 & 1);
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_addSubview__026ca4c0,local_470);
      puVar4 = local_470;
      (*(code *)PTR__objc_msgSend_02578628)(local_470,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_460;
      local_460 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_bounds_026ca548);
      local_4d8 = uVar7;
      local_4d0 = uVar11;
      local_4c8 = dVar8;
      local_4c0 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithFrame__026ca6e8);
      local_4b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAutoresizingMask__026ca878,0x12);
      FUN_000f049c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_addSubview__026ca4c0,local_4b8);
      _objc_storeStrong(&local_4b8);
      _objc_storeStrong(&local_470,0);
      _objc_storeStrong(&local_468,0);
      puVar3 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_bounds_026ca548);
      local_500 = uVar7;
      local_4f8 = uVar11;
      local_4f0 = dVar8;
      local_4e8 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar11,dVar8,dVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
      local_4e0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAutoresizingMask__026ca878,0x12);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_4e0,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4e0,PTR_s_setShowsVerticalScrollIndicator__026caa68,local_238 < local_1d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_4e0,PTR_s_setAlwaysBounceVertical__026ca868,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4e0,PTR_s_setUserInteractionEnabled__026caad8,local_d1 & 1);
      dVar10 = local_1b8;
      dVar12 = local_1d8;
      FUN_000f0244();
      local_520 = dVar10;
      dStack_518 = dVar12;
      local_510 = dVar10;
      dStack_508 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(dVar10,dVar12,local_4e0,PTR_s_setContentSize__026ca8e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_addSubview__026ca4c0,local_4e0);
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      uVar11 = 0;
      uVar7 = 0;
      dVar10 = local_1b8;
      dVar12 = local_1d8;
      FUN_000e64a0();
      local_548 = uVar7;
      local_540 = uVar11;
      local_538 = dVar10;
      local_530 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar11,dVar10,dVar12,puVar3,PTR_s_initWithFrame__026ca6e8);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_528 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_528;
      (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_528;
      (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_setAutoresizingMask__026ca878,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_528,PTR_s_setUserInteractionEnabled__026caad8,local_d1 & 1);
      (*(code *)PTR__objc_msgSend_02578628)(local_4e0,PTR_s_addSubview__026ca4c0,local_528);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      uVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_d0;
      puVar5 = local_100;
      local_5a0 = PTR___NSConcreteGlobalBlock_02578658;
      local_598 = 0xd0800000;
      local_594 = 0;
      local_590 = FUN_000f0598;
      local_588 = &DAT_0257a070;
      local_568 = local_1a8;
      local_560 = local_1b8;
      local_558 = local_1b0;
      local_550 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_528;
      local_580 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_550;
      local_578 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_570 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_5a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_addSubview__026ca4c0,local_3d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_addSubview__026ca4c0,local_3a0);
      _objc_setAssociatedObject(local_c0,&DAT_028c83a3,local_3a0,1);
      _objc_setAssociatedObject(local_c0,&DAT_028c83a4,local_3d0,1);
      _objc_setAssociatedObject(local_c0,&DAT_028c83a5,local_550,1);
      _objc_setAssociatedObject(local_c0,&DAT_028c83a6,local_d0,1);
      _objc_setAssociatedObject(local_c0,&DAT_028c83a7,0,1);
      _CGAffineTransformMakeScale(uVar1);
      puVar3 = local_3d0;
      _memcpy(auStack_600,auStack_5d0,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTransform__026caad0,auStack_600);
      puVar5 = local_3a0;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_630 = PTR___NSConcreteStackBlock_02578660;
      local_628 = 0xc2000000;
      local_624 = 0;
      local_620 = FUN_000f0d18;
      local_618 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_3d0;
      local_610 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_608 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d40,puVar3,PTR_s_animateWithDuration_animations__026ca4e0,&local_630);
      _objc_storeStrong(&local_608);
      _objc_storeStrong(&local_610,0);
      _objc_storeStrong(&local_570,0);
      _objc_storeStrong(&local_578,0);
      _objc_storeStrong(&local_580,0);
      _objc_storeStrong(&local_550,0);
      _objc_storeStrong(&local_528,0);
      _objc_storeStrong(&local_4e0,0);
      _objc_storeStrong(&local_460,0);
      _objc_storeStrong(&local_438,0);
      _objc_storeStrong(&local_3d0,0);
      _objc_storeStrong(&local_3a0,0);
      _objc_storeStrong(&local_100,0);
      local_f4 = 0;
    }
  }
  _objc_storeStrong(local_f0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

