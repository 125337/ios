// showMenu @0x27eb48


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::showMenu(ID param_1,SEL param_2)



{

  undefined4 uVar1;

  int iVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  undefined8 uVar26;

  undefined8 uVar27;

  undefined8 uVar28;

  undefined8 uVar29;

  undefined8 uVar30;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar31 [16];

  undefined1 auVar32 [16];

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

  undefined8 local_2b0;

  undefined8 uStack_2a8;

  undefined8 uStack_2a0;

  undefined8 uStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  undefined8 uStack_280;

  undefined8 uStack_278;

  undefined8 local_270;

  undefined8 uStack_268;

  undefined8 uStack_260;

  undefined8 uStack_258;

  undefined8 local_250;

  undefined8 uStack_248;

  undefined8 uStack_240;

  undefined8 uStack_238;

  undefined8 local_228;

  undefined8 uStack_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 local_208;

  undefined8 uStack_200;

  undefined8 uStack_1f8;

  undefined8 uStack_1f0;

  undefined8 local_1e8;

  undefined8 uStack_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 local_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 uStack_1b0;

  undefined1 auStack_1a8 [128];

  undefined1 auStack_128 [128];

  long local_a8;

  

  local_a8 = *(long *)PTR____stack_chk_guard_00388738;

  uVar3 = FUN_00298c60();

  if ((uVar3 & 1) == 0) {

    FUN_002a6520(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != 0) {

      FUN_0029fbc0(param_1,extraout_x1,1);

      auVar31 = FUN_0029a520(param_1);

      FUN_0029fba0(param_1,auVar31._8_8_,auVar31._0_8_ == 2);

      uVar5 = _objc_alloc(&objc::class_t::XZYDockLiquidOverlay);

      FUN_002a6520(param_1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      auVar31 = FUN_00296b80(uVar5);

      FUN_002a0500(param_1,auVar31._8_8_,auVar31._0_8_);

      _objc_release(auVar31._0_8_);

      _objc_release(uVar6);

      FUN_002999c0(param_1);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_0029ce00(auVar31._0_8_,auVar31._8_8_,0x12);

      _objc_release(auVar31._0_8_);

      FUN_002999c0(param_1);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_0029de00(auVar31._0_8_,auVar31._8_8_,param_1);

      _objc_release(auVar31._0_8_);

      FUN_002999c0(param_1);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_002913c0(auVar31._0_8_,auVar31._8_8_,param_1,"outsideTap",0x40);

      _objc_release(auVar31._0_8_);

      auVar31 = _objc_alloc_init(&objc::class_t::XZYDockLiquidMovingView);

      FUN_0029fac0(param_1,auVar31._8_8_,auVar31._0_8_);

      _objc_release(auVar31._0_8_);

      FUN_00298b40(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_00297e40();

      uVar6 = _objc_retainAutoreleasedReturnValue();

      uVar22 = 0x3ff0000000000000;

      FUN_0029cc00(0x3fe0000000000000,0x3ff0000000000000);

      _objc_release(uVar6);

      _objc_release(uVar5);

      FUN_00298b40(param_1);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c740(auVar31._0_8_,auVar31._8_8_,&cf_xzy_liquid_menu);

      _objc_release(auVar31._0_8_);

      FUN_00298b40(param_1);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c7c0(auVar31._0_8_,auVar31._8_8_,1);

      _objc_release(auVar31._0_8_);

      iVar2 = FUN_00298c40(param_1);

      if (iVar2 == 0) {

        FUN_00298900(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_0029fb20(param_1,auVar31._8_8_,auVar31._0_8_);

        _objc_release(auVar31._0_8_);

        FUN_00298b40(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00298ba0(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_00291380(uVar5,auVar31._8_8_,auVar31._0_8_);

        _objc_release(auVar31._0_8_);

        _objc_release(uVar5);

        auVar31 = _objc_alloc(&objc::class_t::XZYDockPlaylistTable);

        uVar22 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

        in_d2 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

        in_d3 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18);

        auVar31 = FUN_00296be0(*(undefined8 *)PTR__CGRectZero_00388bf0,uVar22,in_d2,in_d3,

                               auVar31._0_8_,auVar31._8_8_,0);

        FUN_0029fb80(param_1,auVar31._8_8_,auVar31._0_8_);

        _objc_release(auVar31._0_8_);

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00298c00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(auVar31._0_8_,auVar31._8_8_,uVar5);

        _objc_release(auVar31._0_8_);

        _objc_release(uVar5);

        FUN_00298c00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_002a13e0(auVar31._0_8_,auVar31._8_8_,0);

        _objc_release(auVar31._0_8_);

        FUN_00298c00(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002a0e20(0x404a000000000000);

        _objc_release(uVar5);

        FUN_00298c00(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e140(0);

        _objc_release(uVar5);

        FUN_00298c00(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e180(0);

        _objc_release(uVar5);

        FUN_00298c00(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e160(0);

        _objc_release(uVar5);

        FUN_00298c00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d6a0(auVar31._0_8_,auVar31._8_8_,2);

        _objc_release(auVar31._0_8_);

        FUN_00298c00(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002a10c0(0);

        _objc_release(uVar5);

        FUN_00298c00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cb20(auVar31._0_8_,auVar31._8_8_,0);

        _objc_release(auVar31._0_8_);

        FUN_00298c00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_0029db40(auVar31._0_8_,auVar31._8_8_,param_1);

        _objc_release(auVar31._0_8_);

        FUN_00298c00(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00297e40();

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(0x4032000000000000);

        _objc_release(uVar6);

        _objc_release(uVar5);

        FUN_00298c00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cbe0(auVar31._0_8_,auVar31._8_8_,0);

        _objc_release(auVar31._0_8_);

        FUN_00298c00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_0029dc40(auVar31._0_8_,auVar31._8_8_,0);

        _objc_release(auVar31._0_8_);

        FUN_00298b40(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00298c00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_00291380(uVar5,auVar31._8_8_,auVar31._0_8_);

        _objc_release(auVar31._0_8_);

      }

      else {

        FUN_00298b40(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar31._0_8_;

        FUN_0029c740(uVar5,auVar31._8_8_,&cf_xzy_liquid_fan);

      }

      _objc_release(uVar5);

      uVar3 = FUN_00298c40(param_1);

      if ((uVar3 & 1) == 0) {

        FUN_00299f00(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_00290e40(param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_0029fae0(param_1,auVar31._8_8_,auVar31._0_8_);

      _objc_release(auVar31._0_8_);

      FUN_002999c0(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_00298b40(param_1);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_00291380(uVar5,auVar31._8_8_,auVar31._0_8_);

      _objc_release(auVar31._0_8_);

      _objc_release(uVar5);

      FUN_002a6520(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002999c0(param_1);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_00291380(uVar5,auVar31._8_8_,auVar31._0_8_);

      _objc_release(auVar31._0_8_);

      _objc_release(uVar5);

      FUN_0029ad40(param_1);

      FUN_00291ae0(param_1);

      FUN_002a5a80(param_1,extraout_x1_00,1);

      iVar2 = FUN_00298c40(param_1);

      if (iVar2 != 0) {

        FUN_00291700(param_1);

        uVar1 = *(undefined4 *)PTR__UIAccessibilityLayoutChangedNotification_00388380;

        FUN_00298b80(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00295440();

        uVar6 = _objc_retainAutoreleasedReturnValue();

        _UIAccessibilityPostNotification(uVar1,uVar6);

        _objc_release(uVar6);

        if (*(long *)PTR____stack_chk_guard_00388738 == local_a8) {

          _objc_release(uVar5);

          return;

        }

        goto LAB_0027f8d4;

      }

      FUN_00298b60(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_0027e700();

      FUN_002999c0(param_1);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_00293720(uVar6,uVar22,in_d2,in_d3,param_1,auVar31._8_8_,auVar31._0_8_);

      _objc_release(auVar31._0_8_);

      _objc_release(uVar5);

      uVar3 = _UIAccessibilityIsReduceMotionEnabled();

      if ((uVar3 & 1) == 0) {

        uVar15 = _CGRectGetMidX(uVar6,uVar22,in_d2,in_d3);

        dVar16 = (double)_CGRectGetMinY(uVar6,uVar22,in_d2,in_d3);

        FUN_00298b40(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00297e40();

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002a60e0(uVar15,dVar16 + 8.0,&_OBJC_CLASS___NSValue);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_00298b40(param_1);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00297e40();

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029a100();

        FUN_002a60e0(&_OBJC_CLASS___NSValue);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_0027f8d8(0,uVar7,&cf_position,uVar15,uVar10,0);

        _objc_release(uVar10);

        _objc_release(uVar9);

        _objc_release(uVar8);

        _objc_release(uVar15);

        _objc_release(uVar7);

        _objc_release(uVar5);

        dVar17 = (double)_CGRectGetWidth(uVar6,uVar22,in_d2,in_d3);

        FUN_00298b40(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        dVar18 = (double)_CGRectGetWidth();

        _objc_release(uVar5);

        dVar16 = 0.9;

        if (dVar17 / dVar18 <= 0.9) {

          dVar16 = dVar17 / dVar18;

        }

        if (dVar16 <= 0.25) {

          dVar16 = 0.25;

        }

        _CATransform3DMakeScale(&local_228,dVar16,0x3fb47ae147ae147b,0x3ff0000000000000);

        FUN_00298b40(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00297e40();

        auVar31 = _objc_retainAutoreleasedReturnValue();

        uStack_268 = uStack_1e0;

        local_270 = local_1e8;

        uStack_258 = uStack_1d0;

        uStack_260 = uStack_1d8;

        uStack_248 = uStack_1c0;

        local_250 = local_1c8;

        uStack_238 = uStack_1b0;

        uStack_240 = uStack_1b8;

        uStack_2a8 = uStack_220;

        local_2b0 = local_228;

        uStack_298 = uStack_210;

        uStack_2a0 = uStack_218;

        uStack_288 = uStack_200;

        local_290 = local_208;

        uStack_278 = uStack_1f0;

        uStack_280 = uStack_1f8;

        FUN_002a60a0(&_OBJC_CLASS___NSValue,auVar31._8_8_,&local_2b0);

        auVar32 = _objc_retainAutoreleasedReturnValue();

        uVar10 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x48);

        uVar7 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x40);

        uVar27 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x58);

        uVar23 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x50);

        uVar19 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x68);

        uVar15 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x60);

        uVar28 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x78);

        uVar24 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x70);

        uVar20 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 8);

        uVar8 = *(undefined8 *)PTR__CATransform3DIdentity_00388580;

        uVar29 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x18);

        uVar25 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x10);

        uVar21 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x28);

        uVar9 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x20);

        uVar30 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x38);

        uVar26 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x30);

        local_2b0 = uVar8;

        uStack_2a8 = uVar20;

        uStack_2a0 = uVar25;

        uStack_298 = uVar29;

        local_290 = uVar9;

        uStack_288 = uVar21;

        uStack_280 = uVar26;

        uStack_278 = uVar30;

        local_270 = uVar7;

        uStack_268 = uVar10;

        uStack_260 = uVar23;

        uStack_258 = uVar27;

        local_250 = uVar15;

        uStack_248 = uVar19;

        uStack_240 = uVar24;

        uStack_238 = uVar28;

        FUN_002a60a0(&_OBJC_CLASS___NSValue,auVar32._8_8_,&local_2b0);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_0027f8d8(0,auVar31._0_8_,&cf_transform,auVar32._0_8_,uVar6,0);

        _objc_release(uVar6);

        _objc_release(auVar32._0_8_);

        _objc_release(auVar31._0_8_);

        _objc_release(uVar5);

        FUN_00298b80(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        uVar6 = FUN_00299020();

        _objc_release(uVar5);

        uStack_2c8 = 0;

        local_2d0 = 0;

        uStack_2b8 = 0;

        uStack_2c0 = 0;

        lStack_2e8 = 0;

        local_2f0 = 0;

        uStack_2d8 = 0;

        local_2e0 = (long *)0x0;

        FUN_00298c00(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002a62e0();

        uVar22 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar5);

        lVar4 = FUN_00293880(uVar22,extraout_x1_01,&local_2f0,auStack_128,0x10);

        if (lVar4 != 0) {

          lVar11 = *local_2e0;

          do {

            lVar13 = 0;

            do {

              if (*local_2e0 != lVar11) {

                _objc_enumerationMutation(uVar22);

              }

              FUN_0029bb00(*(undefined8 *)(lStack_2e8 + lVar13 * 8));

              auVar31 = _objc_retainAutoreleasedReturnValue();

              FUN_00291240(uVar6,auVar31._8_8_,auVar31._0_8_);

              _objc_release(auVar31._0_8_);

              lVar13 = lVar13 + 1;

            } while (lVar4 != lVar13);

            lVar4 = FUN_00293880(uVar22,extraout_x1_02,&local_2f0,auStack_128,0x10);

          } while (lVar4 != 0);

        }

        _objc_release(uVar22);

        FUN_00298b80(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_00293860();

        FUN_0029a000(param_1);

        uVar22 = _objc_retainAutoreleasedReturnValue();

        lVar11 = FUN_00293860();

        _objc_release(uVar22);

        _objc_release(uVar5);

        uStack_308 = 0;

        local_310 = 0;

        uStack_2f8 = 0;

        uStack_300 = 0;

        lStack_328 = 0;

        local_330 = 0;

        uStack_318 = 0;

        local_320 = (long *)0x0;

        _objc_retain(uVar6);

        lVar13 = FUN_00293880(uVar6,extraout_x1_03,&local_330,auStack_1a8,0x10);

        if (lVar13 != 0) {

          lVar14 = *local_320;

          do {

            lVar12 = 0;

            do {

              if (*local_320 != lVar14) {

                _objc_enumerationMutation(uVar6);

              }

              uVar22 = *(undefined8 *)(lStack_328 + lVar12 * 8);

              FUN_00297e40(uVar22);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              uVar3 = FUN_002a4e60(uVar22);

              uVar3 = lVar11 + lVar4 + ~uVar3;

              if (4 < uVar3) {

                uVar3 = 5;

              }

              dVar16 = (double)uVar3 * 0.022 + 0.07;

              _CATransform3DMakeTranslation(&local_2b0,0,0x4024000000000000,0);

              FUN_002a60a0(&_OBJC_CLASS___NSValue,extraout_x1_04,&local_2b0);

              auVar31 = _objc_retainAutoreleasedReturnValue();

              local_2b0 = uVar8;

              uStack_2a8 = uVar20;

              uStack_2a0 = uVar25;

              uStack_298 = uVar29;

              local_290 = uVar9;

              uStack_288 = uVar21;

              uStack_280 = uVar26;

              uStack_278 = uVar30;

              local_270 = uVar7;

              uStack_268 = uVar10;

              uStack_260 = uVar23;

              uStack_258 = uVar27;

              local_250 = uVar15;

              uStack_248 = uVar19;

              uStack_240 = uVar24;

              uStack_238 = uVar28;

              FUN_002a60a0(&_OBJC_CLASS___NSValue,auVar31._8_8_,&local_2b0);

              uVar22 = _objc_retainAutoreleasedReturnValue();

              FUN_0027f8d8(dVar16,uVar5,&cf_transform,auVar31._0_8_,uVar22,0);

              _objc_release(uVar22);

              _objc_release(auVar31._0_8_);

              FUN_0026fc38(0x3fc47ae147ae147b,dVar16,uVar5,

                           &PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf790,

                           &PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf7c0);

              _objc_release(uVar5);

              lVar12 = lVar12 + 1;

            } while (lVar13 != lVar12);

            lVar13 = FUN_00293880(uVar6,extraout_x1_05,&local_330,auStack_1a8,0x10);

          } while (lVar13 != 0);

        }

        _objc_release(uVar6);

        _objc_release(uVar6);

        uVar5 = 0x3fc999999999999a;

      }

      else {

        uVar5 = 0x3fc3333333333333;

      }

      FUN_00298b40(param_1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00297e40();

      uVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_0026fc38(uVar5,0,uVar22,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf790,

                   &PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf7c0);

      _objc_release(uVar22);

      _objc_release(uVar6);

      uVar1 = *(undefined4 *)PTR__UIAccessibilityLayoutChangedNotification_00388380;

      FUN_00298b80(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_00295440();

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _UIAccessibilityPostNotification(uVar1,uVar6);

      _objc_release(uVar6);

      _objc_release(uVar5);

    }

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_a8) {

    return;

  }

LAB_0027f8d4:

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




