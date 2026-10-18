// FUN_001d31c8 @0x1d31c8


void FUN_001d31c8(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  

  _objc_retain();

  if (param_1 == 0) {

    uVar2 = 0;

  }

  else {

    _objc_getAssociatedObject(param_1,&DAT_003ead82);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

    if ((uVar3 & 1) == 0) {

      uVar2 = 0;

    }

    else {

      lVar4 = FUN_00297fa0(uVar1);

      uVar2 = 0;

      if (lVar4 != 0) {

        uVar2 = uVar1;

      }

    }

    _objc_retain(uVar2);

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




