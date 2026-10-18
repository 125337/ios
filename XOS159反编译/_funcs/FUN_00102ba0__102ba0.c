// FUN_00102ba0 @0x102ba0


void FUN_00102ba0(undefined1 param_1 [16],double param_2,undefined8 param_3,undefined8 param_4,

                 long param_5)



{

  cfstringStruct *pcVar1;

  bool bVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  ulong uVar9;

  ulong uVar10;

  undefined8 uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  ulong uVar12;

  long lVar13;

  double dVar14;

  long lVar15;

  double dVar17;

  undefined8 uVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  double dVar23;

  undefined1 auVar24 [16];

  long lVar16;

  

  _objc_retain();

  _objc_retainAutorelease(param_3);

  lVar3 = FUN_00290a40();

  lVar13 = 0;

  if ((-1 < param_5) && (lVar3 != 0)) {

    if (DAT_003e7ec8 == 0) {

      lVar3 = _objc_alloc_init(&_OBJC_CLASS___NSCache);

      lVar13 = DAT_003e7ec8;

      DAT_003e7ec8 = lVar3;

      _objc_release(lVar13);

      FUN_0029d860(DAT_003e7ec8,extraout_x1,0x1e);

    }

    FUN_000ff4a8();

    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf___;

    if (pcVar4 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar4;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar4);

    FUN_00104648(param_4);

    auVar24 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar24._8_8_,&cf_____p_____ld);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar24._0_8_);

    FUN_00299520(DAT_003e7ec8,extraout_x1_00,uVar5);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) {

      dVar14 = (double)FUN_0029bda0(param_3);

      lVar13 = DAT_003e7fe0;

      lVar8 = DAT_003e7fd0;

      lVar15 = DAT_003e7fc8;

      lVar16 = DAT_003e7fd8;

      if ((DAT_003e7fc0 == '\x01') ||

         (lVar13 = DAT_003e6888, lVar8 = DAT_003e6878, lVar15 = DAT_003e6870, lVar16 = DAT_003e6880,

         DAT_003e7ed9 == '\x01')) {

        dVar22 = (double)lVar16;

        dVar21 = (double)lVar15;

        dVar20 = (double)lVar8;

        dVar23 = (double)lVar13;

      }

      else {

        bVar2 = (int)param_4 == 0;

        param_2 = 25.0;

        dVar23 = 25.0;

        if (bVar2) {

          dVar23 = 15.0;

        }

        dVar20 = 15.0;

        if (bVar2) {

          dVar20 = 25.0;

        }

        dVar22 = 18.0;

        dVar21 = 18.0;

      }

      FUN_002a3d80(param_3);

      dVar17 = (double)FUN_002a3d80(param_3);

      if (dVar21 <= 0.0) {

        dVar21 = 0.0;

      }

      if (dVar20 <= 0.0) {

        dVar20 = 0.0;

      }

      if (dVar22 <= 0.0) {

        dVar22 = 0.0;

      }

      if (param_2 < dVar22 + dVar21 + 4.0) {

        dVar19 = (param_2 + -4.0) / (dVar22 + dVar21);

        dVar21 = dVar21 * dVar19;

        dVar22 = dVar22 * dVar19;

      }

      if (dVar17 < dVar23 + dVar20 + 4.0) {

        dVar17 = (dVar17 + -4.0) / (dVar23 + dVar20);

        dVar20 = dVar20 * dVar17;

        dVar23 = dVar23 * dVar17;

      }

      dVar21 = (double)FUN_00104734(dVar21);

      FUN_0029b880(param_3,extraout_x1_01,1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease(param_3);

      FUN_00290a40();

      lVar13 = _CGImageGetWidth();

      dVar17 = (double)(ulong)(lVar13 + (long)(dVar14 * 80.0)) / dVar14;

      dVar19 = (double)(ulong)((long)(dVar14 * 40.0) * 3) / dVar14;

      _UIGraphicsBeginImageContextWithOptions(dVar17,dVar19,dVar14,0);

      FUN_00294900(0,0,dVar17,dVar19,uVar6);

      _UIGraphicsGetImageFromCurrentImageContext();

      uVar7 = _objc_retainAutoreleasedReturnValue();

      _UIGraphicsEndImageContext();

      _objc_retainAutorelease(uVar7);

      lVar8 = FUN_00290a40();

      if (lVar8 == 0) {

        lVar13 = 0;

      }

      else {

        uVar18 = FUN_0029bda0(uVar7);

        uVar9 = _CGImageGetWidth(lVar8);

        uVar10 = _CGImageGetHeight(lVar8);

        lVar13 = 0;

        if ((uVar9 != 0) && (2 < uVar10)) {

          uVar12 = uVar10 * param_5;

          dVar14 = (double)(uVar12 / 3);

          lVar8 = _CGImageCreateWithImageInRect

                            (0,dVar14,(double)uVar9,(double)((uVar10 + uVar12) / 3 - uVar12 / 3),

                             lVar8);

          lVar13 = 0;

          if (lVar8 != 0) {

            auVar24 = FUN_00296500(uVar7);

            FUN_002965a0(uVar18,&_OBJC_CLASS___UIImage,auVar24._8_8_,lVar8,auVar24._0_8_);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            _CGImageRelease(lVar8);

            dVar17 = (double)FUN_002a3d80(uVar11);

            FUN_002a3d80(uVar11);

            if (param_5 != 0) {

              dVar21 = 2.0;

            }

            if (param_5 != 2) {

              dVar22 = 2.0;

            }

            if (dVar17 < dVar20 + dVar23 + 4.0) {

              dVar17 = (dVar17 + -4.0) / (dVar20 + dVar23);

              dVar20 = dVar20 * dVar17;

              dVar23 = dVar23 * dVar17;

            }

            if (dVar14 < dVar21 + dVar22 + 4.0) {

              dVar14 = (dVar14 + -4.0) / (dVar21 + dVar22);

              dVar21 = dVar21 * dVar14;

              dVar22 = dVar22 * dVar14;

            }

            FUN_00104734(dVar21,dVar20,dVar22,dVar23,uVar18);

            FUN_0029b880(uVar11,extraout_x1_02,1);

            auVar24 = _objc_retainAutoreleasedReturnValue();

            lVar13 = auVar24._0_8_;

            if (lVar13 != 0) {

              FUN_002a0060(DAT_003e7ec8,auVar24._8_8_,lVar13,uVar5);

            }

            _objc_release(uVar11);

          }

        }

      }

      _objc_release(uVar7);

      _objc_release(uVar6);

    }

    else {

      _objc_retain(lVar3);

      lVar13 = lVar3;

    }

    _objc_release(lVar3);

    _objc_release(uVar5);

    _objc_release(pcVar1);

  }

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(lVar13);

  return;

}




