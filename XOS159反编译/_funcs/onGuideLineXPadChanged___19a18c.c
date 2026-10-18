// onGuideLineXPadChanged: @0x19a18c


/* Function Stack Size: 0x18 bytes */



void XZYAvatarAboveBubbleSettingsViewController::onGuideLineXPadChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  float fVar5;

  double dVar6;

  double dVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  

  _objc_retain(param_3);

  dVar6 = (double)FUN_002a6060(param_3);

  dVar7 = -40.0;

  if (-40.0 <= (double)(long)dVar6) {

    dVar7 = (double)(long)dVar6;

  }

  dVar6 = 40.0;

  if (dVar7 <= 40.0) {

    dVar6 = dVar7;

  }

  lVar2 = FUN_002a4e60(param_3);

  pcVar1 = &cf_aabGuideLineXPadSelf;

  if (lVar2 != 1) {

    pcVar1 = &cf_aabGuideLineXPadOther;

  }

  _objc_retain(pcVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar8._0_8_;

  FUN_00299520(uVar3,auVar8._8_8_,pcVar1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  if (auVar8._0_8_ == 0) {

    dVar7 = 8.0;

  }

  else {

    fVar5 = (float)FUN_00295460(uVar3,auVar8._8_8_,pcVar1);

    dVar7 = (double)fVar5;

  }

  _objc_release(auVar8._0_8_);

  if (0.5 <= ABS(dVar7 - dVar6)) {

    FUN_0029e500((float)dVar6,uVar3,extraout_x1,pcVar1);

    FUN_002a4a40(uVar3);

    FUN_0018dc7c();

    FUN_002a4dc0(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar4 = 6;

    if (lVar2 == 1) {

      uVar4 = 7;

    }

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar8._8_8_,uVar4,5);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar8._0_8_,auVar9._8_8_,auVar9._0_8_);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar9._0_8_);

    _objc_release(auVar8._0_8_);

    if (lVar2 != 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf___0fpt);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002944a0(lVar2);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar8._0_8_,auVar8._8_8_,uVar4);

      _objc_release(auVar8._0_8_);

      _objc_release(uVar4);

    }

    _objc_release(lVar2);

  }

  _objc_release(uVar3);

  _objc_release(pcVar1);

  _objc_release(param_3);

  return;

}




