// gestureRecognizer:shouldReceiveTouch: @0x23119c


/* Function Stack Size: 0x20 bytes */



bool XZYHomeDockLongPressTarget::gestureRecognizer_shouldReceiveTouch_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  

  FUN_002a6220(param_4);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  while( true ) {

    if (lVar1 == 0) {

      return 1;

    }

    uVar2 = _objc_opt_class(&objc::class_t::XZYHomeDockLiquidContainer);

    uVar3 = _objc_opt_isKindOfClass(lVar1,uVar2);

    if ((uVar3 & 1) != 0) break;

    FUN_002a4880(lVar1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar1);

    lVar1 = lVar4;

  }

  _objc_release(lVar1);

  return 0;

}




