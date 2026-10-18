// FUN_002220c8 @0x2220c8


void FUN_002220c8(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5,uint param_6,long param_7,long param_8,uint param_9)



{

  bool bVar1;

  bool bVar2;

  undefined *puVar3;

  uint uVar4;

  int iVar5;

  uint uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  ulong uVar11;

  long lVar12;

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

  undefined8 uVar13;

  double dVar14;

  undefined8 uVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  double dVar23;

  undefined1 auVar24 [16];

  undefined1 auVar25 [16];

  undefined *local_160;

  undefined8 local_158;

  code *local_150;

  undefined *puStack_148;

  undefined1 auStack_140 [8];

  undefined *local_138;

  undefined8 local_130;

  code *local_128;

  undefined *puStack_120;

  undefined1 auStack_118 [8];

  undefined *local_110;

  undefined8 local_108;

  code *local_100;

  undefined *puStack_f8;

  undefined1 auStack_f0 [8];

  undefined1 auStack_e8 [8];

  double local_e0;

  double dStack_d8;

  double local_d0;

  double dStack_c8;

  double local_c0;

  double dStack_b8;

  double local_b0;

  double dStack_a8;

  

  _objc_retain();

  _objc_retain(param_7);

  _objc_retain(param_8);

  if (param_7 == 0) goto LAB_00222998;

  FUN_0021a71c(param_7);

  _objc_getAssociatedObject(param_5,&DAT_003eae53);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  if (lVar7 != 0) {

    FUN_0029b340(lVar7);

    _objc_setAssociatedObject(param_5,&DAT_003eae53,0,1);

  }

  uVar4 = FUN_00221ddc(param_7);

  if (((param_9 & 1) == 0) && (((uVar4 ^ 1) & 1) == 0)) {

    FUN_0011afe4(param_7);

  }

  FUN_0021676c(param_7);

  _objc_setAssociatedObject(param_5,&DAT_003eae6c,0,1);

  _objc_setAssociatedObject(param_5,&DAT_003eae6d,0,1);

  _objc_setAssociatedObject(param_5,&DAT_003eaf10,0,1);

  FUN_002925a0(param_7);

  dVar20 = 24.0;

  if (param_3 <= DAT_003e7160 * 92.0 + 24.0) {

    bVar1 = false;

  }

  else {

    FUN_002925a0(param_7);

    dVar20 = 160.0;

    bVar1 = DAT_003e7160 * 62.4 + 160.0 < param_4;

  }

  _objc_getAssociatedObject(param_5,&DAT_003ead83);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_5,&DAT_003eae52);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  bVar2 = false;

  if (param_8 != 0) {

    bVar2 = bVar1;

  }

  if (bVar2) {

    FUN_0020e91c(param_5);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    if (lVar10 == 0) {

LAB_00222310:

      dVar20 = DAT_003e7160 * 4.0;

    }

    else {

      auVar24 = FUN_002974a0(lVar10);

      uVar13 = FUN_0029ade0(param_7,auVar24._8_8_,auVar24._0_8_);

      uVar11 = _CGRectIsNull(uVar13,dVar20,param_3,param_4);

      if ((((uVar11 & 1) != 0) ||

          (uVar11 = _CGRectIsEmpty(uVar13,dVar20,param_3,param_4), (uVar11 & 1) != 0)) ||

         (dVar20 = dVar20 + DAT_003e7160 * 4.0, dVar20 < 0.0)) goto LAB_00222310;

    }

    dVar19 = 4.0;

    FUN_002993a0(dVar20,&_OBJC_CLASS___NSNumber);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_5,&DAT_003eaef7,uVar13,1);

    _objc_release(uVar13);

    FUN_00295600(param_7);

    dVar14 = (double)_CGRectGetMinY();

    FUN_002935e0(param_7);

    dStack_d8 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

    local_e0 = *(double *)PTR__CGRectZero_00388bf0;

    dStack_c8 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

    local_d0 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

    local_c0 = local_e0;

    dStack_b8 = dStack_d8;

    local_b0 = local_d0;

    dStack_a8 = dStack_c8;

    FUN_0021a964((dVar20 + dVar14) - dVar19,param_5,param_7,&local_c0,&local_e0);

    _objc_initWeak(auStack_e8,param_5);

    if (lVar8 == 0) {

      _objc_alloc(&objc::class_t::XZYCLGHorizontalBarView);

      lVar8 = FUN_00296b80(local_c0,dStack_b8,local_b0,dStack_a8);

      _objc_setAssociatedObject(param_5,&DAT_003ead83,lVar8,1);

      FUN_00291380(param_8,extraout_x1_00,lVar8);

      bVar1 = true;

    }

    else {

      FUN_002a4880(lVar8);

      lVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar12 == param_8) {

        bVar1 = false;

      }

      else {

        FUN_0029b340(lVar8);

        FUN_00291380(param_8,extraout_x1,lVar8);

        bVar1 = true;

      }

    }

    FUN_002a4840(param_8);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00297d80();

    lVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar13);

    if (lVar12 != lVar8) {

      FUN_002925e0(param_8,extraout_x1_01,lVar8);

    }

    puVar3 = PTR___NSConcreteStackBlock_003886f0;

    local_110 = PTR___NSConcreteStackBlock_003886f0;

    local_108 = 0xc2000000;

    local_100 = FUN_00222e50;

    puStack_f8 = &DAT_0038a150;

    _objc_copyWeak(auStack_f0,auStack_e8);

    FUN_002a01a0(lVar8,extraout_x1_02,&local_110);

    if ((DAT_003e715e & 1) == 0) {

      if (lVar9 != 0) {

        FUN_0029b340(lVar9);

        _objc_setAssociatedObject(param_5,&DAT_003eae52,0,1);

        _objc_release(lVar9);

      }

      lVar9 = 0;

    }

    else {

      if (lVar9 == 0) {

        _objc_alloc(&objc::class_t::XZYCLGHorizontalOrbButton);

        lVar9 = FUN_00296b80(local_e0,dStack_d8,local_d0,dStack_c8);

        _objc_setAssociatedObject(param_5,&DAT_003eae52,lVar9,1);

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        auVar25 = FUN_002924c0(auVar24._0_8_,auVar24._8_8_,

                               &cf_xzyChatListGroupingHorizontalSearchOrbExpanded);

        FUN_0029e1e0(lVar9,auVar25._8_8_,auVar25._0_8_);

        _objc_release(auVar24._0_8_);

        iVar5 = FUN_00294ea0(lVar9);

        FUN_002a53a0(lVar9);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        uVar15 = 0x3ff0000000000000;

        if (iVar5 == 0) {

          uVar15 = 0;

        }

        FUN_0029cb60(uVar15);

        _objc_release(uVar13);

        local_138 = puVar3;

        local_130 = 0xc2000000;

        local_128 = FUN_0022329c;

        puStack_120 = &DAT_0038a150;

        _objc_copyWeak(auStack_118,auStack_e8);

        FUN_002a0360(lVar9,extraout_x1_04,&local_138);

        local_160 = puVar3;

        local_158 = 0xc2000000;

        local_150 = FUN_002233dc;

        puStack_148 = &DAT_0038a150;

        _objc_copyWeak(auStack_140,auStack_e8);

        FUN_002a0240(lVar9,extraout_x1_05,&local_160);

        FUN_00291380(param_8,extraout_x1_06,lVar9);

        _objc_destroyWeak(auStack_140);

        _objc_destroyWeak(auStack_118);

      }

      else {

        FUN_002a4880(lVar9);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar12 != param_8) {

          FUN_0029b340(lVar9);

          FUN_00291380(param_8,extraout_x1_03,lVar9);

        }

      }

      FUN_002a4840(param_8);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00297d80();

      lVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar13);

      if (lVar12 != lVar9) {

        FUN_002925e0(param_8,extraout_x1_07,lVar9);

      }

    }

    dVar23 = dStack_a8;

    dVar19 = local_b0;

    dVar14 = dStack_b8;

    dVar20 = local_c0;

    dVar22 = local_b0;

    dVar18 = dStack_a8;

    dVar16 = (double)_CGRectGetMaxY(local_c0,dStack_b8);

    FUN_00295600(param_7);

    dVar17 = (double)_CGRectGetMinY();

    dVar21 = -50.0;

    if (dVar17 + -50.0 <= dVar16) {

      dVar20 = (double)_CGRectGetMinY(dVar20,dVar14);

      FUN_00295600(param_7);

      dVar14 = (double)_CGRectGetMaxY();

      dVar21 = 50.0;

      uVar4 = (uint)(dVar14 + 50.0 < dVar20);

    }

    else {

      uVar4 = 1;

      dVar19 = dVar22;

      dVar23 = dVar18;

    }

    uVar6 = FUN_002978a0(lVar8);

    if (uVar4 != uVar6) {

      FUN_0029e8a0(lVar8,extraout_x1_08,uVar4);

    }

    auVar24 = FUN_00294ea0(lVar9);

    FUN_002a1020(lVar8,auVar24._8_8_,auVar24._0_8_);

    dVar18 = (double)FUN_00295600(lVar8);

    dVar20 = dStack_b8;

    dVar14 = local_b0;

    dVar22 = dStack_a8;

    if (((0.5 <= ABS(dVar18 - local_c0)) || (0.5 <= ABS(dVar21 - dStack_b8))) ||

       ((0.5 <= ABS(dVar19 - local_b0) || (0.5 <= ABS(dVar23 - dStack_a8))))) {

      FUN_0029e5e0(lVar8);

    }

    uVar6 = FUN_002978a0(lVar9);

    if (uVar4 != uVar6) {

      FUN_0029e8a0(lVar9,extraout_x1_09,uVar4);

    }

    dVar19 = (double)FUN_00295600(lVar9);

    if (((0.5 <= ABS(dVar19 - local_e0)) || (0.5 <= ABS(dVar20 - dStack_d8))) ||

       ((0.5 <= ABS(dVar14 - local_d0) || (0.5 <= ABS(dVar22 - dStack_c8))))) {

      FUN_0029e5e0(lVar9);

    }

    if ((param_9 & 1) == 0) {

      if ((param_6 & 1) == 0 && !bVar1) {

        FUN_00294d00(lVar8);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar12 != 0) goto LAB_00222958;

      }

      FUN_00222d90(param_5);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00220818();

      auVar24 = _objc_retainAutoreleasedReturnValue();

      FUN_00293360(lVar8,auVar24._8_8_,auVar24._0_8_,param_5);

      _objc_release(auVar24._0_8_);

      _objc_release(uVar13);

    }

LAB_00222958:

    FUN_0021a2c4(param_5,param_7);

    _objc_destroyWeak(auStack_f0);

    _objc_destroyWeak(auStack_e8);

    _objc_release(lVar10);

  }

  else {

    if (lVar8 != 0) {

      FUN_0029b340(lVar8);

      _objc_setAssociatedObject(param_5,&DAT_003ead83,0,1);

    }

    if (lVar9 != 0) {

      FUN_0029b340(lVar9);

      _objc_setAssociatedObject(param_5,&DAT_003eae52,0,1);

    }

    _objc_setAssociatedObject(param_5,&DAT_003eaef7,0,1);

    FUN_00221d5c(param_7);

  }

  _objc_release(lVar9);

  _objc_release(lVar8);

  _objc_release(lVar7);

LAB_00222998:

  _objc_release(param_8);

  _objc_release(param_7);

  _objc_release(param_5);

  return;

}




