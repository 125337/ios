// FUN_0003d178 @0x3d178


void FUN_0003d178(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  FUN_002990e0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar4._0_8_,auVar4._8_8_,0x3ea);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    auVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

    if ((auVar4._0_8_ & 1) != 0) {

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar4._8_8_,6);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar3,auVar4._8_8_,auVar4._0_8_,5);

      _objc_release(auVar4._0_8_);

    }

  }

  _objc_release(lVar3);

  return;

}




