// FUN_00040204 @0x40204


void FUN_00040204(long param_1)



{

  long lVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),"bubbleNavController");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    lVar3 = 0;

  }

  else {

    FUN_00299260(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      _objc_retain(lVar3);

      _objc_release(lVar1);

      lVar1 = lVar3;

    }

  }

  FUN_002a5520(lVar1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar6._0_8_,auVar6._8_8_,0x3ed);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  if (lVar5 != 0) {

    FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,9);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b1c0(lVar5,auVar6._8_8_,auVar6._0_8_,5);

    _objc_release(auVar6._0_8_);

  }

  _objc_release(lVar5);

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(lVar1);

  return;

}




