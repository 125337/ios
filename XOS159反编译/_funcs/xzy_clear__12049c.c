// xzy_clear @0x12049c


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_clear(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Light);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Dark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  FUN_0029b4a0(uVar1,extraout_x1,uVar2);

  FUN_0029b4a0(uVar1,extraout_x1_00,uVar3);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Position);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Height);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____OffsetX);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____OffsetY);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4a40(uVar1);

  FUN_0029b240(DAT_003e8340);

  FUN_0029b240(DAT_003e8348);

  FUN_00292f00(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar4);

  FUN_00299140(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar5._0_8_,auVar5._8_8_,0);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




