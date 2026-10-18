// FUN_0002bf28 @0x2bf28


void FUN_0002bf28(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  lVar4 = FUN_00297fa0(uVar3);

  if (lVar4 == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

    FUN_0029b4a0(uVar1,auVar5._8_8_,&cf_xzyHomeBottomBarSearchText);

  }

  else {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

    FUN_002a0060(uVar1,auVar5._8_8_,uVar3,&cf_xzyHomeBottomBarSearchText);

  }

  _objc_release(uVar1);

  uVar1 = *(undefined8 *)(param_1 + 0x28);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar1,auVar5._8_8_,auVar5._0_8_,100);

  _objc_release(auVar5._0_8_);

  FUN_00240480();

  _objc_release(uVar3);

  return;

}




