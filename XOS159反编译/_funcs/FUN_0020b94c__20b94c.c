// FUN_0020b94c @0x20b94c


void FUN_0020b94c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  if ((param_1 == 0) ||

     (auVar4 = _objc_opt_respondsToSelector(param_1,"badgeLabel"), (auVar4._0_8_ & 1) == 0)) {

    uVar2 = 0;

  }

  else {

    FUN_002a6080(param_1,auVar4._8_8_,&cf_badgeLabel);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UILabel);

    uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

    if ((uVar3 & 1) == 0) {

      uVar2 = 0;

    }

    else {

      FUN_002a5060(uVar1);

      uVar2 = _objc_retainAutoreleasedReturnValue();

    }

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




