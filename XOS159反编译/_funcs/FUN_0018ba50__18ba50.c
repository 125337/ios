// FUN_0018ba50 @0x18ba50


void FUN_0018ba50(void)



{

  undefined8 uVar1;

  double dVar2;

  

  if (DAT_003e8e20 <= 0.0) {

    FUN_002987e0(&_OBJC_CLASS___UIScreen);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    dVar2 = (double)FUN_0029bda0();

    _objc_release(uVar1);

    DAT_003e8e20 = dVar2;

    if (dVar2 <= 0.0) {

      DAT_003e8e20 = 2.0;

    }

  }

  return;

}




