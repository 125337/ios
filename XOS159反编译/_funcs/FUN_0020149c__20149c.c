// FUN_0020149c @0x20149c


void FUN_0020149c(undefined8 param_1)



{

  long lVar1;

  

  (*DAT_003eabb8)();

  if ((DAT_003eaa30 == '\x01' && DAT_003eaad0 == 1) && (DAT_003eaac8 - 1U < 4)) {

    FUN_0021a52c(param_1);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 != 0) {

      FUN_00217b94(lVar1);

    }

    _objc_release(lVar1);

    return;

  }

  return;

}




