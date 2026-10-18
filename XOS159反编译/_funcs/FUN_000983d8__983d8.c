// FUN_000983d8 @0x983d8


void FUN_000983d8(undefined8 param_1)



{

  long lVar1;

  

  (*DAT_003e77f8)();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6588);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_000b487c(param_1);

  }

  _objc_release(lVar1);

  return;

}




