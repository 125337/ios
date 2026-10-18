// FUN_00234210 @0x234210


void FUN_00234210(long param_1)



{

  undefined *puVar1;

  char cVar2;

  uint uVar3;

  uint uVar4;

  int iVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  ulong uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  long lVar14;

  undefined8 uVar15;

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

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  undefined8 extraout_x1_22;

  undefined8 extraout_x1_23;

  undefined8 extraout_x1_24;

  undefined8 extraout_x1_25;

  undefined8 extraout_x1_26;

  undefined8 extraout_x1_27;

  undefined8 extraout_x1_28;

  undefined8 extraout_x1_29;

  undefined8 extraout_x1_30;

  ulong uVar16;

  long lVar17;

  undefined8 uVar18;

  long lVar19;

  double dVar20;

  code *pcVar21;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  undefined8 local_2f8;

  undefined *local_2e8;

  undefined8 local_2e0;

  code *local_2d8;

  undefined *puStack_2d0;

  undefined8 local_2c8;

  undefined *local_2c0;

  undefined8 local_2b8;

  code *local_2b0;

  undefined *puStack_2a8;

  undefined8 local_2a0;

  undefined *local_298;

  undefined8 uStack_290;

  code *local_288;

  undefined *puStack_280;

  long local_278;

  double dStack_270;

  undefined *local_268;

  undefined8 uStack_260;

  code *local_258;

  undefined *puStack_250;

  long local_248;

  double dStack_240;

  undefined *local_238;

  undefined8 local_230;

  code *local_228;

  undefined *puStack_220;

  undefined1 auStack_218 [8];

  undefined *local_210;

  undefined8 local_208;

  code *local_200;

  undefined *puStack_1f8;

  undefined1 auStack_1f0 [8];

  undefined1 auStack_1e8 [8];

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 local_180;

  long lStack_178;

  long *local_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined *local_140;

  undefined8 uStack_138;

  code *local_130;

  undefined *puStack_128;

  long local_120;

  double dStack_118;

  long local_b8;

  

  local_b8 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7260);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar6 != 0) {

    FUN_00235cf4(param_1);

    goto LAB_002354b0;

  }

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7288);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002924e0();

  _objc_release(uVar7);

  _objc_retain(param_1);

  if (param_1 == 0) {

LAB_00234528:

    _objc_release(param_1);

    FUN_0023d46c(param_1);

  }

  else {

    if (DAT_003e7298 < 100) {

      if (DAT_003e7298 == 3) goto LAB_00234304;

      goto LAB_00234528;

    }

    FUN_0023d02c(param_1);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar6 == 0) goto LAB_00234528;

LAB_00234304:

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e7258);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    if (lVar6 == 0) {

LAB_00234518:

      _objc_release(lVar6);

LAB_00234520:

      _objc_release(lVar6);

      goto LAB_00234528;

    }

    FUN_002a6520(lVar6);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if (((lVar14 == 0) || (uVar16 = FUN_002978a0(lVar6), (uVar16 & 1) != 0)) ||

       (dVar20 = (double)FUN_002916a0(lVar6), dVar20 <= 0.01)) {

      _objc_release(lVar14);

      goto LAB_00234518;

    }

    uVar16 = FUN_00297b60(lVar6);

    _objc_release(lVar14);

    if ((uVar16 & 1) == 0) goto LAB_00234518;

    FUN_002a62a0(lVar6,extraout_x1,&DAT_00002455);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(lVar6);

    if (lVar14 == 0) goto LAB_00234520;

    FUN_0024527c(param_1);

    FUN_0029d4a0(param_1,extraout_x1_00,0);

    FUN_00297e40(param_1);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_0029f960(auVar22._0_8_,auVar22._8_8_,0);

    _objc_release(auVar22._0_8_);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(param_1,auVar22._8_8_,auVar22._0_8_);

    _objc_release(auVar22._0_8_);

    uStack_158 = 0;

    local_160 = 0;

    uStack_148 = 0;

    uStack_150 = 0;

    lStack_178 = 0;

    local_180 = 0;

    uStack_168 = 0;

    local_170 = (long *)0x0;

    FUN_002a4840(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar8 = FUN_002937a0();

    _objc_release(uVar7);

    lVar14 = FUN_00293880(uVar8,extraout_x1_01,&local_180,&local_140,0x10);

    if (lVar14 != 0) {

      lVar17 = *local_170;

      do {

        lVar19 = 0;

        do {

          if (*local_170 != lVar17) {

            _objc_enumerationMutation(uVar8);

          }

          uVar9 = *(undefined8 *)(lStack_178 + lVar19 * 8);

          auVar22 = FUN_002364d8(uVar9,param_1);

          uVar7 = auVar22._8_8_;

          if ((auVar22._0_8_ & 1) == 0) {

            FUN_002385bc(uVar9);

            uVar7 = extraout_x1_02;

          }

          lVar19 = lVar19 + 1;

        } while (lVar14 != lVar19);

        lVar14 = FUN_00293880(uVar8,uVar7,&local_180,&local_140,0x10);

      } while (lVar14 != 0);

    }

    _objc_release(uVar8);

    FUN_0029e8a0(lVar6,extraout_x1_03,0);

    FUN_0029cb60(0x3ff0000000000000,lVar6);

    FUN_002a23c0(lVar6,extraout_x1_04,1);

    FUN_0024545c(param_1,lVar6);

    _objc_release(lVar6);

    _objc_release(param_1);

  }

  FUN_0029ff40(param_1);

  FUN_00297ee0(param_1);

  uVar4 = FUN_0023d2c4(param_1);

  _objc_retain(param_1);

  iVar5 = FUN_0023d2c4(param_1);

  if (iVar5 == 0) {

    FUN_00297be0(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar8 = FUN_00293860();

    _objc_release(uVar7);

    FUN_0023ae90(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_alloc(&objc::class_t::XZYHomeDockSwipePopup);

    auVar22 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

    local_2f8 = auVar22._0_8_;

    FUN_002a1c00(local_2f8,auVar22._8_8_,param_1);

    FUN_002a23c0(local_2f8,extraout_x1_07,1);

    FUN_00293060(0x3ff0000000000000,0x3feeb851eb851eb8,&_OBJC_CLASS___UIColor);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00293060(0x3fbeb851eb851eb8,0x3feeb851eb851eb8,&_OBJC_CLASS___UIColor);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00231604(uVar9,uVar10);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(local_2f8,auVar22._8_8_,auVar22._0_8_);

    _objc_release(auVar22._0_8_);

    _objc_release(uVar10);

    _objc_release(uVar9);

    FUN_00297e40(local_2f8);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4036000000000000);

    _objc_release(uVar9);

    FUN_00297e40(local_2f8);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0);

    _objc_release(uVar9);

    FUN_00292400(&_OBJC_CLASS___UIColor);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar10 = FUN_00290a20(uVar9);

    FUN_00297e40(local_2f8);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1460(auVar22._0_8_,auVar22._8_8_,uVar10);

    _objc_release(auVar22._0_8_);

    _objc_release(uVar9);

    FUN_00297e40(local_2f8);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a14a0(0x3e23d70a);

    _objc_release(uVar9);

    FUN_00297e40(local_2f8);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a14e0(0x4036000000000000);

    _objc_release(uVar9);

    FUN_00297e40(local_2f8);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1480(0,0x4028000000000000);

    _objc_release(uVar9);

    FUN_002318f4(param_1);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    uVar16 = 0;

    uVar9 = *(undefined8 *)PTR__UIFontWeightSemibold_00388430;

    while( true ) {

      auVar22 = FUN_00293860(uVar7);

      if (auVar22._0_8_ <= (long)uVar16) break;

      FUN_00299500(uVar7,auVar22._8_8_,uVar16);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      uVar11 = FUN_002974a0();

      _objc_release(uVar10);

      FUN_00238874(param_1,uVar11);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e5e0(0x4024000000000000,(double)uVar16 * 52.0 + 8.0,0x4067c00000000000);

      FUN_00297e40(uVar10);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4030000000000000);

      _objc_release(uVar15);

      _objc_retain(uVar10);

      _objc_retain(param_1);

      FUN_002a27e0(uVar10,extraout_x1_08,param_1);

      FUN_002a2800(uVar10,extraout_x1_09,uVar11);

      FUN_0029d660(uVar10,extraout_x1_10,1);

      FUN_002a4ac0(0x4030000000000000,uVar9,&_OBJC_CLASS___UIFont);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a53a0(uVar10);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e520(auVar22._0_8_,auVar22._8_8_,uVar15);

      _objc_release(auVar22._0_8_);

      _objc_release(uVar15);

      FUN_0029d640(0,0x4034000000000000,0,0x404b000000000000,uVar10);

      FUN_0029ec40(0,0,0,0x4030000000000000,uVar10);

      FUN_00249798(uVar11,param_1);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar22._8_8_,&cf___);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1f80(uVar10,auVar23._8_8_,auVar23._0_8_,0);

      _objc_release(auVar23._0_8_);

      _objc_release(auVar22._0_8_);

      if (DAT_003eb269 == '\x01') {

        FUN_00236a48(uVar11,0);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 == 0) goto LAB_00234b0c;

        FUN_00236cac(lVar14);

        lVar17 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar14);

        if (lVar17 == 0) goto LAB_00234b0c;

LAB_00234b4c:

        dVar20 = DAT_003e7250;

        _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

        dVar20 = dVar20 * 0.6;

        uVar15 = FUN_00296e00(dVar20,dVar20);

        local_140 = PTR___NSConcreteStackBlock_003886f0;

        uStack_138 = 0xc2000000;

        local_130 = FUN_00249a34;

        puStack_128 = &DAT_0038f988;

        _objc_retain(lVar17);

        local_120 = lVar17;

        dStack_118 = dVar20;

        FUN_00296560(uVar15,extraout_x1_12,&local_140);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar17);

        _objc_release(local_120);

        _objc_release(uVar15);

        uVar15 = extraout_x1_13;

      }

      else {

LAB_00234b0c:

        FUN_00248b94(uVar11,uVar8);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0023720c(0x4032000000000000,uVar15,6);

        lVar17 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar15);

        if (lVar17 != 0) goto LAB_00234b4c;

        uVar18 = 0;

        uVar15 = extraout_x1_11;

      }

      FUN_0029ec20(uVar10,uVar15,uVar18,0);

      FUN_00293060(0x3fc1eb851eb851ec,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00293060(0x3fed70a3d70a3d71,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00231604(uVar15,uVar12);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar12);

      _objc_release(uVar15);

      FUN_002a1fc0(uVar10,extraout_x1_14,uVar13,0);

      FUN_002a1f40(uVar10,extraout_x1_15,uVar13);

      cVar2 = DAT_003e7268;

      if (DAT_003e7268 == '\x01') {

        FUN_00239d20(uVar11,param_1);

        uVar15 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        uVar15 = 0;

      }

      FUN_0023966c(uVar10,uVar15,0);

      if (cVar2 != '\0') {

        _objc_release(uVar15);

      }

      _objc_release(uVar13);

      _objc_release(uVar18);

      _objc_release(param_1);

      _objc_release(uVar10);

      uVar15 = extraout_x1_16;

      if (uVar11 < 0x8000000000000000 && lVar6 != 0) {

        auVar22 = FUN_0029c2c0(lVar6);

        uVar15 = auVar22._8_8_;

        if (auVar22._0_8_ == uVar11) {

          FUN_00293060(0x3fee147ae147ae14,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_00293060(0x3fcc28f5c28f5c29,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

          uVar18 = _objc_retainAutoreleasedReturnValue();

          FUN_00231604(uVar15,uVar18);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_0029cf60(uVar10,auVar22._8_8_,auVar22._0_8_);

          _objc_release(auVar22._0_8_);

          _objc_release(uVar18);

          _objc_release(uVar15);

          uVar15 = extraout_x1_17;

        }

      }

      FUN_00291380(local_2f8,uVar15,uVar10);

      _objc_release(uVar10);

      uVar16 = uVar16 + 1;

    }

    _objc_release(lVar6);

    _objc_release(uVar7);

  }

  else {

    _objc_retain(param_1);

    FUN_00297be0(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar8 = FUN_00293860();

    _objc_release(uVar7);

    FUN_0023ae90(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_alloc(&objc::class_t::XZYHomeDockFloatingSpreadPopup);

    auVar22 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

    local_2f8 = auVar22._0_8_;

    FUN_002a23c0(local_2f8,auVar22._8_8_,1);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(local_2f8,auVar22._8_8_,auVar22._0_8_);

    _objc_release(auVar22._0_8_);

    FUN_0029d4a0(local_2f8,extraout_x1_05,0);

    lVar6 = 0;

    while( true ) {

      auVar22 = FUN_00293860(uVar7);

      if (auVar22._0_8_ <= lVar6) break;

      FUN_00299500(uVar7,auVar22._8_8_,lVar6);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar10 = FUN_002974a0();

      _objc_release(uVar9);

      FUN_00238874(param_1,uVar10);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      uVar9 = auVar22._0_8_;

      FUN_002a1c80(uVar9,auVar22._8_8_,&DAT_00002468 + lVar6);

      FUN_00291380(local_2f8,extraout_x1_06,uVar9);

      FUN_002491f0(uVar9,param_1,uVar10,uVar8);

      _objc_release(uVar9);

      lVar6 = lVar6 + 1;

    }

    _objc_release(uVar7);

    _objc_release(param_1);

  }

  _objc_release(param_1);

  uVar7 = 0x3ff0000000000000;

  if (uVar4 == 0) {

    uVar7 = 0;

  }

  FUN_0029cb60(uVar7,local_2f8);

  puVar1 = PTR__CGAffineTransformIdentity_00388998;

  uStack_138 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

  local_140 = *(undefined **)PTR__CGAffineTransformIdentity_00388998;

  puStack_128 = *(undefined **)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

  local_130 = *(code **)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

  dStack_118 = *(double *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

  local_120 = *(long *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

  FUN_002a21c0(local_2f8,extraout_x1_18,&local_140);

  FUN_002a4880(param_1);

  lVar14 = _objc_retainAutoreleasedReturnValue();

  lVar6 = param_1;

  if (lVar14 != 0) {

    lVar6 = lVar14;

  }

  _objc_retain(lVar6);

  _objc_release(lVar14);

  uVar7 = _objc_alloc(&objc::class_t::XZYHomeDockPopupBg);

  FUN_002925a0(lVar6);

  uVar7 = FUN_00296b80(uVar7);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  auVar22 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar7,auVar22._8_8_,auVar22._0_8_);

  _objc_release(auVar22._0_8_);

  FUN_0029ce00(uVar7,extraout_x1_19,0x12);

  _objc_initWeak(auStack_1e8,param_1);

  local_210 = PTR___NSConcreteStackBlock_003886f0;

  local_208 = 0xc2000000;

  local_200 = FUN_0023f164;

  puStack_1f8 = &DAT_0038a150;

  _objc_copyWeak(auStack_1f0,auStack_1e8);

  FUN_002a0360(uVar7,extraout_x1_20,&local_210);

  FUN_00291380(lVar6,extraout_x1_21,uVar7);

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e7290,uVar7,1);

  FUN_00291380(lVar6,extraout_x1_22,local_2f8);

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e7260,local_2f8,1);

  FUN_0023f1a4(param_1,local_2f8);

  FUN_00295600(local_2f8);

  dVar20 = (double)_CGRectGetWidth();

  if (dVar20 <= 1.0) {

LAB_00235114:

    FUN_0029b340(local_2f8);

    FUN_0029b340(uVar7);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7260,0,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7290,0,1);

    if ((uVar3 & 1) == 0) {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e7288,PTR____kCFBooleanTrue_00388320,1);

      _objc_initWeak(&local_140,param_1);

      local_238 = PTR___NSConcreteStackBlock_003886f0;

      local_230 = 0xc2000000;

      local_228 = FUN_0023f9e8;

      puStack_220 = &DAT_0038a150;

      _objc_copyWeak(auStack_218,&local_140);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_238);

      _objc_destroyWeak(auStack_218);

      _objc_destroyWeak(&local_140);

    }

    else {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e7288,0,1);

    }

  }

  else {

    FUN_00295600(local_2f8);

    dVar20 = (double)_CGRectGetHeight();

    pcVar21 = (code *)0x3ff0000000000000;

    if (dVar20 <= 1.0) goto LAB_00235114;

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7288,0,1);

    if ((uVar4 & 1) == 0) {

      _CGAffineTransformMakeScale(&local_268,0x3feeb851eb851eb8,0x3feeb851eb851eb8);

      uStack_138 = uStack_260;

      local_140 = local_268;

      puStack_128 = puStack_250;

      local_130 = local_258;

      dStack_118 = dStack_240;

      local_120 = local_248;

      FUN_002a21c0(local_2f8,extraout_x1_23,&local_140);

      pcVar21 = local_258;

    }

    iVar5 = FUN_0023cfb8(param_1);

    if (iVar5 == 0) {

      local_2e8 = PTR___NSConcreteStackBlock_003886f0;

      local_2e0 = 0xc2000000;

      local_2d8 = FUN_0023faa8;

      puStack_2d0 = &DAT_00388e60;

      _objc_retain(local_2f8);

      local_2c8 = local_2f8;

      FUN_002917e0(0x3fc70a3d70a3d70a,0,&_OBJC_CLASS___UIView,extraout_x1_26,0x20000,&local_2e8,0);

      uVar8 = local_2c8;

    }

    else {

      FUN_0023d02c(param_1);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      if (uVar4 == 0) {

        _CGAffineTransformMakeScale(&local_140,0x3fee147ae147ae14,0x3fee147ae147ae14);

        _CGAffineTransformMakeTranslation(&local_180,0,0x402c000000000000);

        _CGAffineTransformConcat(&local_298,&local_140,&local_180);

        uStack_138 = uStack_290;

        local_140 = local_298;

        puStack_128 = puStack_280;

        local_130 = local_288;

        dStack_118 = dStack_270;

        local_120 = local_278;

        FUN_002a21c0(local_2f8,extraout_x1_27,&local_140);

      }

      else {

        _objc_retain(local_2f8);

        uVar10 = FUN_00244e10(param_1,local_2f8);

        uStack_158 = 0;

        local_160 = 0;

        uStack_148 = 0;

        uStack_150 = 0;

        lStack_178 = 0;

        local_180 = 0;

        uStack_168 = 0;

        local_170 = (long *)0x0;

        FUN_00244f44(local_2f8);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar22._0_8_;

        lVar14 = FUN_00293880(uVar9,auVar22._8_8_,&local_180,&local_140,0x10);

        if (lVar14 == 0) {

          _objc_release(uVar9);

          _objc_release(local_2f8);

        }

        else {

          lVar17 = *local_170;

          do {

            lVar19 = 0;

            do {

              if (*local_170 != lVar17) {

                _objc_enumerationMutation(uVar9);

              }

              uVar18 = *(undefined8 *)(lStack_178 + lVar19 * 8);

              FUN_00297e40(uVar18);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_0029b220();

              _objc_release(uVar15);

              FUN_0029cb60(0,uVar18);

              FUN_0024514c(&local_1b0,uVar10,pcVar21,uVar18);

              uStack_1d8 = uStack_1a8;

              local_1e0 = local_1b0;

              uStack_1c8 = uStack_198;

              uStack_1d0 = uStack_1a0;

              uStack_1b8 = uStack_188;

              local_1c0 = local_190;

              FUN_002a21c0(uVar18,extraout_x1_24,&local_1e0);

              lVar19 = lVar19 + 1;

            } while (lVar14 != lVar19);

            lVar14 = FUN_00293880(uVar9,extraout_x1_25,&local_180,&local_140,0x10);

          } while (lVar14 != 0);

          _objc_release(uVar9);

          _objc_release(local_2f8);

        }

      }

      FUN_0023d0d8(uVar8,1,uVar4);

      if (uVar4 == 0) {

        local_2c0 = PTR___NSConcreteStackBlock_003886f0;

        local_2b8 = 0xc2000000;

        local_2b0 = FUN_0023fa54;

        puStack_2a8 = &DAT_00388e60;

        _objc_retain(local_2f8);

        local_2a0 = local_2f8;

        FUN_00291800(0x3fd5c28f5c28f5c3,0,0x3fe6666666666666,0x3fe6666666666666,

                     &_OBJC_CLASS___UIView,extraout_x1_30,6,&local_2c0,0);

        _objc_release(local_2a0);

      }

      else {

        FUN_0029cb60(0x3ff0000000000000,local_2f8);

        uStack_138 = *(undefined8 *)(puVar1 + 8);

        local_140 = *(undefined **)puVar1;

        puStack_128 = *(undefined **)(puVar1 + 0x18);

        local_130 = *(code **)(puVar1 + 0x10);

        dStack_118 = *(double *)(puVar1 + 0x28);

        local_120 = *(long *)(puVar1 + 0x20);

        FUN_002a21c0(local_2f8,extraout_x1_28,&local_140);

        _objc_retain(local_2f8);

        FUN_00244f44(local_2f8);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        uVar16 = 0;

        while( true ) {

          auVar22 = FUN_00293860(uVar9);

          if (auVar22._0_8_ <= (long)uVar16) break;

          FUN_00299500(uVar9,auVar22._8_8_,uVar16);

          lVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_00297e40();

          uVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_0029b220();

          _objc_release(uVar10);

          local_140 = PTR___NSConcreteStackBlock_003886f0;

          uStack_138 = 0xc2000000;

          local_130 = FUN_00249c00;

          puStack_128 = &DAT_00388e60;

          _objc_retain(lVar14);

          local_120 = lVar14;

          FUN_00291800(0x3fd0a3d70a3d70a4,(double)uVar16 * 0.12,0x3fe70a3d70a3d70a,

                       0x3fe6666666666666,&_OBJC_CLASS___UIView,extraout_x1_29,6,&local_140,0);

          _objc_release(local_120);

          _objc_release(lVar14);

          uVar16 = uVar16 + 1;

        }

        _objc_release(uVar9);

        _objc_release(local_2f8);

      }

    }

    _objc_release(uVar8);

  }

  _objc_destroyWeak(auStack_1f0);

  _objc_destroyWeak(auStack_1e8);

  _objc_release(uVar7);

  _objc_release(lVar6);

  _objc_release(local_2f8);

LAB_002354b0:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b8) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




