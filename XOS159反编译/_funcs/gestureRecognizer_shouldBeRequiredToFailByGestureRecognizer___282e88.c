// gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer: @0x282e88


/* Function Stack Size: 0x20 bytes */



bool XZYHomeDockLiquidContainer::gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  bool bVar1;

  ID IVar2;

  undefined8 uVar3;

  ulong uVar4;

  ID IVar5;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_0029c520(param_1);

  IVar2 = _objc_retainAutoreleasedReturnValue();

  if (param_3 == IVar2) {

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UITapGestureRecognizer);

    uVar4 = _objc_opt_isKindOfClass(param_4,uVar3);

    _objc_release(IVar2);

    if ((uVar4 & 1) == 0) {

      bVar1 = 0;

      goto LAB_00282f80;

    }

    FUN_002a6220(param_3);

    IVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(param_4);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    IVar5 = auVar6._0_8_;

    bVar1 = 0;

    if ((IVar2 != 0) && (IVar5 != 0)) {

      if ((IVar2 == IVar5) ||

         (auVar6 = FUN_00297700(IVar2,auVar6._8_8_,IVar5), (auVar6._0_8_ & 1) != 0)) {

        bVar1 = 1;

      }

      else {

        bVar1 = FUN_00297700(IVar5,auVar6._8_8_,IVar2);

      }

    }

    _objc_release(IVar5);

  }

  else {

    bVar1 = 0;

  }

  _objc_release(IVar2);

LAB_00282f80:

  _objc_release(param_4);

  _objc_release(param_3);

  return bVar1;

}




