// onTextSizeOffsetChanged: @0x196df8


/* Function Stack Size: 0x18 bytes */



void XZYAvatarAboveBubbleSettingsViewController::onTextSizeOffsetChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  double dVar4;

  double dVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  dVar4 = (double)FUN_002a6060(param_3);

  dVar5 = -3.0;

  if (-3.0 <= (double)(long)dVar4) {

    dVar5 = (double)(long)dVar4;

  }

  dVar4 = 3.0;

  if (dVar5 <= 3.0) {

    dVar4 = dVar5;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar6._0_8_;

  FUN_0029e500((float)dVar4,uVar1,auVar6._8_8_,&cf_aabTextSizeOffset);

  FUN_002a4a40(uVar1);

  FUN_0018dc7c();

  FUN_00196fcc();

  FUN_002a4dc0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar6._8_8_,0,1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  _objc_release(auVar6._0_8_);

  if (lVar2 != 0) {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_____0fpt);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar2);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar6._0_8_,auVar6._8_8_,uVar3);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar3);

  }

  _objc_release(lVar2);

  _objc_release(uVar1);

  return;

}




