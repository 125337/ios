// FUN_002318f4 @0x2318f4


void FUN_002318f4(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  

  _objc_retain();

  _objc_retain(param_1);

  lVar4 = param_1;

  if (param_1 == 0) {

    lVar1 = 0;

  }

  else {

    do {

      FUN_00299220(lVar4);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar4);

      uVar2 = _objc_opt_class(&_OBJC_CLASS___UITabBarController);

      uVar3 = _objc_opt_isKindOfClass(lVar1,uVar2);

      if ((uVar3 & 1) != 0) {

        _objc_retain(lVar1);

        FUN_002a4d20(lVar1);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        _objc_release(lVar1);

        if (lVar4 == param_1) break;

      }

      lVar4 = lVar1;

    } while (lVar1 != 0);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar1);

  return;

}




