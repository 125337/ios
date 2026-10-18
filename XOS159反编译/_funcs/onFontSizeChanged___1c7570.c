// onFontSizeChanged: @0x1c7570


/* Function Stack Size: 0x18 bytes */



void XZYDesktopLyricsSettingsViewController::onFontSizeChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  float fVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  fVar4 = (float)FUN_002a6060(param_3);

  DAT_003e70c8 = (double)(float)(int)fVar4;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  FUN_0029de20(DAT_003e70c8,uVar1,auVar5._8_8_,&cf_xzyDesktopLyricsFontSize);

  FUN_002a4a40(uVar1);

  FUN_001c478c();

  FUN_002a4dc0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar5._8_8_,0,2);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar5._0_8_,auVar6._8_8_,auVar6._0_8_);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  if (lVar2 != 0) {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0f);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar2);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar5._0_8_,auVar5._8_8_,uVar3);

    _objc_release(auVar5._0_8_);

    _objc_release(uVar3);

  }

  _objc_release(lVar2);

  _objc_release(uVar1);

  return;

}




