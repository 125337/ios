// FUN_00104dfc @0x104dfc


void FUN_00104dfc(long param_1,long param_2)



{

  long lVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain();

  _objc_retain(param_2);

  if (param_1 != 0) {

    if (param_2 == 0) {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e68c8,0,1);

    }

    else {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e68c8,param_2,1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e68d0,PTR____kCFBooleanTrue_00388320,1);

      FUN_00296480(param_1);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar1 != param_2) {

        FUN_0029ec00(param_1,extraout_x1,param_2);

      }

      FUN_00296160(param_1);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar1 != param_2) {

        FUN_0029e980(param_1,extraout_x1_00,param_2);

      }

    }

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e68d0,0,1);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




