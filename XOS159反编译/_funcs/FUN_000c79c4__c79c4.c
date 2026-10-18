// FUN_000c79c4 @0xc79c4


void FUN_000c79c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  ulong uVar1;

  undefined8 uVar2;

  

  _objc_retain(param_3);

  uVar1 = FUN_000c9f70(param_3);

  if ((uVar1 & 1) == 0) {

    (*DAT_003e7ce0)(param_1,param_2,param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    uVar2 = 0;

  }

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




