// layoutDockAnimated: @0x278758


/* Function Stack Size: 0x14 bytes */



void XZYHomeDockLiquidContainer::layoutDockAnimated_(ID param_1,SEL param_2,bool param_3)



{

  double *pdVar1;

  bool bVar2;

  bool bVar3;

  byte bVar4;

  int iVar5;

  uint uVar6;

  ulong uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  double dVar14;

  undefined8 uVar15;

  long lVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  long lVar20;

  long lVar21;

  ulong uVar22;

  undefined8 uVar23;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  byte bVar24;

  long lVar25;

  long lVar26;

  long lVar27;

  ID IVar28;

  float fVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  double dVar34;

  double dVar35;

  double dVar36;

  double dVar37;

  double in_d1;

  double dVar38;

  double in_d2;

  double dVar39;

  double in_d3;

  double dVar40;

  double dVar41;

  double dVar42;

  double dVar43;

  undefined1 auVar44 [16];

  undefined1 auVar45 [16];

  undefined1 auVar46 [16];

  undefined4 local_494;

  double local_490;

  undefined8 uStack_488;

  double local_428;

  double local_420;

  double local_418;

  undefined8 local_410;

  ID local_408;

  undefined8 local_400;

  long lStack_3f8;

  long *local_3f0;

  undefined8 uStack_3e8;

  undefined8 local_3e0;

  undefined8 uStack_3d8;

  undefined8 uStack_3d0;

  undefined8 uStack_3c8;

  undefined8 local_3c0;

  undefined8 uStack_3b8;

  undefined8 local_3b0;

  undefined8 uStack_3a8;

  undefined8 local_3a0;

  undefined8 uStack_398;

  undefined8 local_390;

  undefined8 uStack_388;

  undefined8 uStack_380;

  undefined8 uStack_378;

  undefined8 local_370;

  undefined8 uStack_368;

  undefined *local_360;

  undefined8 local_358;

  code *local_350;

  undefined *puStack_348;

  undefined8 local_340;

  undefined8 local_338;

  undefined8 local_330;

  long lStack_328;

  long *local_320;

  undefined8 uStack_318;

  undefined8 local_310;

  undefined8 uStack_308;

  undefined8 uStack_300;

  undefined8 uStack_2f8;

  undefined8 local_2f0;

  long lStack_2e8;

  long *local_2e0;

  undefined8 uStack_2d8;

  undefined8 local_2d0;

  undefined8 uStack_2c8;

  undefined8 uStack_2c0;

  undefined8 uStack_2b8;

  undefined *local_2a8;

  undefined8 local_2a0;

  code *local_298;

  undefined *local_290;

  undefined1 local_288;

  undefined1 auStack_280 [128];

  undefined1 auStack_200 [128];

  undefined8 local_180;

  undefined8 local_178;

  undefined8 local_170;

  undefined8 local_168;

  undefined1 auStack_160 [128];

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_0029ff60(param_1,param_2,1);

  uVar7 = FUN_002978a0(param_1);

  if ((uVar7 & 1) != 0) goto LAB_0027a2a8;

  FUN_002a6520(param_1);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar8 == 0) goto LAB_0027a2a8;

  FUN_002925a0(param_1);

  dVar30 = (double)_CGRectGetWidth();

  FUN_002925a0(param_1);

  dVar31 = (double)_CGRectGetHeight();

  if ((dVar30 <= 0.0) || (dVar31 <= 0.0)) goto LAB_0027a2a8;

  FUN_0029ff60(param_1,extraout_x1,0);

  dVar32 = (double)FUN_00297e20(param_1);

  FUN_002925a0(param_1);

  dVar33 = in_d2;

  dVar38 = in_d3;

  FUN_002925a0(param_1);

  FUN_0029f320(dVar33,param_1);

  if (param_3 == 0) {

LAB_00278874:

    bVar24 = 0;

    bVar3 = false;

  }

  else {

    FUN_002a6520(param_1);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if ((lVar8 == 0) || (iVar5 = FUN_002978a0(param_1), iVar5 != 0)) {

      _objc_release(lVar8);

      goto LAB_00278874;

    }

    uVar7 = _UIAccessibilityIsReduceMotionEnabled();

    _objc_release(lVar8);

    if ((uVar7 & 1) != 0) goto LAB_00278874;

    lVar8 = FUN_00297d40(param_1);

    lVar12 = FUN_0029a520(param_1);

    bVar3 = lVar8 != lVar12;

    bVar24 = 1;

  }

  FUN_002a5120(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  uVar7 = FUN_00290f60();

  if ((uVar7 & 1) == 0) {

    FUN_0029c3c0(param_1);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a540();

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 == 0) {

      FUN_0029c3c0(param_1);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00297e40();

      uVar17 = _objc_retainAutoreleasedReturnValue();

      uStack_488 = FUN_0029a100();

      dVar33 = dVar38;

      _objc_release(uVar17);

      _objc_release(uVar15);

      local_490 = dVar38;

    }

    else {

      uStack_488 = FUN_0029a100(lVar8);

      dVar33 = dVar38;

      local_490 = dVar38;

    }

    dVar38 = dVar33;

    _objc_release(lVar8);

    _objc_release(uVar11);

  }

  else {

    FUN_002a5120(param_1);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    uStack_488 = FUN_00292ae0();

    local_490 = dVar38;

  }

  _objc_release(uVar10);

  _objc_release(uVar9);

  FUN_0029c3c0(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  dVar33 = (double)FUN_00292ae0();

  _objc_release(uVar9);

  lVar8 = FUN_0029a520(param_1);

  bVar4 = lVar8 != 0 | bVar3;

  if (((((bVar24 & (bVar4 ^ 1)) != 1) || (uVar7 = FUN_002a5580(param_1), (uVar7 & 1) != 0)) ||

      (dVar32 != in_d2)) || (in_d1 != in_d3)) {

    FUN_002928c0(param_1);

  }

  auVar44 = FUN_0029a520(param_1);

  FUN_0029f280(param_1,auVar44._8_8_,auVar44._0_8_);

  FUN_002a6520(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bea0();

  uVar10 = _objc_retainAutoreleasedReturnValue();

  dVar32 = (double)FUN_0029bda0();

  if (dVar32 == 0.0) {

    FUN_002987e0(&_OBJC_CLASS___UIScreen);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    dVar32 = (double)FUN_0029bda0();

    _objc_release(uVar11);

  }

  _objc_release(uVar10);

  _objc_release(uVar9);

  dVar42 = (double)(long)(dVar32 * 9.6) / dVar32;

  dVar32 = (double)(long)(dVar32 * 62.4) / dVar32;

  if (dVar31 <= dVar32) {

    dVar32 = dVar31;

  }

  dVar43 = (dVar31 - dVar32) * 0.5;

  lVar8 = FUN_0029a520(param_1);

  lVar12 = FUN_0029a520(param_1);

  dVar30 = dVar30 + (dVar42 + dVar32) * -2.0;

  if (dVar30 <= dVar32) {

    dVar30 = dVar32;

  }

  dVar36 = dVar30;

  if (lVar8 != 0) {

    dVar36 = dVar32;

  }

  dVar34 = (double)_CGRectGetMaxX(0,dVar43,dVar36,dVar32);

  dVar34 = dVar42 + dVar34;

  dVar40 = dVar30;

  if (lVar12 != 1) {

    dVar40 = dVar32;

  }

  dVar35 = (double)_CGRectGetMaxX(dVar34,dVar43,dVar40,dVar32);

  dVar42 = dVar42 + dVar35;

  lVar13 = FUN_0029a520(param_1);

  dVar35 = dVar30;

  if (lVar13 != 2) {

    dVar35 = dVar32;

  }

  local_2a8 = PTR___NSConcreteStackBlock_003886f0;

  local_2a0 = 0xc0000000;

  local_298 = FUN_0027a550;

  local_290 = &DAT_003906c8;

  local_288 = bVar3;

  lVar13 = _objc_retainBlock(&local_2a8);

  FUN_00299100(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  dVar14 = (double)(**(code **)(lVar13 + 0x10))(0,dVar43,dVar36,dVar32,lVar13,uVar9);

  _objc_release(uVar9);

  FUN_00299f00(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  local_428 = (double)(**(code **)(lVar13 + 0x10))(dVar34,dVar43,dVar40,dVar32,lVar13,uVar9);

  _objc_release(uVar9);

  FUN_0029a980(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  local_420 = (double)(**(code **)(lVar13 + 0x10))(dVar42,dVar43,dVar35,dVar32,lVar13,uVar9);

  _objc_release(uVar9);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00299120(param_1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0027a758(0,uVar10,uVar9);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00299100(param_1);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  local_418 = dVar14;

  FUN_0027a610(0,dVar43,dVar36,dVar32,uVar15,uVar11,uVar15,dVar14);

  _objc_release(uVar15);

  _objc_release(uVar11);

  _objc_release(uVar10);

  FUN_0029c3c0(param_1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar11 = _objc_retainAutoreleasedReturnValue();

  fVar29 = (float)FUN_00299860();

  _objc_release(uVar11);

  _objc_release(uVar10);

  FUN_0029c3c0(param_1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a540();

  lVar16 = _objc_retainAutoreleasedReturnValue();

  if (lVar16 == 0) {

    FUN_0029c3c0(param_1);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    uVar17 = _objc_retainAutoreleasedReturnValue();

    local_494 = FUN_00299860();

    _objc_release(uVar17);

    _objc_release(uVar15);

  }

  else {

    local_494 = FUN_00299860(lVar16);

  }

  _objc_release(lVar16);

  _objc_release(uVar11);

  _objc_release(uVar10);

  FUN_0029c3e0(param_1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0027a758(0,uVar10,uVar9);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_002a06a0(auVar44._0_8_,auVar44._8_8_,local_418);

  _objc_release(auVar44._0_8_);

  _objc_release(uVar10);

  FUN_002a4d60(param_1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  uVar11 = FUN_00299020();

  _objc_release(uVar10);

  FUN_00299ee0(param_1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  local_e0 = uVar10;

  FUN_0029a6c0(param_1);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  local_d8 = uVar15;

  FUN_00299ec0(param_1);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  local_d0 = uVar17;

  FUN_00299200(param_1);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  local_c8 = uVar18;

  FUN_0029a960(param_1);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  local_c0 = uVar19;

  FUN_00290e40(param_1);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  local_b8 = auVar44._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar44._8_8_,&local_e0,6);

  auVar45 = _objc_retainAutoreleasedReturnValue();

  FUN_00291260(uVar11,auVar45._8_8_,auVar45._0_8_);

  _objc_release(auVar45._0_8_);

  _objc_release(auVar44._0_8_);

  _objc_release(uVar19);

  _objc_release(uVar18);

  _objc_release(uVar17);

  _objc_release(uVar15);

  _objc_release(uVar10);

  uStack_2c8 = 0;

  local_2d0 = 0;

  uStack_2b8 = 0;

  uStack_2c0 = 0;

  lStack_2e8 = 0;

  local_2f0 = 0;

  uStack_2d8 = 0;

  local_2e0 = (long *)0x0;

  _objc_retain(uVar11);

  local_410 = uVar11;

  lVar16 = FUN_00293880(uVar11,extraout_x1_00,&local_2f0,auStack_160,0x10);

  local_408 = param_1;

  if (lVar16 != 0) {

    lVar27 = *local_2e0;

    do {

      lVar25 = 0;

      do {

        if (*local_2e0 != lVar27) {

          _objc_enumerationMutation(local_410);

        }

        lVar26 = *(long *)(lStack_2e8 + lVar25 * 8);

        FUN_002a4d60(param_1);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        uVar6 = FUN_00293560(auVar44._0_8_,auVar44._8_8_,lVar26);

        _objc_release(auVar44._0_8_);

        FUN_0029a960(param_1);

        lVar20 = _objc_retainAutoreleasedReturnValue();

        if (lVar26 == lVar20) {

          _objc_release(lVar20);

          bVar2 = true;

          dVar14 = local_420;

        }

        else {

          FUN_00290e40(param_1);

          lVar21 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          _objc_release(lVar20);

          bVar2 = lVar26 == lVar21;

          pdVar1 = &local_420;

          if (!bVar2) {

            pdVar1 = &local_428;

          }

          dVar14 = *pdVar1;

        }

        dVar37 = local_418;

        if (uVar6 == 0) {

          dVar37 = dVar14;

        }

        FUN_0027a758(0x3fb999999999999a,lVar26,uVar9);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        uVar10 = auVar44._0_8_;

        FUN_002a06a0(uVar10,auVar44._8_8_,dVar37);

        if ((uVar6 & 1) == 0) {

          if (bVar2) {

            FUN_0029a980(local_408);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            dVar41 = dVar42;

            dVar39 = dVar35;

          }

          else {

            FUN_00299f00(local_408);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            dVar41 = dVar34;

            dVar39 = dVar40;

          }

          FUN_0027a610(dVar41,dVar43,dVar39,dVar32,uVar11,uVar10,uVar11,dVar14);

          _objc_release(uVar11);

        }

        FUN_00291e40(lVar26);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0027a758(0,uVar11,uVar9);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar11);

        FUN_002a06a0(uVar15,extraout_x1_01,dVar37);

        IVar28 = local_408;

        FUN_00299ee0(local_408);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        if (lVar26 == auVar44._0_8_) {

          FUN_002a0880(uVar15,auVar44._8_8_,1);

        }

        else {

          FUN_00290e40(IVar28);

          auVar45 = _objc_retainAutoreleasedReturnValue();

          FUN_002a0880(uVar15,auVar45._8_8_,lVar26 == auVar45._0_8_);

          _objc_release(auVar45._0_8_);

        }

        _objc_release(auVar44._0_8_);

        FUN_002963c0(lVar26);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0027a758(0,uVar11,uVar9);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a06a0(auVar44._0_8_,auVar44._8_8_,dVar37);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar11);

        FUN_00297c20(lVar26);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0027a758(0,uVar11,uVar9);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a06a0(auVar44._0_8_,auVar44._8_8_,dVar37);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar11);

        FUN_002929c0(lVar26);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0027a758(0x3fac28f5c28f5c29,uVar11,uVar9);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a06a0(auVar44._0_8_,auVar44._8_8_,dVar37);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar11);

        FUN_00294480(lVar26);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0027a758(0x3fb3333333333333,uVar11,uVar9);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a06a0(auVar44._0_8_,auVar44._8_8_,dVar37);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar11);

        FUN_0029a600(lVar26);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0027a758(0,uVar11,uVar9);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a06a0(auVar44._0_8_,auVar44._8_8_,dVar37);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar11);

        _objc_release(uVar15);

        _objc_release(uVar10);

        param_1 = local_408;

        lVar25 = lVar25 + 1;

      } while (lVar16 != lVar25);

      lVar16 = FUN_00293880(local_410,extraout_x1_02,&local_2f0,auStack_160,0x10);

    } while (lVar16 != 0);

  }

  _objc_release(local_410);

  FUN_00292180(&_OBJC_CLASS___CATransaction);

  FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_03,1);

  IVar28 = local_408;

  if (bVar3 != false) {

    FUN_00299100(local_408);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    local_180 = uVar10;

    FUN_00299f00(IVar28);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    local_178 = uVar11;

    FUN_0029a980(IVar28);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    local_170 = uVar15;

    FUN_0029c3c0(IVar28);

    auVar44 = _objc_retainAutoreleasedReturnValue();

    local_168 = auVar44._0_8_;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar44._8_8_,&local_180,4);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar44._0_8_);

    _objc_release(uVar15);

    _objc_release(uVar11);

    _objc_release(uVar10);

    auVar44 = FUN_00293860(uVar17);

    FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar44._8_8_,auVar44._0_8_);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    lStack_328 = 0;

    local_330 = 0;

    uStack_318 = 0;

    local_320 = (long *)0x0;

    uStack_308 = 0;

    local_310 = 0;

    uStack_2f8 = 0;

    uStack_300 = 0;

    _objc_retain(uVar17);

    lVar16 = FUN_00293880(uVar17,extraout_x1_04,&local_330,auStack_200,0x10);

    if (lVar16 != 0) {

      lVar27 = *local_320;

      do {

        lVar25 = 0;

        do {

          if (*local_320 != lVar27) {

            _objc_enumerationMutation(uVar17);

          }

          auVar44 = FUN_00292200(*(undefined8 *)(lStack_328 + lVar25 * 8));

          FUN_00299480(&_OBJC_CLASS___NSNumber,auVar44._8_8_,auVar44._0_8_);

          auVar44 = _objc_retainAutoreleasedReturnValue();

          FUN_00291240(uVar10,auVar44._8_8_,auVar44._0_8_);

          _objc_release(auVar44._0_8_);

          lVar25 = lVar25 + 1;

        } while (lVar16 != lVar25);

        lVar16 = FUN_00293880(uVar17,extraout_x1_05,&local_330,auStack_200,0x10);

      } while (lVar16 != 0);

    }

    _objc_release(uVar17);

    local_360 = PTR___NSConcreteStackBlock_003886f0;

    local_358 = 0xc2000000;

    local_350 = FUN_0027a7d4;

    puStack_348 = &DAT_003901d8;

    local_340 = uVar17;

    local_338 = uVar10;

    _objc_retain(uVar10);

    _objc_retain(uVar17);

    FUN_0029d5a0(&_OBJC_CLASS___CATransaction,extraout_x1_06,&local_360);

    _objc_release(local_338);

    _objc_release(local_340);

    _objc_release(uVar10);

    _objc_release(uVar17);

  }

  if (bVar4 != 0) {

    FUN_002a5120(local_408);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b800(uStack_488,local_490);

    _objc_release(uVar10);

  }

  IVar28 = local_408;

  FUN_00299100(local_408);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_00299e20(0,dVar43,dVar36,dVar32,IVar28,auVar44._8_8_,auVar44._0_8_,bVar24,local_418,1);

  _objc_release(auVar44._0_8_);

  FUN_00299f00(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_00299e20(dVar34,dVar43,dVar40,dVar32,IVar28,auVar44._8_8_,auVar44._0_8_,bVar24,local_428,1);

  _objc_release(auVar44._0_8_);

  FUN_0029a980(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_00299e20(dVar42,dVar43,dVar35,dVar32,IVar28,auVar44._8_8_,auVar44._0_8_,bVar24,local_420,1);

  _objc_release(auVar44._0_8_);

  FUN_00299120(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d140(0,0,dVar30,dVar32);

  _objc_release(uVar10);

  FUN_00299120(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d320(dVar30 * 0.5,dVar31 * 0.5);

  _objc_release(uVar10);

  FUN_00299ee0(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f200(auVar44._0_8_,auVar44._8_8_,lVar12 != 1);

  _objc_release(auVar44._0_8_);

  lVar16 = FUN_0029a520(IVar28);

  FUN_0029a960(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f200(auVar44._0_8_,auVar44._8_8_,lVar16 != 2);

  _objc_release(auVar44._0_8_);

  FUN_00299120(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_002a23c0(auVar44._0_8_,auVar44._8_8_,1);

  _objc_release(auVar44._0_8_);

  lVar16 = FUN_0029a520(IVar28);

  FUN_00290e40(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_002a23c0(auVar44._0_8_,auVar44._8_8_,lVar16 == 2);

  _objc_release(auVar44._0_8_);

  FUN_002a4d60(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  uVar7 = FUN_00293860();

  _objc_release(uVar10);

  if ((long)uVar7 < 2) {

    uVar7 = 1;

  }

  dVar30 = dVar30 / (double)uVar7;

  FUN_002a4d60(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  lVar16 = FUN_00293860();

  _objc_release(uVar10);

  if (0 < lVar16) {

    uVar7 = 0;

    dVar31 = dVar30;

    if (lVar8 != 0) {

      dVar31 = dVar32;

    }

    do {

      FUN_002a4d60(IVar28);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      FUN_00299500(auVar44._0_8_,auVar44._8_8_,uVar7);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar44._0_8_);

      dVar36 = dVar30 * (double)uVar7;

      if (lVar8 != 0) {

        dVar36 = 0.0;

      }

      FUN_00270fb0(dVar36,0,dVar31,dVar32,uVar10);

      bVar4 = FUN_00297c80(IVar28);

      FUN_0029f200(uVar10,extraout_x1_07,bVar4 & 1 | lVar8 != 0);

      if (lVar8 == 0) {

        FUN_002a4d60(IVar28);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        auVar44 = FUN_00293860();

        FUN_0029d360(uVar10,auVar44._8_8_,uVar7 == auVar44._0_8_ - 1U);

        _objc_release(uVar11);

        auVar44 = FUN_0029a900(IVar28);

        FUN_002a2420(uVar10,auVar44._8_8_,uVar7 == auVar44._0_8_);

        FUN_002a1b60(uVar10,extraout_x1_11,1);

        uVar22 = FUN_0029a900(IVar28);

        if (uVar7 == uVar22) {

          FUN_0029c3c0(IVar28);

          auVar44 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_00299100(IVar28);

          auVar44 = _objc_retainAutoreleasedReturnValue();

        }

        FUN_0029e360(uVar10,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

        FUN_0029cb60(0x3ff0000000000000,uVar10);

        bVar2 = true;

        uVar11 = extraout_x1_12;

      }

      else {

        FUN_0029d360(uVar10,extraout_x1_08,1);

        FUN_002a2420(uVar10,extraout_x1_09,0);

        FUN_002a1b60(uVar10,extraout_x1_10,1);

        FUN_00299100(IVar28);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e360(uVar10,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

        uVar22 = FUN_0029a900(IVar28);

        uVar11 = 0x3ff0000000000000;

        if (uVar7 != uVar22) {

          uVar11 = 0;

        }

        FUN_0029cb60(uVar11,uVar10);

        auVar44 = FUN_0029a900(IVar28);

        uVar11 = auVar44._8_8_;

        bVar2 = uVar7 == auVar44._0_8_;

      }

      FUN_002a23c0(uVar10,uVar11,bVar2);

      uVar6 = FUN_00297b60(uVar10);

      FUN_0029c700(uVar10,extraout_x1_13,uVar6 ^ 1);

      uVar11 = extraout_x1_14;

      if (lVar8 == 0) {

LAB_002799ac:

        FUN_002a4680(&_OBJC_CLASS___NSString,uVar11,&cf_xzy_liquid_tab__ld);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029c740(uVar10,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

      }

      else {

        auVar44 = FUN_0029a900(local_408);

        uVar11 = auVar44._8_8_;

        if (uVar7 != auVar44._0_8_) goto LAB_002799ac;

        FUN_0029c740(uVar10,uVar11,&cf_xzy_liquid_return);

      }

      _objc_release(uVar10);

      IVar28 = local_408;

      uVar7 = uVar7 + 1;

      FUN_002a4d60(local_408);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      lVar16 = FUN_00293860();

      _objc_release(uVar10);

    } while ((long)uVar7 < lVar16);

  }

  lVar16 = FUN_0029a7e0(IVar28);

  if (lVar16 < 0) {

    lVar16 = FUN_0029a900(IVar28);

  }

  else {

    lVar16 = FUN_0029a7e0(IVar28);

  }

  dVar31 = dVar30 + -9.6;

  if (dVar31 <= 1.0) {

    dVar31 = 1.0;

  }

  dVar14 = dVar32 + -9.6;

  dVar36 = dVar31;

  if (dVar14 <= dVar31) {

    dVar36 = dVar14;

  }

  dVar41 = dVar30 * (double)lVar16 + 4.8;

  local_420 = (dVar32 - dVar36) * 0.5;

  dVar37 = (double)_CGRectGetMidX(dVar41,local_420,dVar31,dVar36);

  local_428 = dVar36;

  dVar36 = (double)_CGRectGetMidY(dVar41,local_420,dVar31,dVar36);

  FUN_0029c3e0(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  uStack_388 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

  local_390 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

  uStack_378 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

  uStack_380 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

  uStack_368 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

  local_370 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

  FUN_002a21c0(auVar44._0_8_,auVar44._8_8_,&local_390);

  _objc_release(auVar44._0_8_);

  FUN_0029c3e0(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  dVar30 = local_428;

  FUN_00270fb0(dVar41,local_420,dVar31,local_428);

  _objc_release(uVar10);

  dVar30 = (double)_CGRectGetHeight(dVar41,local_420,dVar31,dVar30);

  FUN_0029c3e0(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(dVar30 * 0.5);

  _objc_release(uVar11);

  _objc_release(uVar10);

  FUN_0029c3c0(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_00299e20(dVar41,local_420,dVar31,local_428,IVar28,auVar44._8_8_,auVar44._0_8_,bVar24,local_418

               ,0);

  _objc_release(auVar44._0_8_);

  FUN_002a5120(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  uVar7 = FUN_00290f60();

  _objc_release(uVar10);

  if ((uVar7 & 1) == 0) {

    FUN_0029c3c0(IVar28);

    lVar16 = _objc_retainAutoreleasedReturnValue();

    if (lVar16 == 0) {

      uStack_3a8 = 0;

      local_3b0 = 0;

      uStack_398 = 0;

      local_3a0 = 0;

      uStack_3b8 = 0;

      local_3c0 = 0;

    }

    else {

      FUN_0029a680(&local_3c0,lVar16);

    }

    IVar28 = local_408;

    FUN_0029c3e0(local_408);

    auVar44 = _objc_retainAutoreleasedReturnValue();

    uStack_388 = uStack_3b8;

    local_390 = local_3c0;

    uStack_378 = uStack_3a8;

    uStack_380 = local_3b0;

    uStack_368 = uStack_398;

    local_370 = local_3a0;

    FUN_002a21c0(auVar44._0_8_,auVar44._8_8_,&local_390);

    _objc_release(auVar44._0_8_);

    _objc_release(lVar16);

    FUN_0029c440(IVar28);

    FUN_002a5de0(IVar28);

  }

  FUN_0029c3c0(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  dVar30 = (double)FUN_002916a0();

  _objc_release(uVar10);

  IVar28 = local_408;

  if (dVar30 != (double)fVar29) {

    if (bVar24 == 0) {

      FUN_0029c3c0(local_408);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_00297e40();

      auVar44 = _objc_retainAutoreleasedReturnValue();

      uVar11 = auVar44._0_8_;

      FUN_002a44a0(&cf_xzy_liquid_motion_,auVar44._8_8_,&cf_opacity);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      uVar15 = auVar44._0_8_;

      FUN_0029b260(uVar11,auVar44._8_8_,uVar15);

    }

    else {

      uVar17 = 0x3fcc28f5c28f5c29;

      if (lVar8 != 0 || local_418 != 9.88131291682493e-324) {

        uVar17 = 0x3fc70a3d70a3d70a;

      }

      uVar18 = 0x3fbeb851eb851eb8;

      if (lVar8 != 0 || local_418 != 9.88131291682493e-324) {

        uVar18 = 0x3faeb851eb851eb8;

      }

      if (lVar8 != 0) {

        uVar18 = 0;

      }

      FUN_0029c3c0(local_408);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_00297e40();

      uVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_002993c0(local_494,&_OBJC_CLASS___NSNumber);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c3c0(IVar28);

      uVar19 = _objc_retainAutoreleasedReturnValue();

      FUN_002916a0();

      FUN_002993a0(&_OBJC_CLASS___NSNumber);

      uVar23 = _objc_retainAutoreleasedReturnValue();

      FUN_0026fc38(uVar17,uVar18,uVar11,uVar15,uVar23);

      _objc_release(uVar23);

      _objc_release(uVar19);

    }

    _objc_release(uVar15);

    _objc_release(uVar11);

    _objc_release(uVar10);

  }

  IVar28 = local_408;

  FUN_00299ee0(local_408);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  bVar2 = lVar12 == 1;

  local_418 = 129.6;

  if (!bVar2) {

    local_418 = 0.0;

  }

  local_420 = 1.0;

  if (!bVar2) {

    local_420 = 0.0;

  }

  FUN_0029e5e0(dVar34,dVar43,dVar40 - local_418,dVar32);

  _objc_release(uVar10);

  lVar12 = FUN_0029a520(IVar28);

  FUN_0029a960(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  dVar30 = 50.4;

  if (lVar12 != 2) {

    dVar30 = 0.0;

  }

  uVar11 = 0x3ff0000000000000;

  if (lVar12 != 2) {

    uVar11 = 0;

  }

  FUN_0029e5e0(dVar42,dVar43,dVar35 - dVar30,dVar32);

  _objc_release(uVar10);

  dVar42 = (double)_CGRectGetMaxX(dVar42,dVar43,dVar35,dVar32);

  dVar31 = dVar43 + 4.8;

  FUN_00290e40(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(dVar42 + -52.8,dVar31,0x404a666666666666,dVar14);

  _objc_release(uVar10);

  FUN_00290e40(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cb60(uVar11);

  _objc_release(uVar10);

  FUN_00290e40(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c700(auVar44._0_8_,auVar44._8_8_,dVar30 == 0.0);

  _objc_release(auVar44._0_8_);

  dVar30 = (double)_CGRectGetMaxX(dVar34,dVar43,dVar40,dVar32);

  FUN_0029a6c0(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(dVar30 + -129.6,dVar31,0x4045999999999999,dVar14);

  _objc_release(uVar10);

  dVar30 = (double)_CGRectGetMaxX(dVar34,dVar43,dVar40,dVar32);

  FUN_00299ec0(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(dVar30 + -86.39999999999999,dVar31,0x4045999999999999,dVar14);

  _objc_release(uVar10);

  dVar30 = (double)_CGRectGetMaxX(dVar34,dVar43,dVar40,dVar32);

  FUN_00299200(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(dVar30 + -43.199999999999996,dVar31,0x4045999999999999,dVar14);

  _objc_release(uVar10);

  FUN_00299200(IVar28);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  dVar30 = local_420;

  FUN_0029cb60(local_420);

  FUN_00299ec0(IVar28);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cb60(dVar30);

  FUN_0029a6c0(IVar28);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cb60(dVar30);

  _objc_release(uVar15);

  _objc_release(uVar11);

  _objc_release(uVar10);

  FUN_00299200(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_002a23c0(auVar44._0_8_,auVar44._8_8_,bVar2);

  FUN_00299ec0(IVar28);

  auVar45 = _objc_retainAutoreleasedReturnValue();

  FUN_002a23c0(auVar45._0_8_,auVar45._8_8_,bVar2);

  FUN_0029a6c0(IVar28);

  auVar46 = _objc_retainAutoreleasedReturnValue();

  FUN_002a23c0(auVar46._0_8_,auVar46._8_8_,bVar2);

  _objc_release(auVar46._0_8_);

  _objc_release(auVar45._0_8_);

  _objc_release(auVar44._0_8_);

  bVar2 = local_418 == 0.0;

  FUN_00299200(IVar28);

  auVar44 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c700(auVar44._0_8_,auVar44._8_8_,bVar2);

  FUN_00299ec0(IVar28);

  auVar45 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c700(auVar45._0_8_,auVar45._8_8_,bVar2);

  FUN_0029a6c0(IVar28);

  auVar46 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c700(auVar46._0_8_,auVar46._8_8_,bVar2);

  _objc_release(auVar46._0_8_);

  _objc_release(auVar45._0_8_);

  _objc_release(auVar44._0_8_);

  uVar10 = local_410;

  uStack_3d8 = 0;

  local_3e0 = 0;

  uStack_3c8 = 0;

  uStack_3d0 = 0;

  lStack_3f8 = 0;

  local_400 = 0;

  uStack_3e8 = 0;

  local_3f0 = (long *)0x0;

  _objc_retain(local_410);

  lVar12 = FUN_00293880(uVar10,extraout_x1_15,&local_400,auStack_280,0x10);

  if (lVar12 != 0) {

    lVar16 = *local_3f0;

    do {

      lVar27 = 0;

      do {

        if (*local_3f0 != lVar16) {

          _objc_enumerationMutation(local_410);

        }

        uVar10 = *(undefined8 *)(lStack_3f8 + lVar27 * 8);

        FUN_0029ff40(uVar10);

        FUN_00297ee0(uVar10);

        lVar27 = lVar27 + 1;

      } while (lVar12 != lVar27);

      lVar12 = FUN_00293880(local_410,extraout_x1_16,&local_400,auStack_280,0x10);

    } while (lVar12 != 0);

  }

  _objc_release(local_410);

  FUN_00277594(uVar9,bVar24);

  if (((lVar8 == 0) && (uVar7 = FUN_002a5580(local_408), (uVar7 & 1) == 0)) && (bVar3 == false)) {

    FUN_002a5120(local_408);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_00290f60();

    if (((uVar6 & 1) == 0) && (bVar24 == 1)) {

      _objc_release(uVar10);

      dVar31 = dVar37;

      if ((dVar33 != dVar37) || (dVar31 = dVar36, dVar38 != dVar36)) {

LAB_0027a398:

        IVar28 = local_408;

        FUN_002a5120(local_408);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        uVar7 = FUN_00290f60();

        _objc_release(uVar10);

        if ((uVar7 & 1) == 0) {

          FUN_00291780(dVar37,dVar36,uStack_488,local_490,IVar28);

        }

        else {

          FUN_0029c3c0(IVar28);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_00271c80();

          _objc_release(uVar10);

          FUN_0029c3e0(IVar28);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_00271c80();

          _objc_release(uVar10);

          FUN_002a5120(IVar28);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          iVar5 = FUN_002948e0();

          if (iVar5 == 0) {

            FUN_002a5120(IVar28);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            dVar30 = (double)FUN_002a4f00();

            _objc_release(uVar11);

            _objc_release(uVar10);

            if ((dVar30 != dVar37) || (dVar31 != dVar36)) goto LAB_0027a428;

            FUN_002a5120(local_408);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            FUN_0029aee0();

          }

          else {

            _objc_release(uVar10);

LAB_0027a428:

            IVar28 = local_408;

            FUN_0029c3c0(local_408);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            FUN_0029a620();

            uVar11 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b7c0();

            _objc_release(uVar11);

            _objc_release(uVar10);

            FUN_00299100(IVar28);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            FUN_0029a620();

            uVar11 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b7c0();

            _objc_release(uVar11);

            _objc_release(uVar10);

            FUN_002a5120(IVar28);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            uVar10 = auVar44._0_8_;

            FUN_002a28c0(dVar37,dVar36,uStack_488,local_490,uVar10,auVar44._8_8_,bVar24);

          }

          _objc_release(uVar10);

        }

      }

    }

    else {

      _objc_release(uVar10);

      if (uVar6 != 0) goto LAB_0027a398;

    }

  }

  FUN_002930a0(&_OBJC_CLASS___CATransaction);

  FUN_002a0c80(0,local_408);

  _objc_release(local_410);

  _objc_release(uVar9);

  _objc_release(lVar13);

LAB_0027a2a8:

  if (*(long *)PTR____stack_chk_guard_00388738 != local_b0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




