// FUN_0022df78 @0x22df78


void FUN_0022df78(undefined8 param_1)



{

  ulong uVar1;

  long lVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_respondsToSelector(param_1,"setReferTextBlurColor:");

  if ((uVar1 & 1) != 0) {

    _objc_retain(param_1);

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e7208);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e7210);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar6._8_8_;

      lVar2 = auVar6._0_8_;

      if (lVar2 == 0) {

        lVar5 = 0;

      }

      else {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        lVar5 = 0;

        if (lVar2 != lVar3) {

          lVar5 = lVar2;

        }

        _objc_retain(lVar5);

        _objc_release(lVar3);

        uVar4 = extraout_x1;

      }

      FUN_002a0c20(param_1,uVar4,lVar5);

      FUN_0029ff40(param_1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e7208,0,1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e7210,0,1);

      _objc_release(lVar5);

      _objc_release(lVar2);

    }

    _objc_release(param_1);

  }

  _objc_release(param_1);

  return;

}




