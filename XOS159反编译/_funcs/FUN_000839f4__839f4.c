// FUN_000839f4 @0x839f4


void FUN_000839f4(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  

  _objc_retain();

  if ((param_1 == 0) ||

     (uVar1 = _objc_opt_respondsToSelector(param_1,"viewModel"), (uVar1 & 1) == 0)) {

    uVar2 = 0;

  }

  else {

    FUN_002a6280(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




