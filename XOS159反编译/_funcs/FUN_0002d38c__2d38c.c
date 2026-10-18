// FUN_0002d38c @0x2d38c


void FUN_0002d38c(long param_1)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  uVar1 = FUN_00299020(*(undefined8 *)(param_1 + 0x20));

  auVar3 = FUN_0029bae0(*(undefined8 *)(param_1 + 0x28));

  FUN_0029b480(uVar1,auVar3._8_8_,auVar3._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar3._0_8_,auVar3._8_8_,uVar1,&cf_xzyHomeBottomBarPopupItems);

  _objc_release(auVar3._0_8_);

  uVar2 = *(undefined8 *)(param_1 + 0x30);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar2,auVar3._8_8_,auVar3._0_8_,100);

  _objc_release(auVar3._0_8_);

  FUN_00240480();

  _objc_release(uVar1);

  return;

}




