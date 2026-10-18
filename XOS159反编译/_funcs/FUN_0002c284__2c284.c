// FUN_0002c284 @0x2c284


void FUN_0002c284(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  double dVar4;

  double dVar5;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  dVar4 = (double)FUN_00294860(uVar3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  dVar5 = 30.0;

  if (30.0 <= dVar4) {

    dVar5 = dVar4;

  }

  dVar4 = 80.0;

  if (dVar5 <= 80.0) {

    dVar4 = dVar5;

  }

  FUN_0029de20(dVar4,auVar6._0_8_,auVar6._8_8_,&cf_xzyHomeBottomBarIconSize);

  _objc_release(auVar6._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  uVar1 = *(undefined8 *)(param_1 + 0x28);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar1,auVar6._8_8_,auVar6._0_8_,100);

  _objc_release(auVar6._0_8_);

  FUN_00240480();

  _objc_release(uVar3);

  return;

}




