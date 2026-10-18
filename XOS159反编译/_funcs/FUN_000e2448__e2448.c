// FUN_000e2448 @0xe2448


undefined8 FUN_000e2448(void)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 in_x3;

  undefined1 auVar3 [16];

  

  _objc_retain(in_x3);

  uVar1 = FUN_000e2584();

  if ((uVar1 & 1) == 0) {

    uVar2 = 0;

  }

  else {

    auVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);

    uVar2 = FUN_00292820(in_x3,auVar3._8_8_,auVar3._0_8_);

  }

  _objc_release(in_x3);

  return uVar2;

}




