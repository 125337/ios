// xzy_ensurePerUserSettingsExist @0x11ed70


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_ensurePerUserSettingsExist(ID param_1,SEL param_2)



{

  double dVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Position);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  FUN_00299520(uVar2,extraout_x1,uVar3);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar4 == 0) {

    FUN_0011efd4();

    FUN_0029efa0(uVar2,extraout_x1_00,DAT_003e8358,uVar3);

    dVar1 = DAT_003e8360;

    FUN_002a4f80(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Height);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e500((float)dVar1,uVar2,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(auVar5._0_8_);

    dVar1 = DAT_003e8368;

    FUN_002a4f80(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____OffsetX);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e500((float)dVar1,uVar2,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(auVar5._0_8_);

    dVar1 = DAT_003e8370;

    FUN_002a4f80(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____OffsetY);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e500((float)dVar1,uVar2,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(auVar5._0_8_);

    FUN_002a4a40(uVar2);

  }

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}




