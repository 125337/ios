// FUN_00222d90 @0x222d90


void FUN_00222d90(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  

  _objc_retain();

  if (param_1 == 0) {

    uVar2 = 0;

  }

  else {

    FUN_0020e91c(param_1);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 == 0) {

      uVar2 = 0;

    }

    else {

      FUN_0020e940(param_1,lVar1,(DAT_003ead50 & DAT_003ead51 ^ 0xff) & 1);

      uVar2 = _objc_retainAutoreleasedReturnValue();

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




