// FUN_000923d0 @0x923d0


void FUN_000923d0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  byte bVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  ulong uVar8;

  long lVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  double dVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  undefined1 auVar16 [16];

  

  if ((DAT_003e74b9 != '\x01') || ((DAT_003e74d8 & 1) == 0)) {

    FUN_00293940(param_5);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 == 0) {

      return;

    }

    FUN_00293940(param_5);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b340();

LAB_00092494:

    _objc_release(uVar4);

    FUN_0029d880(param_5,extraout_x1,0);

    return;

  }

  if (DAT_003e74d9 == '\x01') {

    FUN_00293940(param_5);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 == 0) {

      return;

    }

    FUN_00293940(param_5);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b340();

    goto LAB_00092494;

  }

  if ((DAT_003e74da == '\x01') && (iVar2 = FUN_000a176c(param_5), iVar2 != 0)) {

    FUN_00293940(param_5);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 != 0) {

      FUN_00293940(param_5);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b340();

      _objc_release(uVar4);

      FUN_0029d880(param_5,extraout_x1_00,0);

    }

    _objc_setAssociatedObject(param_5,"coverImagePath",0,1);

    return;

  }

  FUN_002a4880(param_5);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) goto LAB_00092b40;

  FUN_002958a0(param_5);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  if (lVar5 == 0) {

    FUN_00293940(param_5);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar6 != 0) {

      FUN_00293940(param_5);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b340();

      _objc_release(uVar4);

      FUN_0029d880(param_5,extraout_x1_01,0);

    }

  }

  else {

    _objc_getAssociatedObject(param_5,"coverImagePath");

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00293940(param_5);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) {

LAB_00092814:

      FUN_00293940(param_5);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar6 != 0) {

        FUN_00293940(param_5);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b340();

        _objc_release(uVar7);

        FUN_0029d880(param_5,extraout_x1_02,0);

      }

      FUN_000a18d8(lVar5);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if (lVar6 != 0) {

        _objc_retain(lVar3);

        lVar11 = lVar3;

        do {

          iVar2 = FUN_00292e20(lVar11);

          if (iVar2 != 0) {

            FUN_0029d4a0(lVar11,extraout_x1_03,0);

          }

          FUN_00297e40(lVar11);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          iVar2 = FUN_00298a60();

          _objc_release(uVar7);

          if (iVar2 != 0) {

            FUN_00297e40(lVar11);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_0029f960(auVar16._0_8_,auVar16._8_8_,0);

            _objc_release(auVar16._0_8_);

          }

          uVar7 = _objc_opt_class(&_OBJC_CLASS___UITableViewCell);

          uVar8 = _objc_opt_isKindOfClass(lVar11,uVar7);

          lVar9 = lVar11;

          if ((uVar8 & 1) != 0) break;

          FUN_002a4880(lVar11);

          lVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar11);

          lVar11 = lVar9;

        } while (lVar9 != 0);

        FUN_002925a0(param_5);

        FUN_002925a0(param_5);

        dVar15 = param_3;

        if (param_4 <= param_3) {

          dVar15 = param_4;

        }

        dVar12 = (DAT_003e79b0 + 20.0) / 100.0;

        if (DAT_003e79b0 <= 0.0) {

          dVar12 = 1.2;

        }

        dVar13 = (double)FUN_000a1824(dVar15 * dVar12,lVar6);

        dVar15 = dVar12;

        dVar14 = (double)FUN_00295600(param_5);

        FUN_00299b20(lVar5);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002984e0();

        uVar10 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar7);

        auVar16 = FUN_00297820(uVar10,extraout_x1_04,&cf_gif);

        if ((auVar16._0_8_ & 1) == 0) {

          bVar1 = FUN_00297820(uVar10,auVar16._8_8_,&cf_webp);

        }

        else {

          bVar1 = 1;

        }

        lVar11 = _NSClassFromString(&cf_SDAnimatedImageView);

        dVar14 = (param_3 - dVar13) * 0.5 + dVar14;

        dVar15 = (param_4 - dVar12) * 0.5 + dVar15;

        if ((lVar11 != 0 & bVar1) == 1) {

          _objc_alloc();

          auVar16 = FUN_00296b80(dVar14,dVar15,dVar13,dVar12);

          uVar7 = auVar16._0_8_;

          FUN_0029d880(param_5,auVar16._8_8_,uVar7);

        }

        else {

          _objc_alloc(&_OBJC_CLASS___UIImageView);

          auVar16 = FUN_00296b80(dVar14,dVar15,dVar13,dVar12);

          uVar7 = auVar16._0_8_;

          FUN_0029d880(param_5,auVar16._8_8_,uVar7);

        }

        _objc_release(uVar7);

        FUN_00293940(param_5);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_0029ec00(auVar16._0_8_,auVar16._8_8_,lVar6);

        _objc_release(auVar16._0_8_);

        FUN_00293940(param_5);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d6c0(auVar16._0_8_,auVar16._8_8_,1);

        _objc_release(auVar16._0_8_);

        FUN_00293940(param_5);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00291380(lVar3,auVar16._8_8_,auVar16._0_8_);

        _objc_release(auVar16._0_8_);

        _objc_setAssociatedObject(param_5,"coverImagePath",lVar5,1);

        _objc_release(uVar10);

        _objc_release(lVar9);

      }

    }

    else {

      FUN_00293940(param_5);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4880();

      auVar16 = _objc_retainAutoreleasedReturnValue();

      lVar11 = auVar16._0_8_;

      if (lVar11 != lVar3) {

        _objc_release(lVar11);

        _objc_release(uVar7);

        _objc_release(lVar6);

        goto LAB_00092814;

      }

      iVar2 = FUN_00297820(uVar4,auVar16._8_8_,lVar5);

      _objc_release(lVar11);

      _objc_release(uVar7);

      _objc_release(lVar6);

      if (iVar2 == 0) goto LAB_00092814;

      FUN_00293940(param_5);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4840(lVar3);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00297d80();

      lVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar7);

      _objc_release(lVar6);

      if (lVar6 != lVar11) {

        FUN_00293940(param_5);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002925e0(lVar3,auVar16._8_8_,auVar16._0_8_);

        _objc_release(auVar16._0_8_);

      }

      FUN_002925a0(param_5);

      FUN_002925a0(param_5);

      dVar15 = param_3;

      if (param_4 <= param_3) {

        dVar15 = param_4;

      }

      dVar13 = (DAT_003e79b0 + 20.0) / 100.0;

      dVar12 = dVar13;

      if (DAT_003e79b0 <= 0.0) {

        dVar12 = 1.2;

      }

      FUN_00293940(param_5);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00296480();

      uVar10 = _objc_retainAutoreleasedReturnValue();

      dVar12 = (double)FUN_000a1824(dVar15 * dVar12);

      dVar15 = dVar13;

      _objc_release(uVar10);

      _objc_release(uVar7);

      dVar14 = (double)FUN_00295600(param_5);

      FUN_00293940(param_5);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e5e0((param_3 - dVar12) * 0.5 + dVar14,(param_4 - dVar13) * 0.5 + dVar15,dVar12,dVar13

                  );

    }

    _objc_release(lVar6);

    _objc_release(uVar4);

  }

  _objc_release(lVar5);

LAB_00092b40:

  _objc_release(lVar3);

  return;

}




