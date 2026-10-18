// handleMenuHold: @0x2828dc


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockLiquidContainer::handleMenuHold_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  SEL extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  ID IVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  IVar4 = param_3;

  _objc_retain(param_3);

  lVar1 = FUN_002a4240(param_3);

  if (lVar1 == 1) {

    FUN_002a6220(param_3);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a960(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(lVar1);

    if (lVar1 == lVar2) {

      FUN_0029b820(param_1,extraout_x1,IVar4);

      auVar6 = _objc_alloc(&_OBJC_CLASS___UIImpactFeedbackGenerator);

      uVar3 = FUN_00296ea0(auVar6._0_8_,auVar6._8_8_,0);

      FUN_00296680();

      FUN_00299780(param_1);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar1 != 0) {

        FUN_00299780(param_1);

        lVar1 = _objc_retainAutoreleasedReturnValue();

        (**(code **)(lVar1 + 0x10))();

        _objc_release(lVar1);

      }

      _objc_release(uVar3);

      goto LAB_00282a90;

    }

  }

  auVar6 = FUN_002a4240(param_3);

  if (auVar6._0_8_ == 1) {

    FUN_00292260(param_1,auVar6._8_8_,1);

    auVar6 = FUN_0029a520(param_1);

    uVar3 = auVar6._8_8_;

    if (auVar6._0_8_ != 1) {

      FUN_002946e0(param_1,uVar3,1);

      uVar3 = extraout_x1_00;

    }

    FUN_002a0840(param_1,uVar3,1);

    FUN_00297ea0(param_1,extraout_x1_01,1);

    FUN_002a3760(param_1);

  }

  auVar6 = FUN_002a4240(param_3);

  uVar3 = auVar6._8_8_;

  if ((auVar6._0_8_ == 1) ||

     (auVar6 = FUN_002a4240(param_3), uVar3 = auVar6._8_8_, auVar6._0_8_ == 2)) {

    FUN_00298440(param_3,uVar3,param_1);

    FUN_00296100(param_1);

  }

  else {

    auVar6 = FUN_002a4240(param_3);

    uVar3 = auVar6._8_8_;

    if (auVar6._0_8_ == 3) {

      uVar5 = 0;

    }

    else {

      auVar6 = FUN_002a4240(param_3);

      uVar3 = auVar6._8_8_;

      if ((auVar6._0_8_ != 4) &&

         (auVar6 = FUN_002a4240(param_3), uVar3 = auVar6._8_8_, auVar6._0_8_ != 5))

      goto LAB_00282a90;

      uVar5 = 1;

    }

    FUN_002953a0(param_1,uVar3,uVar5);

  }

LAB_00282a90:

  _objc_release(param_3);

  return;

}




