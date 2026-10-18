// FUN_00098440 @0x98440


void FUN_00098440(undefined8 param_1)



{

  long lVar1;

  

  (*DAT_003e7800)();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6588);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_000b487c(param_1);

  }

  _objc_release(lVar1);

  return;

}




