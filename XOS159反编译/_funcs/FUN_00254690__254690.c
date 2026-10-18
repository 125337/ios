// FUN_00254690 @0x254690


void FUN_00254690(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,

                 undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined *puVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined1 auVar6 [16];

  undefined *local_398;

  undefined8 local_390;

  code *local_388;

  undefined *puStack_380;

  undefined8 local_378;

  undefined *local_370;

  undefined8 local_368;

  code *local_360;

  undefined *puStack_358;

  undefined8 local_350;

  undefined *local_348;

  undefined8 local_340;

  code *local_338;

  undefined *puStack_330;

  undefined8 local_328;

  undefined *local_320;

  undefined8 local_318;

  code *local_310;

  undefined *puStack_308;

  undefined8 local_300;

  undefined *local_2f8;

  undefined8 local_2f0;

  code *local_2e8;

  undefined *puStack_2e0;

  undefined8 local_2d8;

  undefined *local_2d0;

  undefined8 local_2c8;

  code *local_2c0;

  undefined *puStack_2b8;

  undefined8 local_2b0;

  undefined *local_2a8;

  undefined8 local_2a0;

  code *local_298;

  undefined *puStack_290;

  undefined8 local_288;

  undefined *local_280;

  undefined8 local_278;

  code *local_270;

  undefined *puStack_268;

  undefined8 local_260;

  undefined *local_258;

  undefined8 local_250;

  code *local_248;

  undefined *puStack_240;

  undefined8 local_238;

  undefined *local_230;

  undefined8 local_228;

  code *local_220;

  undefined *puStack_218;

  undefined8 local_210;

  undefined *local_208;

  undefined8 local_200;

  code *local_1f8;

  undefined *puStack_1f0;

  undefined8 local_1e8;

  undefined *local_1e0;

  undefined8 local_1d8;

  code *local_1d0;

  undefined *puStack_1c8;

  undefined8 local_1c0;

  undefined *local_1b8;

  undefined8 local_1b0;

  code *local_1a8;

  undefined *local_1a0;

  undefined8 local_198;

  undefined *local_190;

  undefined8 local_188;

  code *local_180;

  undefined *local_178;

  undefined8 local_170;

  undefined *local_168;

  undefined8 local_160;

  code *local_158;

  undefined *local_150;

  undefined8 local_148;

  undefined *local_140;

  undefined8 local_138;

  code *local_130;

  undefined *local_128;

  undefined8 local_120;

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *local_100;

  undefined8 local_f8;

  undefined *local_f0;

  undefined8 local_e8;

  code *local_e0;

  undefined *puStack_d8;

  undefined8 local_d0;

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  

  _objc_retain();

  _objc_retain(param_7);

  puVar5 = PTR____NSArray0__struct_00388308;

  if ((param_3 != 0) &&

     (lVar1 = FUN_00297fa0(param_3), uVar2 = DAT_003eb2f8, puVar5 = PTR____NSArray0__struct_00388308

     , lVar1 != 0)) {

    DAT_003eb2f8 = 0;

    _objc_release(uVar2);

    uVar2 = _objc_alloc_init(&_OBJC_CLASS___JSContext);

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar6._0_8_;

    FUN_002a00a0(uVar2,auVar6._8_8_,uVar3,&cf__elements);

    FUN_002993a0(param_1,&_OBJC_CLASS___NSNumber);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_width);

    _objc_release(auVar6._0_8_);

    FUN_002993a0(param_2,&_OBJC_CLASS___NSNumber);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_height);

    _objc_release(auVar6._0_8_);

    FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1,param_4);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_tabCount);

    _objc_release(auVar6._0_8_);

    FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_00,param_5);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_selectedIndex);

    _objc_release(auVar6._0_8_);

    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_01,param_6);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_isDarkMode);

    _objc_release(auVar6._0_8_);

    if (param_7 != (undefined *)0x0) {

      puVar5 = param_7;

    }

    FUN_002a00a0(uVar2,extraout_x1_02,puVar5,&cf_tabNames);

    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_03,param_8);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_tabLabelHidden);

    _objc_release(auVar6._0_8_);

    puVar5 = PTR___NSConcreteStackBlock_003886f0;

    local_a0 = PTR___NSConcreteStackBlock_003886f0;

    local_98 = 0xc2000000;

    local_90 = FUN_00261dc0;

    puStack_88 = &DAT_0038fde8;

    _objc_retain(uVar3);

    local_80 = uVar3;

    auVar6 = _objc_retainBlock(&local_a0);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addRect);

    _objc_release(auVar6._0_8_);

    local_c8 = puVar5;

    local_c0 = 0xc2000000;

    local_b8 = FUN_00262048;

    puStack_b0 = &DAT_0038fe18;

    _objc_retain(uVar3);

    local_a8 = uVar3;

    auVar6 = _objc_retainBlock(&local_c8);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addLabel);

    _objc_release(auVar6._0_8_);

    local_f0 = puVar5;

    local_e8 = 0xc2000000;

    local_e0 = FUN_00262370;

    puStack_d8 = &DAT_0038fe48;

    _objc_retain(uVar3);

    local_d0 = uVar3;

    auVar6 = _objc_retainBlock(&local_f0);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addCircle);

    _objc_release(auVar6._0_8_);

    local_118 = puVar5;

    local_110 = 0xc2000000;

    local_108 = FUN_0026255c;

    local_100 = &DAT_0038fe78;

    _objc_retain(uVar3);

    local_f8 = uVar3;

    auVar6 = _objc_retainBlock(&local_118);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addLine);

    _objc_release(auVar6._0_8_);

    local_140 = puVar5;

    local_138 = 0xc2000000;

    local_130 = FUN_00262828;

    local_128 = &DAT_0038fea8;

    _objc_retain(uVar3);

    local_120 = uVar3;

    auVar6 = _objc_retainBlock(&local_140);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addTabButton);

    _objc_release(auVar6._0_8_);

    local_168 = puVar5;

    local_160 = 0xc2000000;

    local_158 = FUN_00262b84;

    local_150 = &DAT_0038fde8;

    _objc_retain(uVar3);

    local_148 = uVar3;

    auVar6 = _objc_retainBlock(&local_168);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addCenterButton);

    _objc_release(auVar6._0_8_);

    local_190 = puVar5;

    local_188 = 0xc2000000;

    local_180 = FUN_00262e0c;

    local_178 = &DAT_0038fde8;

    _objc_retain(uVar3);

    local_170 = uVar3;

    auVar6 = _objc_retainBlock(&local_190);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addSearchButton);

    _objc_release(auVar6._0_8_);

    local_1b8 = puVar5;

    local_1b0 = 0xc2000000;

    local_1a8 = FUN_00263094;

    local_1a0 = &DAT_0038fed8;

    _objc_retain(uVar3);

    local_198 = uVar3;

    auVar6 = _objc_retainBlock(&local_1b8);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addSideButton);

    _objc_release(auVar6._0_8_);

    local_1e0 = puVar5;

    local_1d8 = 0xc2000000;

    local_1d0 = FUN_0026339c;

    puStack_1c8 = &DAT_0038ff08;

    _objc_retain(uVar3);

    local_1c0 = uVar3;

    auVar6 = _objc_retainBlock(&local_1e0);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addConcaveRect);

    _objc_release(auVar6._0_8_);

    local_208 = puVar5;

    local_200 = 0xc2000000;

    local_1f8 = FUN_00263668;

    puStack_1f0 = &DAT_0038ff38;

    _objc_retain(uVar3);

    local_1e8 = uVar3;

    auVar6 = _objc_retainBlock(&local_208);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addBlurRect);

    _objc_release(auVar6._0_8_);

    local_230 = puVar5;

    local_228 = 0xc2000000;

    local_220 = FUN_00263898;

    puStack_218 = &DAT_0038ff68;

    _objc_retain(uVar3);

    local_210 = uVar3;

    auVar6 = _objc_retainBlock(&local_230);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addShadowRect);

    _objc_release(auVar6._0_8_);

    local_258 = puVar5;

    local_250 = 0xc2000000;

    local_248 = FUN_00263bf4;

    puStack_240 = &DAT_0038ff98;

    _objc_retain(uVar3);

    local_238 = uVar3;

    auVar6 = _objc_retainBlock(&local_258);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addGradientRect);

    _objc_release(auVar6._0_8_);

    local_280 = puVar5;

    local_278 = 0xc2000000;

    local_270 = FUN_00263efc;

    puStack_268 = &DAT_0038ffc8;

    _objc_retain(uVar3);

    local_260 = uVar3;

    auVar6 = _objc_retainBlock(&local_280);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addSlideIndicator);

    _objc_release(auVar6._0_8_);

    local_2a8 = puVar5;

    local_2a0 = 0xc2000000;

    local_298 = FUN_00264130;

    puStack_290 = &DAT_0038fff8;

    _objc_retain(uVar3);

    local_288 = uVar3;

    auVar6 = _objc_retainBlock(&local_2a8);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addSlideIndicatorEx);

    _objc_release(auVar6._0_8_);

    local_2d0 = puVar5;

    local_2c8 = 0xc2000000;

    local_2c0 = FUN_00264864;

    puStack_2b8 = &DAT_00390028;

    _objc_retain(uVar3);

    local_2b0 = uVar3;

    auVar6 = _objc_retainBlock(&local_2d0);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addPulseAnim);

    _objc_release(auVar6._0_8_);

    local_2f8 = puVar5;

    local_2f0 = 0xc2000000;

    local_2e8 = FUN_00264b80;

    puStack_2e0 = &DAT_00390028;

    _objc_retain(uVar3);

    local_2d8 = uVar3;

    auVar6 = _objc_retainBlock(&local_2f8);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addFadeAnim);

    _objc_release(auVar6._0_8_);

    local_320 = puVar5;

    local_318 = 0xc2000000;

    local_310 = FUN_00264e9c;

    puStack_308 = &DAT_00390058;

    _objc_retain(uVar3);

    local_300 = uVar3;

    auVar6 = _objc_retainBlock(&local_320);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addRotateAnim);

    _objc_release(auVar6._0_8_);

    local_348 = puVar5;

    local_340 = 0xc2000000;

    local_338 = FUN_00265120;

    puStack_330 = &DAT_00390088;

    _objc_retain(uVar3);

    local_328 = uVar3;

    auVar6 = _objc_retainBlock(&local_348);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addShakeAnim);

    _objc_release(auVar6._0_8_);

    local_370 = puVar5;

    local_368 = 0xc2000000;

    local_360 = FUN_002653f0;

    puStack_358 = &DAT_003900b8;

    _objc_retain(uVar3);

    local_350 = uVar3;

    auVar6 = _objc_retainBlock(&local_370);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_addGlowAnim);

    _objc_release(auVar6._0_8_);

    local_398 = puVar5;

    local_390 = 0xc2000000;

    local_388 = FUN_002657f0;

    puStack_380 = &DAT_003900e8;

    _objc_retain(uVar3);

    local_378 = uVar3;

    auVar6 = _objc_retainBlock(&local_398);

    FUN_002a00a0(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_setTapAction);

    _objc_release(auVar6._0_8_);

    FUN_002a00a0(uVar2,extraout_x1_04,&PTR___NSConcreteGlobalBlock_00390138,&cf_setPopupItemCount);

    FUN_00294e40(uVar2,extraout_x1_05,param_3);

    _objc_unsafeClaimAutoreleasedReturnValue();

    FUN_00294e60(uVar2);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar1 != 0) {

      FUN_00294e60(uVar2);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _NSLog(&cf__XZYHomeDock_JSevalerror___);

      _objc_release(uVar4);

    }

    puVar5 = (undefined *)FUN_002937a0(uVar3);

    _objc_release(local_378);

    _objc_release(local_350);

    _objc_release(local_328);

    _objc_release(local_300);

    _objc_release(local_2d8);

    _objc_release(local_2b0);

    _objc_release(local_288);

    _objc_release(local_260);

    _objc_release(local_238);

    _objc_release(local_210);

    _objc_release(local_1e8);

    _objc_release(local_1c0);

    _objc_release(local_198);

    _objc_release(local_170);

    _objc_release(local_148);

    _objc_release(local_120);

    _objc_release(local_f8);

    _objc_release(local_d0);

    _objc_release(local_a8);

    _objc_release(local_80);

    _objc_release(uVar3);

    _objc_release(uVar2);

  }

  _objc_release(param_7);

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(puVar5);

  return;

}




