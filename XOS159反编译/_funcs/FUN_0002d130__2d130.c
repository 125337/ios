// FUN_0002d130 @0x2d130


void FUN_0002d130(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar7._0_8_;

  FUN_002944e0(uVar1,auVar7._8_8_,&cf_xzyHomeBottomBarCustomNames);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_00299020();

  if (lVar4 == 0) {

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    lVar5 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(lVar4);

    lVar5 = lVar4;

  }

  _objc_release(lVar4);

  _objc_release(uVar2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__ld);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar7 = FUN_00297fa0(uVar3);

  if (auVar7._0_8_ == 0) {

    FUN_0029b4a0(lVar5,auVar7._8_8_,uVar2);

  }

  else {

    FUN_002a00a0(lVar5,auVar7._8_8_,uVar3,uVar2);

  }

  auVar7 = FUN_00293860(lVar5);

  if (auVar7._0_8_ == 0) {

    FUN_0029b4a0(uVar1,auVar7._8_8_,&cf_xzyHomeBottomBarCustomNames);

  }

  else {

    FUN_002a0060(uVar1,auVar7._8_8_,lVar5,&cf_xzyHomeBottomBarCustomNames);

  }

  FUN_002a4a40(uVar1);

  uVar6 = *(undefined8 *)(param_1 + 0x28);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1_00,1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar6,auVar7._8_8_,auVar7._0_8_,100);

  _objc_release(auVar7._0_8_);

  FUN_00240480();

  _objc_release(uVar2);

  _objc_release(lVar5);

  _objc_release(uVar1);

  _objc_release(uVar3);

  return;

}




