// FUN_00089454 @0x89454


bool FUN_00089454(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  bool bVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_00299540(param_1,extraout_x1,param_2);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    bVar1 = false;

  }

  else {

    FUN_000895b0(lVar2,param_3,0);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    auVar4 = FUN_00297fa0();

    bVar1 = auVar4._0_8_ != 0;

    if (auVar4._0_8_ == 0) {

      FUN_0029b4a0(param_1,auVar4._8_8_,param_2);

    }

    else {

      FUN_00297da0(uVar3);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(param_1,auVar4._8_8_,auVar4._0_8_,param_2);

      _objc_release(auVar4._0_8_);

    }

    _objc_release(uVar3);

  }

  _objc_release(lVar2);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  return bVar1;

}




