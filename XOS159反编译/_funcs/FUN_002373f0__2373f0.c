// FUN_002373f0 @0x2373f0


void FUN_002373f0(undefined8 param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain();

  auVar2 = FUN_00297fa0(param_1);

  if (auVar2._0_8_ == 0) {

    uVar1 = 0;

  }

  else {

    FUN_00299540(DAT_003eb188,auVar2._8_8_,param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




