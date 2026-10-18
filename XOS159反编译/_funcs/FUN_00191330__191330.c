// FUN_00191330 @0x191330


undefined8 FUN_00191330(long param_1)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar3 = 0;

  }

  else {

    _objc_retain(param_1);

    lVar4 = param_1;

    if ((DAT_003e95d0 != 0) && (auVar5 = _objc_opt_isKindOfClass(param_1), (auVar5._0_8_ & 1) != 0))

    {

      FUN_002a6080(param_1,auVar5._8_8_,&cf_parentModel);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 != 0) {

        _objc_retain(lVar1);

        _objc_release(param_1);

        lVar4 = lVar1;

      }

      _objc_release(lVar1);

    }

    uVar2 = _objc_opt_respondsToSelector(lVar4,"isSender");

    if ((uVar2 & 1) == 0) {

      uVar3 = 0;

    }

    else {

      uVar3 = FUN_00297a80(lVar4);

    }

    _objc_release(lVar4);

  }

  _objc_release(param_1);

  return uVar3;

}




