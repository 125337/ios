// FUN_00110a48 @0x110a48


void FUN_00110a48(long param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  _objc_retain();

  if (param_1 != 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e69b0);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    lVar1 = auVar2._0_8_;

    if (lVar1 != 0) {

      FUN_0029b460(DAT_003e8290,auVar2._8_8_,lVar1);

      FUN_0029b340(lVar1);

    }

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e69b0,0,0);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e69b8,0,0);

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  return;

}




