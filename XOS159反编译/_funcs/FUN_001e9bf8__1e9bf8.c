// FUN_001e9bf8 @0x1e9bf8


void FUN_001e9bf8(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_0020d8a8(param_2);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0020d8a8(param_3);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar7._0_8_;

  FUN_0029d080(uVar4,auVar7._8_8_,1,&cf_xzyChatListGroupingDividerTitleColorEnabled);

  auVar7 = FUN_00297fa0(uVar2);

  if (auVar7._0_8_ == 0) {

    FUN_0029b4a0(uVar4,auVar7._8_8_,&cf_xzyChatListGroupingDividerTitleColorLight);

  }

  else {

    FUN_002a0060(uVar4,auVar7._8_8_,uVar2,&cf_xzyChatListGroupingDividerTitleColorLight);

  }

  auVar7 = FUN_00297fa0(uVar3);

  if (auVar7._0_8_ == 0) {

    FUN_0029b4a0(uVar4,auVar7._8_8_,&cf_xzyChatListGroupingDividerTitleColorDark);

  }

  else {

    FUN_002a0060(uVar4,auVar7._8_8_,uVar3,&cf_xzyChatListGroupingDividerTitleColorDark);

  }

  FUN_001e77e8(&cf_xzyChatListGroupingDividerTitleColorEnabled);

  FUN_001e77e8(&cf_xzyChatListGroupingDividerTitleColorLight);

  FUN_001e77e8(&cf_xzyChatListGroupingDividerTitleColorDark);

  DAT_003eaabe = 1;

  _objc_retain(uVar2);

  uVar1 = DAT_003ea958;

  DAT_003ea958 = uVar2;

  _objc_release(uVar1);

  _objc_retain(uVar3);

  uVar1 = DAT_003ea960;

  DAT_003ea960 = uVar3;

  _objc_release(uVar1);

  FUN_0020c558(0);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(param_3);

  _objc_release(param_2);

  FUN_001ce328();

  auVar7 = _objc_loadWeakRetained(param_1 + 0x20);

  lVar5 = auVar7._0_8_;

  if (lVar5 != 0) {

    uVar2 = 3;

    if (DAT_003e70f0 != '\0') {

      uVar2 = 4;

    }

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar7._8_8_,uVar2,4);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4dc0(lVar5);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar7._0_8_,auVar7._8_8_,uVar2);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    if (lVar6 != 0) {

      FUN_00214474(DAT_003ea958,DAT_003ea960);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c820(lVar6,auVar7._8_8_,auVar7._0_8_);

      _objc_release(auVar7._0_8_);

    }

    _objc_release(lVar6);

    _objc_release(uVar2);

  }

  _objc_release(lVar5);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




