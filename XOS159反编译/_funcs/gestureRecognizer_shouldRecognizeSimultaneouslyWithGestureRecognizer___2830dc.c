// gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer: @0x2830dc


/* Function Stack Size: 0x20 bytes */



bool XZYHomeDockLiquidContainer::

     gestureRecognizer_shouldRecognizeSimultaneouslyWithGestureRecognizer_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  uint uVar2;

  undefined8 uVar3;

  ulong uVar4;

  ID IVar5;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIPanGestureRecognizer);

  uVar4 = _objc_opt_isKindOfClass(param_3,uVar3);

  if ((uVar4 & 1) != 0) {

    FUN_002a6220(param_3);

    IVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (IVar5 == param_1) {

      FUN_002a6220(param_4);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      IVar5 = auVar6._0_8_;

      uVar2 = 0;

      if ((IVar5 != 0) && (IVar5 != param_1)) {

        iVar1 = FUN_00297700(param_1,auVar6._8_8_,IVar5);

        if (iVar1 == 0) {

LAB_0028320c:

          uVar2 = 0;

        }

        else {

          uVar3 = _objc_opt_class(&_OBJC_CLASS___UIPanGestureRecognizer);

          uVar4 = _objc_opt_isKindOfClass(param_4,uVar3);

          if ((uVar4 & 1) == 0) {

            uVar3 = _objc_opt_class(&_OBJC_CLASS___UISwipeGestureRecognizer);

            uVar4 = _objc_opt_isKindOfClass(param_4,uVar3);

            if ((uVar4 & 1) == 0) goto LAB_0028320c;

            uVar4 = FUN_00294640(param_4);

            uVar2 = (uint)(uVar4 >> 2) & 1;

          }

          else {

            uVar3 = _objc_opt_class(&_OBJC_CLASS___UIScreenEdgePanGestureRecognizer);

            uVar2 = _objc_opt_isKindOfClass(param_4,uVar3);

            uVar2 = uVar2 ^ 1;

          }

        }

      }

      _objc_release(IVar5);

      goto LAB_0028314c;

    }

  }

  uVar2 = 0;

LAB_0028314c:

  _objc_release(param_4);

  _objc_release(param_3);

  return uVar2 & 1;

}




