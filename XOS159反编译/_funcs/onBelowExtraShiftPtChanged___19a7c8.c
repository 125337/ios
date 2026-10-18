// onBelowExtraShiftPtChanged: @0x19a7c8


/* Function Stack Size: 0x18 bytes */



void XZYAvatarAboveBubbleSettingsViewController::onBelowExtraShiftPtChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  long lVar3;

  double dVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  dVar4 = (double)FUN_002a6060(param_3);

  lVar3 = (long)dVar4;

  if (lVar3 < -9) {

    lVar3 = -10;

  }

  if (9 < lVar3) {

    lVar3 = 10;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  auVar5 = FUN_00297480(uVar1,auVar5._8_8_,&cf_aabBelowExtraShiftPt);

  if (auVar5._0_8_ != lVar3) {

    FUN_0029efa0(uVar1,auVar5._8_8_,lVar3,&cf_aabBelowExtraShiftPt);

    FUN_002a4a40(uVar1);

    FUN_0018dc7c();

  }

  FUN_002a4dc0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar5._8_8_,4,0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar5._0_8_,auVar6._8_8_,auVar6._0_8_);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  if (lVar3 != 0) {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf____ldpt);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar3);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar5._0_8_,auVar5._8_8_,uVar2);

    _objc_release(auVar5._0_8_);

    _objc_release(uVar2);

  }

  _objc_release(lVar3);

  _objc_release(uVar1);

  return;

}




