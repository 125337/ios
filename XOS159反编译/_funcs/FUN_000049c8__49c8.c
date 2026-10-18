// FUN_000049c8 @0x49c8


void FUN_000049c8(long param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    lVar1 = 0;

  }

  else {

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar1 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar1);

    auVar2 = _objc_opt_isKindOfClass(param_1,lVar1);

    if ((auVar2._0_8_ & 1) != 0) {

      FUN_002a6080(param_1,auVar2._8_8_,&cf_parentModel);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 != 0) goto LAB_00004a58;

    }

    _objc_retain(param_1);

    lVar1 = param_1;

  }

LAB_00004a58:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar1);

  return;

}




