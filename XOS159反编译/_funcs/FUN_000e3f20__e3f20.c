// FUN_000e3f20 @0xe3f20


void FUN_000e3f20(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  (*DAT_003e7dc0)();

  if ((DAT_003e7d99 & 1) == 0) {

    if (DAT_003e7e48 == '\x01') {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e66f8);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 != 0) {

        FUN_00292d60(param_1);

        goto LAB_000e4058;

      }

    }

  }

  else {

    iVar1 = FUN_000eb7a0(param_1);

    if (iVar1 != 0) {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e66f8,PTR____kCFBooleanTrue_00388320,1);

      DAT_003e7e48 = 1;

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(param_1,auVar3._8_8_,auVar3._0_8_);

      _objc_release(auVar3._0_8_);

      FUN_002a0420(param_1,extraout_x1,0);

      FUN_0029b380(param_1);

      if (DAT_003e7d9b == '\x01') {

        FUN_00291ca0();

      }

      else {

        FUN_0029b5a0(param_1);

      }

      if (DAT_003e7d9a == '\x01') {

        FUN_00291340();

        return;

      }

      FUN_0029b580(param_1);

      return;

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e66f8);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      FUN_0029b580(param_1);

      FUN_0029b2e0(param_1);

      FUN_0029b5a0(param_1);

      FUN_0029b380(param_1);

LAB_000e4058:

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e66f8,0,1);

      return;

    }

  }

  return;

}




