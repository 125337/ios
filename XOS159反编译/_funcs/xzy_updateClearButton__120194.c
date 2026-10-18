// xzy_updateClearButton @0x120194


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_updateClearButton(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined1 auVar7 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_xzyHomeNP____Light);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_002a4f80(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_xzyHomeNP____Dark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_002a45e0(uVar1,extraout_x1,uVar2);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    FUN_002a45e0(uVar1,auVar7._8_8_,uVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) {

      FUN_00299140(param_1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar7._0_8_;

      FUN_002a0dc0(uVar5,auVar7._8_8_,0);

      goto LAB_00120338;

    }

  }

  else {

    _objc_release();

  }

  auVar7 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar5 = FUN_00296f40(auVar7._0_8_,auVar7._8_8_,&cf_nd,0,param_1,"xzy_clear");

  FUN_00299140(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar7._0_8_,auVar7._8_8_,uVar5);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar5);

  FUN_002a4cc0(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ba80();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(auVar7._0_8_,auVar7._8_8_,uVar5);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar6);

LAB_00120338:

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




