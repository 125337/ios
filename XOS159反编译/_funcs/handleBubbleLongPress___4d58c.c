// handleBubbleLongPress: @0x4d58c


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::handleBubbleLongPress_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain(param_3);

  lVar1 = FUN_002a4240(param_3);

  if (lVar1 == 1) {

    FUN_002a6220(param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(uVar2,"bubbleData");

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(uVar2,"downloadVC");

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(uVar2,"collectionView");

    auVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 != 0) {

      FUN_002a30e0(param_1,auVar4._8_8_,lVar1,uVar3,auVar4._0_8_);

    }

    _objc_release(auVar4._0_8_);

    _objc_release(uVar3);

    _objc_release(lVar1);

    _objc_release(uVar2);

  }

  _objc_release(param_3);

  return;

}




