// FUN_001bf860 @0x1bf860


undefined8 FUN_001bf860(undefined8 param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  

  _objc_retain();

  uVar1 = FUN_001bcca4(param_1);

  if ((uVar1 & 1) == 0) {

    _objc_opt_class(param_1);

    _NSStringFromClass();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_001bcde0();

    _objc_release(uVar2);

  }

  else {

    uVar3 = 1;

  }

  _objc_release(param_1);

  return uVar3;

}




