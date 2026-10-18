// FUN_00241c3c @0x241c3c


void FUN_00241c3c(undefined8 param_1)



{

  long lVar1;

  

  (*DAT_003eb1d8)();

  _objc_getAssociatedObject(param_1,&DAT_003eb2e0);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 == 0) {

    FUN_0023d46c(param_1);

  }

  FUN_0024ca5c(param_1);

  return;

}




