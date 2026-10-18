// FUN_0002cbdc @0x2cbdc


void FUN_0002cbdc(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar6._0_8_;

  FUN_002944e0(uVar1,auVar6._8_8_,&cf_xzyHomeBottomBarCustomIconCodes);

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

  auVar6 = FUN_00297fa0(uVar3);

  if (auVar6._0_8_ == 0) {

    FUN_0029b4a0(lVar5,auVar6._8_8_,uVar2);

  }

  else {

    FUN_002a00a0(lVar5,auVar6._8_8_,uVar3,uVar2);

  }

  auVar6 = FUN_00293860(lVar5);

  if (auVar6._0_8_ == 0) {

    FUN_0029b4a0(uVar1,auVar6._8_8_,&cf_xzyHomeBottomBarCustomIconCodes);

  }

  else {

    FUN_002a0060(uVar1,auVar6._8_8_,lVar5,&cf_xzyHomeBottomBarCustomIconCodes);

  }

  FUN_002a4a40(uVar1);

  FUN_00240480();

  _objc_release(uVar2);

  _objc_release(lVar5);

  _objc_release(uVar1);

  _objc_release(uVar3);

  return;

}




