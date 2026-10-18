// FUN_0002c080 @0x2c080


void FUN_0002c080(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_00297fa0(param_2);

  if (auVar3._0_8_ == 0) {

    FUN_0029b4a0(uVar1,auVar3._8_8_,&cf_xzyHomeBottomBarIconColorLight);

  }

  else {

    FUN_002a0060(uVar1,auVar3._8_8_,param_2);

  }

  auVar3 = FUN_00297fa0(param_3);

  if (auVar3._0_8_ == 0) {

    FUN_0029b4a0(uVar1,auVar3._8_8_,&cf_xzyHomeBottomBarIconColorDark);

  }

  else {

    FUN_002a0060(uVar1,auVar3._8_8_,param_3);

  }

  FUN_002a4a40(uVar1);

  uVar2 = *(undefined8 *)(param_1 + 0x20);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar2,auVar3._8_8_,auVar3._0_8_,100);

  _objc_release(auVar3._0_8_);

  FUN_00240480();

  _objc_release(uVar1);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




