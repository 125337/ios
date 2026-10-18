// FUN_000c7b24 @0xc7b24


void FUN_000c7b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  

  _objc_retain(param_3);

  lVar1 = FUN_00297fa0(param_3);

  if (lVar1 != 0) {

    FUN_00297da0(param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a44e0();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    uVar4 = FUN_000c9f70(uVar3);

    _objc_release(uVar3);

    if ((uVar4 & 1) != 0) {

      uVar2 = 0;

      goto LAB_000c7bc8;

    }

  }

  (*DAT_003e7cf0)(param_1,param_2,param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

LAB_000c7bc8:

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




