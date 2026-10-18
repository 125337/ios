// FUN_000a6a50 @0xa6a50


undefined8 FUN_000a6a50(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  

  _objc_retain();

  if ((param_1 == 0) || (lVar1 = FUN_00297fa0(param_1), lVar1 == 0)) {

    uVar2 = 0;

  }

  else {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_aiNoAt___);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_002924c0(auVar3._0_8_,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

    _objc_release(auVar3._0_8_);

  }

  _objc_release(param_1);

  return uVar2;

}




