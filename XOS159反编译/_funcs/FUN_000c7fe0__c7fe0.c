// FUN_000c7fe0 @0xc7fe0


uint FUN_000c7fe0(undefined8 param_1)



{

  uint uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  

  _objc_retain();

  uVar1 = 0;

  if ((DAT_003e7d10 == '\x01') && ((DAT_003e7d17 & 1) != 0)) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6698);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 == 0) {

      uVar1 = 0;

    }

    else {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e66a0);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if (lVar2 == 0) {

        uVar1 = 0;

      }

      else {

        FUN_002a4880(param_1);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 == lVar2) {

          uVar4 = _objc_opt_class(&_OBJC_CLASS___UIButton);

          uVar1 = _objc_opt_isKindOfClass(lVar2,uVar4);

        }

        else {

          uVar1 = 0;

        }

        _objc_release(lVar3);

      }

      _objc_release(lVar2);

    }

  }

  _objc_release(param_1);

  return uVar1 & 1;

}




