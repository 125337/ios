// FUN_000eae34 @0xeae34


void FUN_000eae34(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  

  (*DAT_003e7e30)();

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e66e8,0,1);

  if (DAT_003e7d99 == '\x01') {

    FUN_002a4880(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if ((lVar2 != 0) && (iVar1 = FUN_000eb7a0(param_1), iVar1 != 0)) {

      if (DAT_003e7d9e == '\x01') {

        FUN_00291b60();

      }

      else {

        FUN_0029b420(param_1);

      }

      FUN_00291aa0(param_1);

      if ((DAT_003e7d9f & 1) != 0) {

        return;

      }

      goto LAB_000eaec4;

    }

  }

  FUN_0029b420(param_1);

LAB_000eaec4:

  FUN_0029b2c0(param_1);

  return;

}




