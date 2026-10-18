// FUN_001d0ec4 @0x1d0ec4


void FUN_001d0ec4(undefined8 param_1,ulong param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  if ((param_2 & 1) == 0) {

    FUN_002a4aa0(param_1,&_OBJC_CLASS___UIFont);

    uVar1 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a4ac0(param_1,*(undefined8 *)PTR__UIFontWeightSemibold_00388430);

    uVar1 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002955c0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




