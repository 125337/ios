// onTextYShiftChanged: @0x1972e8


/* Function Stack Size: 0x18 bytes */



void XZYAvatarAboveBubbleSettingsViewController::onTextYShiftChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  double dVar5;

  double dVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  

  _objc_retain(param_3);

  dVar5 = (double)FUN_002a6060(param_3);

  dVar6 = -10.0;

  if (-10.0 <= (double)(long)dVar5) {

    dVar6 = (double)(long)dVar5;

  }

  dVar5 = 10.0;

  if (dVar6 <= 10.0) {

    dVar5 = dVar6;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_002a4e60(param_3);

  pcVar1 = &cf_aabTextYShiftSelf;

  if (lVar3 != 1) {

    pcVar1 = &cf_aabTextYShiftOther;

  }

  _objc_retain(pcVar1);

  FUN_0029e500((float)dVar5,uVar2,extraout_x1,pcVar1);

  FUN_002a4a40(uVar2);

  FUN_0018dc7c();

  FUN_00196fcc();

  lVar3 = FUN_002a4e60(param_3);

  FUN_002a4dc0(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar4 = 1;

  if (lVar3 == 1) {

    uVar4 = 2;

  }

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar7._8_8_,uVar4,1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  _objc_release(auVar7._0_8_);

  if (lVar3 != 0) {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_____0fpt);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar3);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar7._0_8_,auVar7._8_8_,uVar4);

    _objc_release(auVar7._0_8_);

    _objc_release(uVar4);

  }

  _objc_release(lVar3);

  _objc_release(pcVar1);

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




