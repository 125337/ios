// FUN_000a2fe8 @0xa2fe8


undefined8 FUN_000a2fe8(long param_1,long param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  _objc_retain();

  _objc_retain(param_2);

  if (param_1 == 0) {

    FUN_000a36d8(param_2);

    param_1 = _objc_retainAutoreleasedReturnValue();

    if (param_1 != 0) goto LAB_000a3028;

    _objc_retain(param_2);

    param_1 = param_2;

    if (param_2 == 0) {

      uVar2 = 0;

      goto LAB_000a3054;

    }

    _objc_getAssociatedObject(param_2,PTR_LOOP_003e63d0);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_002a5a20();

  }

  else {

LAB_000a3028:

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e63c8);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_002a5a20();

  }

  _objc_release(uVar1);

LAB_000a3054:

  _objc_release(param_1);

  _objc_release(param_2);

  return uVar2;

}




