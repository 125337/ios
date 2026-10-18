// FUN_0002c7b4 @0x2c7b4


void FUN_0002c7b4(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar4,auVar6._8_8_,auVar6._0_8_);

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar5 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar5;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar5);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar6 = FUN_00297fa0(pcVar1);

  if (auVar6._0_8_ == 0) {

    FUN_0029b4a0(uVar2,auVar6._8_8_,&cf_xzyHomeBottomBarProfileSubtitle);

  }

  else {

    FUN_002a0060(uVar2,auVar6._8_8_,pcVar1);

  }

  FUN_002a4a40(uVar2);

  uVar3 = *(undefined8 *)(param_1 + 0x28);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar3,auVar6._8_8_,auVar6._0_8_,100);

  _objc_release(auVar6._0_8_);

  FUN_00240480();

  _objc_release(uVar2);

  _objc_release(pcVar1);

  return;

}




