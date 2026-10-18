// FUN_000b2fc4 @0xb2fc4


void FUN_000b2fc4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,

                 undefined8 param_5)



{

  undefined8 uVar1;

  long lVar2;

  

  _objc_retain();

  if ((0.0 < param_3) && (0.0 < param_4)) {

    FUN_002a6100(param_1,param_2,param_3,param_4,&_OBJC_CLASS___NSValue);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e6400,uVar1,1);

    FUN_000822c8(param_5);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6310,uVar1,1);

    }

    _objc_release(lVar2);

    _objc_release(uVar1);

  }

  _objc_release(param_5);

  return;

}




