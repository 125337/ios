// FUN_000b14fc @0xb14fc


undefined8

FUN_000b14fc(undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,

            undefined8 param_5,double *param_6)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar6;

  long lVar7;

  bool bVar8;

  undefined **ppuVar9;

  double dVar10;

  undefined8 uVar11;

  double dVar12;

  double dVar13;

  double dVar14;

  

  _objc_retain();

  bVar8 = false;

  lVar7 = 0;

  dVar14 = 1.7976931348623157e+308;

LAB_000b1554:

  ppuVar9 = &PTR_s_m_playingImageView_0038b060 + lVar7;

  lVar7 = lVar7 + 1;

  do {

    FUN_000b3444(param_5,*ppuVar9);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    uVar6 = param_2;

    dVar12 = param_3;

    dVar13 = param_4;

    if (((lVar2 != 0) &&

        (uVar3 = FUN_002978a0(lVar2), uVar6 = param_2, dVar12 = param_3, dVar13 = param_4,

        (uVar3 & 1) == 0)) &&

       (dVar10 = (double)FUN_002916a0(lVar2), uVar6 = param_2, dVar12 = param_3, dVar13 = param_4,

       0.01 < dVar10)) {

      FUN_002a4880(lVar2);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      uVar6 = param_2;

      dVar12 = param_3;

      dVar13 = param_4;

      if ((lVar4 != 0) &&

         (iVar1 = FUN_00297700(lVar2,extraout_x1,param_5), uVar6 = param_2, dVar12 = param_3,

         dVar13 = param_4, iVar1 != 0)) {

        FUN_002a4880(lVar2);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00295600(lVar2);

        uVar11 = FUN_00293720(uVar5,extraout_x1_00,param_5);

        uVar6 = param_2;

        dVar12 = param_3;

        dVar13 = param_4;

        _objc_release(uVar5);

        if ((0.5 < param_3) && (0.5 < param_4)) break;

      }

    }

    _objc_release(lVar2);

    lVar7 = lVar7 + 1;

    ppuVar9 = ppuVar9 + 1;

    param_2 = uVar6;

    param_3 = dVar12;

    param_4 = dVar13;

    if (lVar7 == 4) {

      if (bVar8) goto LAB_000b1660;

      uVar6 = 0;

      goto LAB_000b1670;

    }

  } while( true );

  dVar12 = (double)_CGRectGetMinY(uVar11,param_2);

  if (dVar12 <= dVar14) {

    dVar14 = dVar12;

  }

  _objc_release(lVar2);

  bVar8 = true;

  if (lVar7 == 3) {

LAB_000b1660:

    *param_6 = dVar14;

    uVar6 = 1;

LAB_000b1670:

    _objc_release(param_5);

    return uVar6;

  }

  goto LAB_000b1554;

}




