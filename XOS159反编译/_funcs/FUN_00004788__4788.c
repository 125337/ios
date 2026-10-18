// FUN_00004788 @0x4788


undefined8 FUN_00004788(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar3 = 0;

  }

  else {

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar1 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar1);

    auVar4 = _objc_opt_isKindOfClass(param_1,lVar1);

    if ((auVar4._0_8_ & 1) != 0) {

      FUN_002a6080(param_1,auVar4._8_8_,&cf_parentModel);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 != 0) {

        _objc_retain(lVar1);

        _objc_release(param_1);

        param_1 = lVar1;

      }

      _objc_release(lVar1);

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc8);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar2);

    _objc_release(param_1);

  }

  return uVar3;

}




