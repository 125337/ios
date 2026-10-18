// FUN_00104f14 @0x104f14


undefined8 FUN_00104f14(long param_1,long param_2)



{

  byte bVar1;

  long lVar2;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  int iVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  ulong extraout_x1;

  ulong extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  byte bVar16;

  byte bVar17;

  long lVar18;

  long lVar19;

  long lVar20;

  double dVar21;

  double dVar22;

  undefined1 auVar23 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_000ffc74(param_2);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  lVar2 = param_2;

  if (lVar6 != 0) {

    lVar2 = lVar6;

  }

  _objc_retain(lVar2);

  _objc_getAssociatedObject(lVar2,PTR_LOOP_003e68a8);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(lVar2,PTR_LOOP_003e68b0);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  lVar9 = FUN_002a5a20();

  _objc_release(uVar8);

  _objc_retain(param_1);

  lVar18 = param_1;

  if (param_1 == 0) {

    auVar4._8_8_ = 0;

    auVar4._0_8_ = extraout_x1;

    auVar23 = auVar4 << 0x40;

    lVar18 = 0;

  }

  else {

    do {

      uVar8 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

      auVar23 = _objc_opt_isKindOfClass(lVar18,uVar8);

      if ((auVar23._0_8_ & 1) != 0) {

        FUN_002a6080(lVar18,auVar23._8_8_,&cf_m_arrMessageNodeData);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        lVar10 = auVar23._0_8_;

        if (lVar10 == 0) goto LAB_00105150;

        auVar23 = FUN_00293860(lVar10);

        uVar8 = auVar23._8_8_;

        lVar19 = auVar23._0_8_;

        if (lVar19 == 0) {

          bVar16 = 0;

          lVar20 = 0;

        }

        else {

          FUN_00295440(lVar10);

          lVar11 = _objc_retainAutoreleasedReturnValue();

          FUN_00297d80(lVar10);

          lVar12 = _objc_retainAutoreleasedReturnValue();

          dVar21 = (double)_CFAbsoluteTimeGetCurrent();

          if ((DAT_003e7ea8 == 0) || (lVar19 != DAT_003e7ee0)) {

LAB_001050dc:

            FUN_00100028(lVar10);

            lVar20 = _objc_retainAutoreleasedReturnValue();

            _objc_retain();

            lVar13 = DAT_003e7ea8;

            DAT_003e7ea8 = lVar20;

            _objc_release(lVar13);

            DAT_003e7ee0 = lVar19;

            _objc_storeWeak(&DAT_003e7e98,lVar11);

            _objc_storeWeak(&DAT_003e7ea0,lVar12);

            DAT_003e7ee8 = dVar21;

          }

          else {

            lVar20 = _objc_loadWeakRetained(&DAT_003e7e98);

            if (lVar11 != lVar20) {

LAB_001050d4:

              _objc_release(lVar20);

              goto LAB_001050dc;

            }

            lVar13 = _objc_loadWeakRetained(&DAT_003e7ea0);

            if (lVar12 != lVar13) {

              _objc_release();

              goto LAB_001050d4;

            }

            dVar22 = dVar21 - DAT_003e7ee8;

            _objc_release();

            _objc_release(lVar20);

            lVar20 = DAT_003e7ea8;

            if (0.5 <= dVar22) goto LAB_001050dc;

            _objc_retain(DAT_003e7ea8);

          }

          _objc_release(lVar12);

          _objc_release(lVar11);

          bVar16 = 1;

          uVar8 = extraout_x1_01;

        }

        auVar23._8_8_ = uVar8;

        auVar23._0_8_ = lVar10;

        bVar17 = 1;

        goto LAB_00105158;

      }

      FUN_00299220(lVar18);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar18);

      lVar18 = lVar10;

    } while (lVar10 != 0);

    auVar3._8_8_ = 0;

    auVar3._0_8_ = extraout_x1_00;

    auVar23 = auVar3 << 0x40;

  }

LAB_00105150:

  lVar19 = 0;

  bVar16 = 0;

  bVar17 = 0;

  lVar20 = 0;

LAB_00105158:

  uVar8 = auVar23._0_8_;

  if (((lVar7 == 0) || (iVar5 = FUN_00297820(lVar7,auVar23._8_8_,DAT_003e7e90), iVar5 == 0)) ||

     ((lVar20 != 0 && (iVar5 = FUN_00297820(lVar20,extraout_x1_02,DAT_003e7e90), iVar5 == 0)))) {

    bVar16 = 1;

  }

  else {

    bVar1 = 0;

    if (lVar9 != 0) {

      bVar1 = bVar16;

    }

    bVar16 = 0;

    if (lVar9 != lVar19) {

      bVar16 = bVar1;

    }

  }

  if (((bool)(bVar17 & bVar16)) && (lVar9 = FUN_00293860(uVar8), lVar9 != 0)) {

    FUN_001003e0(uVar8,lVar20);

  }

  _objc_getAssociatedObject(lVar2,PTR_LOOP_003e6860);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = FUN_002a5a40();

  _objc_release(uVar14);

  _objc_release(lVar20);

  _objc_release(uVar8);

  _objc_release(lVar18);

  _objc_release(lVar7);

  _objc_release(lVar2);

  _objc_release(lVar6);

  _objc_release(param_2);

  _objc_release(param_1);

  return uVar15;

}




