// FUN_001ea448 @0x1ea448


void FUN_001ea448(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_0020d8a8(param_2);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0020d8a8(param_3);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar8._0_8_;

  FUN_0029d080(uVar4,auVar8._8_8_,1,&cf_xzyChatListGroupingSideRailTitleColorEnabled);

  auVar8 = FUN_00297fa0(uVar2);

  if (auVar8._0_8_ == 0) {

    FUN_0029b4a0(uVar4,auVar8._8_8_,&cf_xzyChatListGroupingSideRailTitleColorLight);

  }

  else {

    FUN_002a0060(uVar4,auVar8._8_8_,uVar2,&cf_xzyChatListGroupingSideRailTitleColorLight);

  }

  auVar8 = FUN_00297fa0(uVar3);

  if (auVar8._0_8_ == 0) {

    FUN_0029b4a0(uVar4,auVar8._8_8_,&cf_xzyChatListGroupingSideRailTitleColorDark);

  }

  else {

    FUN_002a0060(uVar4,auVar8._8_8_,uVar3,&cf_xzyChatListGroupingSideRailTitleColorDark);

  }

  FUN_001e77e8(&cf_xzyChatListGroupingSideRailTitleColorEnabled);

  FUN_001e77e8(&cf_xzyChatListGroupingSideRailTitleColorLight);

  FUN_001e77e8(&cf_xzyChatListGroupingSideRailTitleColorDark);

  DAT_003eaabf = 1;

  _objc_retain(uVar2);

  uVar1 = DAT_003ea968;

  DAT_003ea968 = uVar2;

  _objc_release(uVar1);

  _objc_retain(uVar3);

  uVar1 = DAT_003ea970;

  DAT_003ea970 = uVar3;

  _objc_release(uVar1);

  FUN_0020d76c(uVar2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = DAT_003ea978;

  DAT_003ea978 = uVar5;

  _objc_release(uVar1);

  FUN_0020d76c(uVar3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = DAT_003ea980;

  DAT_003ea980 = uVar5;

  _objc_release(uVar1);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(param_3);

  _objc_release(param_2);

  FUN_001cf7f4();

  auVar8 = _objc_loadWeakRetained(param_1 + 0x20);

  lVar6 = auVar8._0_8_;

  if (lVar6 != 0) {

    lVar7 = 3;

    if (DAT_003e70f0 != '\0') {

      lVar7 = 4;

    }

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar8._8_8_,(ulong)DAT_003eaabe + lVar7 + 1,4);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4dc0(lVar6);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar8._0_8_,auVar8._8_8_,uVar2);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar8._0_8_);

    if (lVar7 != 0) {

      FUN_00214474(DAT_003ea968,DAT_003ea970);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c820(lVar7,auVar8._8_8_,auVar8._0_8_);

      _objc_release(auVar8._0_8_);

    }

    _objc_release(lVar7);

    _objc_release(uVar2);

  }

  _objc_release(lVar6);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




