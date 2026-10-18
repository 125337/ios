// FUN_00089210 @0x89210


bool FUN_00089210(undefined8 param_1)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  auVar6 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((auVar6._0_8_ & 1) == 0) {

    uVar2 = 0;

  }

  else {

    FUN_00299540(param_1,auVar6._8_8_,&cf_code);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

  if ((uVar4 & 1) == 0) {

    bVar1 = false;

  }

  else {

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45c0(uVar2,auVar6._8_8_,auVar6._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    lVar5 = FUN_00297fa0(uVar3);

    bVar1 = lVar5 != 0;

    _objc_release(uVar3);

  }

  _objc_release(uVar2);

  _objc_release(param_1);

  return bVar1;

}




