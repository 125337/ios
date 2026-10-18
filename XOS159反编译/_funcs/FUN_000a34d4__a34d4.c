// FUN_000a34d4 @0xa34d4


undefined8 FUN_000a34d4(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_002a6220(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6520();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    uVar3 = 0;

  }

  else {

    uVar3 = FUN_000a35b4(param_1,param_2);

  }

  _objc_release(lVar2);

  _objc_release(uVar1);

  _objc_release(param_2);

  _objc_release(param_1);

  return uVar3;

}




