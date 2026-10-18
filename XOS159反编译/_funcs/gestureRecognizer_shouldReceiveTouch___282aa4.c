// gestureRecognizer:shouldReceiveTouch: @0x282aa4


/* Function Stack Size: 0x20 bytes */



bool XZYHomeDockLiquidContainer::gestureRecognizer_shouldReceiveTouch_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  bool bVar2;

  ID IVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  double dVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar13 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_0029c520(param_1);

  IVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (param_3 == IVar3) {

    FUN_002a1300(param_1,extraout_x1,0);

    FUN_002a1380(param_1,extraout_x1_00,0);

    lVar8 = FUN_0029a900(param_1);

    FUN_002a6520(param_1);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if ((((lVar7 != 0) && (uVar6 = FUN_002978a0(param_1), (uVar6 & 1) == 0)) &&

        (dVar10 = (double)FUN_002916a0(param_1), 0.01 < dVar10)) &&

       (((iVar1 = FUN_00297b60(param_1), iVar1 != 0 && (lVar9 = FUN_0029a520(param_1), lVar9 == 0))

        && (uVar6 = FUN_002a5580(param_1), (uVar6 & 1) == 0)))) {

      FUN_002a5120(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_002948e0();

      if ((((uVar6 & 1) == 0) && (lVar9 = FUN_0029c2c0(param_1), lVar9 == lVar8)) &&

         ((lVar9 = FUN_00299080(param_1), -1 < lVar8 && (lVar8 == lVar9)))) {

        FUN_002a4d60(param_1);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        lVar9 = FUN_00293860();

        _objc_release(uVar4);

        _objc_release(uVar5);

        _objc_release(lVar7);

        if (lVar9 <= lVar8) {

          bVar2 = 0;

          goto LAB_00282e14;

        }

        FUN_002a4d60(param_1);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_00299500(auVar13._0_8_,auVar13._8_8_,lVar8);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar13._0_8_);

        uVar6 = FUN_002978a0(lVar7);

        if ((((uVar6 & 1) != 0) || (dVar10 = (double)FUN_002916a0(lVar7), dVar10 <= 0.01)) ||

           (iVar1 = FUN_00297b60(lVar7), iVar1 == 0)) goto LAB_00282da0;

        FUN_00298440(param_4,extraout_x1_01,lVar7);

        iVar1 = FUN_0029a020(lVar7,extraout_x1_02,0);

        if (iVar1 == 0) goto LAB_00282da0;

        FUN_002a1300(param_1,extraout_x1_03,lVar7);

        FUN_002a1380(param_1,extraout_x1_04,param_4);

        goto LAB_00282da8;

      }

      _objc_release(uVar5);

    }

LAB_00282da0:

    bVar2 = 0;

  }

  else {

    FUN_002a6220(param_4);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar5 = _objc_opt_class(&objc::class_t::XZYDockLiquidButton);

    uVar6 = _objc_opt_isKindOfClass(uVar4,uVar5);

    if ((uVar6 & 1) == 0) {

      lVar7 = 0;

LAB_00282d74:

      _objc_release(uVar4);

    }

    else {

      FUN_002a6220(param_4);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar4);

      if (lVar7 != 0) {

        FUN_002a4d60(param_1);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar4 = auVar13._0_8_;

        iVar1 = FUN_00293560(uVar4,auVar13._8_8_,lVar7);

        if (iVar1 != 0) {

          lVar8 = FUN_0029a520(param_1);

          if (lVar8 == 0) {

            FUN_00299160(param_1);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            _objc_release(uVar4);

            if (lVar7 != lVar8) goto LAB_00282d7c;

          }

          else {

            _objc_release(uVar4);

          }

          uVar5 = _objc_opt_class(&_OBJC_CLASS___UIPanGestureRecognizer);

          uVar6 = _objc_opt_isKindOfClass(param_3,uVar5);

          if ((uVar6 & 1) == 0) {

            FUN_002a6220(param_3);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            FUN_00299120(param_1);

            lVar9 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            _objc_release(lVar8);

            if (lVar8 != lVar9) goto LAB_00282d7c;

          }

          goto LAB_00282da0;

        }

        goto LAB_00282d74;

      }

    }

LAB_00282d7c:

    uVar5 = _objc_opt_class(&_OBJC_CLASS___UIPanGestureRecognizer);

    uVar6 = _objc_opt_isKindOfClass(param_3,uVar5);

    if ((uVar6 & 1) == 0) {

LAB_00282da8:

      bVar2 = 1;

    }

    else {

      lVar8 = FUN_0029a520(param_1);

      if (lVar8 != 0) goto LAB_00282da0;

      FUN_00299100(param_1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      uVar11 = FUN_0027e700();

      uVar5 = in_d1;

      uVar12 = FUN_00298440(param_4,extraout_x1_05,param_1);

      bVar2 = _CGRectContainsPoint(uVar11,in_d1,in_d2,in_d3,uVar12,uVar5);

      _objc_release(uVar4);

    }

  }

  _objc_release(lVar7);

LAB_00282e14:

  _objc_release(param_4);

  _objc_release(param_3);

  return bVar2;

}




