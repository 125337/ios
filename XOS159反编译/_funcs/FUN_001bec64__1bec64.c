// FUN_001bec64 @0x1bec64


void FUN_001bec64(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  int iVar3;

  long lVar4;

  ulong uVar5;

  long lVar6;

  undefined8 uVar7;

  ulong uVar8;

  ulong uVar9;

  ulong uVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  long lVar15;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined **ppuVar16;

  uint uVar17;

  uint uVar18;

  uint uVar19;

  float fVar20;

  double dVar21;

  double dVar22;

  double dVar23;

  undefined1 auVar24 [16];

  uint local_84;

  

  _objc_retain();

  if ((DAT_003e9789 & 1) == 0) {

    FUN_001bc4e0();

  }

  if ((DAT_003e9788 & 1) == 0) {

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e7090);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) goto LAB_001bed2c;

    ppuVar16 = &PTR_LOOP_003e7090;

  }

  else {

    if (param_5 == 0) goto LAB_001bed2c;

    FUN_002a6520(param_5);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if ((lVar4 == 0) || (uVar5 = FUN_002978a0(param_5), (uVar5 & 1) != 0)) {

LAB_001becd8:

      _objc_release(lVar4);

      goto LAB_001bed2c;

    }

    dVar21 = (double)FUN_002916a0(param_5);

    _objc_release(lVar4);

    if (dVar21 < 0.05) goto LAB_001bed2c;

    _objc_retain(param_5);

    FUN_002a6520(param_5);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

LAB_001bedd4:

      _objc_release(param_5);

    }

    else {

      FUN_00296480(param_5);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if ((lVar6 == 0) || (uVar5 = FUN_002978a0(param_5), (uVar5 & 1) != 0)) {

        _objc_release(lVar6);

        _objc_release(lVar4);

        goto LAB_001bedd4;

      }

      dVar21 = (double)FUN_002916a0(param_5);

      _objc_release(lVar6);

      _objc_release(lVar4);

      if (dVar21 < 0.05) goto LAB_001bedd4;

      _objc_retain(param_5);

      FUN_002925a0(param_5);

      dVar23 = param_3;

      dVar21 = param_4;

      FUN_00296480(param_5);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      uVar8 = FUN_00290a40();

      _objc_release(uVar7);

      FUN_002a4880(param_5);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      FUN_002a6520(param_5);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      iVar3 = FUN_002978a0(param_5);

      dVar22 = (double)FUN_002916a0(param_5);

      uVar5 = 0x9e3779b9;

      if (iVar3 == 0) {

        uVar5 = 0;

      }

      _objc_release(param_5);

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e7098);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e70a0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e70a8);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      uVar5 = (long)(param_4 * 10.0) << 0x11 ^ (long)(param_3 * 10.0) << 1 ^

              uVar8 ^ uVar9 ^ uVar10 ^ uVar5 ^ (long)(dVar22 * 100.0) << 7;

      if (((lVar4 == 0) || (lVar6 = FUN_002a5a20(uVar7), lVar6 != DAT_003e7088)) ||

         (uVar8 = FUN_002a5a20(uVar11), uVar8 != uVar5)) {

        auVar24 = FUN_001bf634(param_5);

        uVar13 = auVar24._8_8_;

        if ((auVar24._0_8_ & 1) == 0) {

          FUN_002925a0(param_5);

          uVar8 = 0;

          dVar23 = ABS(dVar23);

          dVar21 = ABS(dVar21);

          dVar22 = dVar23;

          if (dVar21 <= dVar23) {

            dVar22 = dVar21;

            dVar21 = dVar23;

          }

          uVar13 = extraout_x1_03;

          if ((16.0 <= dVar22) && (dVar21 <= 360.0)) {

            dVar23 = 1.0;

            if (1.0 <= dVar22) {

              dVar23 = dVar22;

            }

            if (1.25 < dVar21 / dVar23) goto LAB_001befc4;

            FUN_001bca50(param_5);

            lVar6 = _objc_retainAutoreleasedReturnValue();

            if (lVar6 == 0) {

              uVar8 = FUN_001bf860(param_5);

              if ((uVar8 & 1) == 0) {

                FUN_001bcba4(param_5);

                lVar15 = _objc_retainAutoreleasedReturnValue();

                if (lVar15 == param_5) {

                  uVar8 = 0;

                }

                else {

                  uVar8 = FUN_001bf8f4(param_5);

                }

                goto LAB_001bf320;

              }

              uVar8 = 1;

            }

            else {

              FUN_001bf6a8(lVar6);

              lVar15 = _objc_retainAutoreleasedReturnValue();

              uVar8 = (ulong)(lVar15 == param_5);

LAB_001bf320:

              _objc_release(lVar15);

            }

            _objc_release(lVar6);

            uVar13 = extraout_x1_04;

          }

        }

        else {

LAB_001befc4:

          uVar8 = 0;

        }

        puVar2 = PTR_LOOP_003e70a8;

        FUN_00299380(&_OBJC_CLASS___NSNumber,uVar13,uVar8);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar2,uVar13,1);

        _objc_release(uVar13);

        puVar2 = PTR_LOOP_003e70a0;

        FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1,uVar5);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar2,uVar13,1);

        _objc_release(uVar13);

        puVar2 = PTR_LOOP_003e7098;

        FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_00,DAT_003e7088);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar2,uVar13,1);

        _objc_release(uVar13);

      }

      else {

        uVar8 = FUN_002924e0(lVar4);

      }

      _objc_release(lVar4);

      _objc_release(uVar11);

      _objc_release(uVar7);

      _objc_release(param_5);

      if ((int)uVar8 != 0) {

        _objc_getAssociatedObject(param_5,PTR_LOOP_003e7030);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_getAssociatedObject(param_5,PTR_LOOP_003e7090);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        if (lVar6 != 0) {

          lVar12 = FUN_002a5a20(lVar4);

          lVar15 = DAT_003e7088;

          _objc_release(lVar6);

          if (lVar12 == lVar15) goto LAB_001becd8;

        }

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e7090,PTR____kCFBooleanTrue_00388320,1);

        puVar2 = PTR_LOOP_003e7030;

        FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_01,DAT_003e7088);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar2,uVar7,1);

        _objc_release(uVar7);

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        iVar3 = FUN_001331c4();

        pcVar1 = &cf_xzyCoverParallaxLightingColorDark;

        if (iVar3 == 0) {

          pcVar1 = &cf_xzyCoverParallaxLightingColorLight;

        }

        FUN_002a45e0(uVar7,extraout_x1_02,pcVar1);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        _objc_retain();

        uVar13 = _objc_opt_class(&_OBJC_CLASS___NSString);

        uVar5 = _objc_opt_isKindOfClass(uVar11,uVar13);

        if ((uVar5 & 1) == 0) {

LAB_001bf334:

          lVar6 = 0;

        }

        else {

          auVar24 = FUN_00297fa0(uVar11);

          if (auVar24._0_8_ == 0) goto LAB_001bf334;

          FUN_002a4560(uVar11,auVar24._8_8_,&cf__,&cf___);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a5f40();

          uVar14 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar13);

          auVar24 = FUN_00297fa0(uVar14);

          uVar13 = auVar24._8_8_;

          if (auVar24._0_8_ == 6) {

LAB_001bf220:

            local_84 = 0;

            FUN_0029be20(&_OBJC_CLASS___NSScanner,uVar13,uVar14);

            auVar24 = _objc_retainAutoreleasedReturnValue();

            uVar5 = FUN_0029bde0(auVar24._0_8_,auVar24._8_8_,&local_84);

            _objc_release(auVar24._0_8_);

            if ((uVar5 & 1) == 0) goto LAB_001bf33c;

            lVar6 = FUN_00297fa0(uVar14);

            uVar19 = local_84 >> 8;

            if (lVar6 == 8) {

              uVar18 = local_84 >> 0x18;

              dVar21 = (double)(local_84 & 0xff) / 255.0;

              uVar17 = uVar19;

              uVar19 = local_84 >> 0x10;

            }

            else {

              uVar18 = local_84 >> 0x10 & 0xff;

              dVar21 = 1.0;

              uVar17 = local_84;

            }

            FUN_00293040((double)uVar18 / 255.0,(double)(uVar19 & 0xff) / 255.0,

                         (double)(uVar17 & 0xff) / 255.0,dVar21,&_OBJC_CLASS___UIColor);

            lVar6 = _objc_retainAutoreleasedReturnValue();

          }

          else {

            auVar24 = FUN_00297fa0(uVar14);

            uVar13 = auVar24._8_8_;

            if (auVar24._0_8_ == 8) goto LAB_001bf220;

LAB_001bf33c:

            lVar6 = 0;

          }

          _objc_release(uVar14);

        }

        _objc_release(uVar11);

        _objc_release(uVar11);

        if (lVar6 == 0) {

          FUN_00293040(0x3ff0000000000000,0x3fe70a3d70a3d70a,0x3feae147ae147ae1,0x3ff0000000000000,

                       &_OBJC_CLASS___UIColor);

          lVar15 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          _objc_retain(lVar6);

          lVar15 = lVar6;

        }

        _objc_release(lVar6);

        _objc_release(uVar7);

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        uVar7 = auVar24._0_8_;

        FUN_00299520(uVar7,auVar24._8_8_,&cf_xzyCoverParallaxLightingThickness);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar6 == 0) {

          dVar21 = 0.0;

        }

        else {

          fVar20 = (float)FUN_00295460(uVar7,extraout_x1_05,&cf_xzyCoverParallaxLightingThickness);

          dVar21 = 6.0;

          if ((double)fVar20 <= 6.0) {

            dVar21 = (double)fVar20;

          }

          if (dVar21 <= 0.5) {

            dVar21 = 0.5;

          }

        }

        _objc_release(uVar7);

        FUN_00293a20(0x4030000000000000,0x3fea3d70a3d70a3d,dVar21,param_5,extraout_x1_06,lVar15);

        _objc_release(lVar15);

        goto LAB_001becd8;

      }

    }

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e7090);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) goto LAB_001bed2c;

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e7090,0,1);

    ppuVar16 = &PTR_LOOP_003e7030;

  }

  _objc_setAssociatedObject(param_5,*ppuVar16,0,1);

  FUN_002939c0(param_5);

LAB_001bed2c:

  _objc_release(param_5);

  return;

}




