// FUN_00266a5c @0x266a5c


void FUN_00266a5c(long param_1)



{

  undefined8 extraout_x1;

  undefined1 auVar1 [16];

  

  auVar1 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x20));

  if (auVar1._0_8_ == 0) {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    auVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002a03e0(*(undefined8 *)(param_1 + 0x28),auVar1._8_8_,auVar1._0_8_);

    _objc_release(auVar1._0_8_);

    FUN_00299d00(*(undefined8 *)(param_1 + 0x28));

  }

  else {

    FUN_00295120(*(undefined8 *)(param_1 + 0x28),auVar1._8_8_,*(undefined8 *)(param_1 + 0x20));

  }

  FUN_0029ad80(*(undefined8 *)(param_1 + 0x28));

  FUN_0029ecc0(*(undefined8 *)(param_1 + 0x28),extraout_x1,0);

  FUN_00299800(*(undefined8 *)(param_1 + 0x28));

  return;

}




