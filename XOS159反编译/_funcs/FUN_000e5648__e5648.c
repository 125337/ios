// FUN_000e5648 @0xe5648


void FUN_000e5648(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  

  (*DAT_003e7dc8)();

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e66e8,0,1);

  FUN_002a4880(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 == 0) {

    FUN_00292d60(param_1);

LAB_000e5778:

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e66f8,0,1);

    return;

  }

  if ((DAT_003e7d99 & 1) == 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e66f8);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      FUN_00292d60(param_1);

      goto LAB_000e5778;

    }

  }

  else {

    iVar1 = FUN_000eb7a0(param_1);

    if (iVar1 == 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e66f8);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 != 0) {

        FUN_0029b580(param_1);

        goto LAB_000e5778;

      }

    }

    else {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e66f8,PTR____kCFBooleanTrue_00388320,1);

      if (DAT_003e7d9a == '\x01') {

        FUN_00291340(param_1);

      }

      if (DAT_003e7d9b == '\x01') {

        FUN_00294ce0(param_1);

        return;

      }

    }

  }

  return;

}




