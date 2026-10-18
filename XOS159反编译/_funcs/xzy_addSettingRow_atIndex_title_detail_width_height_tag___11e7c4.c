// xzy_addSettingRow:atIndex:title:detail:width:height:tag: @0x11e7c4


/* Function Stack Size: 0x48 bytes */



void XZYHomeNPPickerVC::xzy_addSettingRow_atIndex_title_detail_width_height_tag_

               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,

               double param_7,double param_8,long_long param_9)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_5);

  _objc_retain(param_6);

  _objc_alloc(&_OBJC_CLASS___UIView);

  auVar6 = FUN_00296b80(0,param_8 * (double)(long)param_4,param_7,param_8);

  uVar1 = auVar6._0_8_;

  FUN_002a1c80(uVar1,auVar6._8_8_,param_9);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar6 = FUN_00296b80(0x4030000000000000,0,param_7 * 0.4,param_8);

  uVar2 = auVar6._0_8_;

  FUN_002a1d60(uVar2,auVar6._8_8_,param_5);

  FUN_002a4aa0(0x4030000000000000,&_OBJC_CLASS___UIFont);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar2,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_00291380(uVar1,extraout_x1,uVar2);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar6 = FUN_00296b80(param_7 * 0.4,0,param_7 * 0.5 + -16.0,param_8);

  uVar3 = auVar6._0_8_;

  FUN_002a1d60(uVar3,auVar6._8_8_,param_6);

  FUN_002a4aa0(0x402e000000000000,&_OBJC_CLASS___UIFont);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar3,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar3,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_002a1d80(uVar3,extraout_x1_00,2);

  FUN_00291380(uVar1,extraout_x1_01,uVar3);

  auVar6 = _objc_alloc(&_OBJC_CLASS___UIImageView);

  FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar6._8_8_,&cf_chevron_right);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_00296c40(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002a4fc0(&_OBJC_CLASS___UIColor);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(uVar4,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_002a3de0(uVar4);

  FUN_0029d320(param_7 + -16.0,param_8 * 0.5,uVar4);

  FUN_00291380(uVar1,extraout_x1_02,uVar4);

  if ((long)param_4 < 3) {

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar5 = FUN_00296b80(0x4030000000000000,param_8 + -0.5,param_7 + -16.0,0x3fe0000000000000);

    FUN_0029c620(&_OBJC_CLASS___UIColor);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar5,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    FUN_00291380(uVar1,extraout_x1_03,uVar5);

    _objc_release(uVar5);

  }

  auVar6 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

  auVar6 = FUN_00296f20(auVar6._0_8_,auVar6._8_8_,param_1,"xzy_settingRowTapped:");

  FUN_00291140(uVar1,auVar6._8_8_,auVar6._0_8_);

  FUN_00291380(param_3,extraout_x1_04,uVar1);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_6);

  _objc_release(param_5);

  _objc_release(param_3);

  return;

}




