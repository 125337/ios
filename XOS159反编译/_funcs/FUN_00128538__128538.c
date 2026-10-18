// FUN_00128538 @0x128538


void FUN_00128538(undefined8 param_1)



{

  long lVar1;

  

  (*DAT_003e84f0)();

  if ((DAT_003e8508 & 1) == 0) {

    FUN_0011efd4();

    if (DAT_003e83d0 == '\x01') {

      FUN_00121fa8(param_1);

      FUN_0011b8dc(param_1);

      return;

    }

    _objc_getAssociatedObject(param_1,&DAT_003e844a);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar1 != 0) {

      FUN_0011b700(param_1);

      FUN_00122230(param_1);

      _objc_setAssociatedObject(param_1,&DAT_003e844a,0,1);

      return;

    }

  }

  return;

}




