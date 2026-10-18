// FUN_00092c6c @0x92c6c


void FUN_00092c6c(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5)



{

  cfstringStruct *pcVar1;

  uint uVar2;

  bool bVar3;

  byte bVar4;

  int iVar5;

  uint uVar6;

  uint uVar7;

  long lVar8;

  undefined8 uVar9;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  double dVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  undefined1 auVar20 [16];

  

  FUN_00082e7c();

  if ((DAT_003e74b9 != '\x01') || ((DAT_003e74d8 & 1) == 0)) {

    FUN_00293940(param_5);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar8 != 0) {

      FUN_00293940(param_5);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b340();

      _objc_release(uVar9);

      FUN_0029d880(param_5,extraout_x1_00,0);

      return;

    }

    return;

  }

  if ((DAT_003e74da == '\x01') && (iVar5 = FUN_000a176c(param_5), iVar5 != 0)) {

    FUN_00293940(param_5);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar8 != 0) {

      FUN_00293940(param_5);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b340();

      _objc_release(uVar9);

      FUN_0029d880(param_5,extraout_x1,0);

    }

    _objc_setAssociatedObject(param_5,"coverImagePath",0,1);

    _objc_setAssociatedObject(param_5,"coverIsSelfAvatar",0,1);

    return;

  }

  uVar9 = FUN_00297a60(param_5);

  uVar6 = (uint)uVar9;

  if (uVar6 == 0) {

    FUN_002958c0(param_5);

    lVar8 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002958e0(param_5);

    lVar8 = _objc_retainAutoreleasedReturnValue();

  }

  if (lVar8 == 0) {

    FUN_002958a0(param_5);

    lVar8 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00293940(param_5);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar10 == 0) {

LAB_00093108:

    FUN_00293940(param_5);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar10 != 0) {

      FUN_00293940(param_5);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b340();

      _objc_release(uVar12);

      FUN_0029d880(param_5,extraout_x1_02,0);

    }

    if (lVar8 == 0) goto LAB_00093528;

    FUN_000a18d8(lVar8);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    if (lVar11 != 0) {

      FUN_002925a0(param_5);

      FUN_002925a0(param_5);

      dVar17 = param_3;

      if (param_4 <= param_3) {

        dVar17 = param_4;

      }

      dVar19 = DAT_003e79b0 / 100.0;

      if (DAT_003e79b0 <= 0.0) {

        dVar19 = 1.0;

      }

      dVar18 = (double)FUN_000a1824(dVar17 * dVar19,lVar11);

      dVar17 = dVar19;

      FUN_00299b20(lVar8);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002984e0();

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar12);

      auVar20 = FUN_00297820(lVar10,extraout_x1_03,&cf_gif);

      if ((auVar20._0_8_ & 1) == 0) {

        bVar4 = FUN_00297820(lVar10,auVar20._8_8_,&cf_webp);

      }

      else {

        bVar4 = 1;

      }

      lVar13 = _NSClassFromString(&cf_SDAnimatedImageView);

      if ((lVar13 != 0 & bVar4) == 1) {

        auVar20 = _objc_alloc_init();

        uVar12 = auVar20._0_8_;

        FUN_0029d880(param_5,auVar20._8_8_,uVar12);

      }

      else {

        auVar20 = _objc_alloc_init(&_OBJC_CLASS___UIImageView);

        uVar12 = auVar20._0_8_;

        FUN_0029d880(param_5,auVar20._8_8_,uVar12);

      }

      _objc_release(uVar12);

      FUN_00293940(param_5);

      auVar20 = _objc_retainAutoreleasedReturnValue();

      FUN_0029ec00(auVar20._0_8_,auVar20._8_8_,lVar11);

      _objc_release(auVar20._0_8_);

      FUN_00293940(param_5);

      auVar20 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d6c0(auVar20._0_8_,auVar20._8_8_,1);

      _objc_release(auVar20._0_8_);

      FUN_00293940(param_5);

      auVar20 = _objc_retainAutoreleasedReturnValue();

      FUN_002a23c0(auVar20._0_8_,auVar20._8_8_,0);

      _objc_release(auVar20._0_8_);

      FUN_00293940(param_5);

      auVar20 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0420(auVar20._0_8_,auVar20._8_8_,0);

      _objc_release(auVar20._0_8_);

      FUN_00293940(param_5);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00296480();

      lVar13 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar12);

      if (lVar13 != 0) {

        FUN_00293940(param_5);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        pcVar1 = &cf_CoverMask_Self;

        if (uVar6 == 0) {

          pcVar1 = &cf_CoverMask_Other;

        }

        FUN_0029c740(auVar20._0_8_,auVar20._8_8_,pcVar1);

        _objc_release(auVar20._0_8_);

        if (uVar6 == 0) {

          FUN_00293940(param_5);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_0029e5e0((param_3 - dVar18) * 0.5,(param_4 - dVar19) * 0.5,dVar18,dVar19);

          _objc_release(uVar12);

          FUN_00293940(param_5);

          auVar20 = _objc_retainAutoreleasedReturnValue();

          lVar13 = auVar20._0_8_;

          FUN_00291380(param_5,auVar20._8_8_,lVar13);

        }

        else {

          FUN_002a4880(param_5);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          if (lVar13 != 0) {

            dVar16 = (double)FUN_00295600(param_5);

            FUN_00293940(param_5);

            uVar12 = _objc_retainAutoreleasedReturnValue();

            FUN_0029e5e0((param_3 - dVar18) * 0.5 + dVar16,(param_4 - dVar19) * 0.5 + dVar17,dVar18,

                         dVar19);

            _objc_release(uVar12);

            FUN_00293940(param_5);

            auVar20 = _objc_retainAutoreleasedReturnValue();

            FUN_00291380(lVar13,auVar20._8_8_,auVar20._0_8_);

            _objc_release(auVar20._0_8_);

          }

        }

        _objc_release(lVar13);

        _objc_setAssociatedObject(param_5,"coverImagePath",lVar8,1);

        FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_04,uVar9);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,"coverIsSelfAvatar",uVar9,1);

        _objc_release(uVar9);

        FUN_00291220(param_5);

      }

      goto LAB_00093518;

    }

  }

  else {

    _objc_getAssociatedObject(param_5,"coverImagePath");

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_5,"coverIsSelfAvatar");

    lVar10 = _objc_retainAutoreleasedReturnValue();

    if (lVar10 == 0) {

      uVar7 = 0;

      uVar2 = 0;

      if (uVar6 == 0) goto LAB_00092f14;

LAB_00092ec8:

      FUN_00293940(param_5);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4880();

      lVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4880(param_5);

      lVar14 = _objc_retainAutoreleasedReturnValue();

      bVar3 = lVar13 == lVar14;

      _objc_release();

    }

    else {

      uVar7 = FUN_002924e0(lVar10);

      uVar2 = uVar7;

      if (uVar6 != 0) goto LAB_00092ec8;

LAB_00092f14:

      uVar7 = uVar2;

      FUN_00293940(param_5);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4880();

      lVar13 = _objc_retainAutoreleasedReturnValue();

      bVar3 = lVar13 == param_5;

    }

    _objc_release(lVar13);

    _objc_release(uVar12);

    iVar5 = FUN_00297820(lVar11,extraout_x1_01,lVar8);

    if ((iVar5 == 0) || (((uVar6 ^ uVar7 ^ 1) & (uint)bVar3) != 1)) {

      _objc_release(lVar10);

      _objc_release(lVar11);

      goto LAB_00093108;

    }

    FUN_00293940(param_5);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4880();

    lVar13 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar9);

    if (lVar13 != 0) {

      FUN_00293940(param_5);

      lVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4840(lVar13);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00297d80();

      lVar15 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar9);

      _objc_release(lVar14);

      if (lVar14 != lVar15) {

        FUN_00293940(param_5);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        FUN_002925e0(lVar13,auVar20._8_8_,auVar20._0_8_);

        _objc_release(auVar20._0_8_);

      }

    }

    FUN_002925a0(param_5);

    FUN_002925a0(param_5);

    dVar17 = param_3;

    if (param_4 <= param_3) {

      dVar17 = param_4;

    }

    dVar18 = DAT_003e79b0 / 100.0;

    dVar19 = dVar18;

    if (DAT_003e79b0 <= 0.0) {

      dVar19 = 1.0;

    }

    FUN_00293940(param_5);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00296480();

    uVar12 = _objc_retainAutoreleasedReturnValue();

    dVar19 = (double)FUN_000a1824(dVar17 * dVar19);

    dVar17 = dVar18;

    _objc_release(uVar12);

    _objc_release(uVar9);

    if (uVar6 == 0) {

      FUN_00293940(param_5);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e5e0((param_3 - dVar19) * 0.5,(param_4 - dVar18) * 0.5,dVar19,dVar18);

    }

    else {

      dVar16 = (double)FUN_00295600(param_5);

      FUN_00293940(param_5);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e5e0((param_3 - dVar19) * 0.5 + dVar16,(param_4 - dVar18) * 0.5 + dVar17,dVar19,dVar18

                  );

    }

    _objc_release(uVar9);

    _objc_release(lVar13);

LAB_00093518:

    _objc_release(lVar10);

  }

  _objc_release(lVar11);

LAB_00093528:

  _objc_release(lVar8);

  return;

}




