// initWithFrame: @0x1d9b08


/* Function Stack Size: 0x30 bytes */



ID XZYCLGHorizontalOrbButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  cfstringStruct *pcVar1;

  ID IVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  ID local_60;

  class_t *pcStack_58;

  

  pcStack_58 = &objc::class_t::XZYCLGHorizontalOrbButton;

  local_60 = param_1;

  IVar2 = _objc_msgSendSuper2(param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,

                              param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8,

                              &local_60,"initWithFrame:");

  if (IVar2 != 0) {

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(IVar2,auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    FUN_002a0420(IVar2,extraout_x1,0);

    uVar3 = _objc_alloc(&objc::class_t::XZYDockOpticalLiquidGlassView);

    FUN_002925a0(IVar2);

    uVar3 = FUN_00296b80(uVar3);

    lVar6 = (long)_bodyGlass;

    uVar5 = *(undefined8 *)(IVar2 + lVar6);

    *(undefined8 *)(IVar2 + lVar6) = uVar3;

    _objc_release(uVar5);

    FUN_001d6260(*(undefined8 *)(IVar2 + lVar6));

    FUN_00291380(IVar2,extraout_x1_00,*(undefined8 *)(IVar2 + lVar6));

    auVar8 = _objc_alloc(&_OBJC_CLASS___UIImageView);

    FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar8._8_8_,&cf_magnifyingglass);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_00296c40(auVar8._0_8_,auVar9._8_8_,auVar9._0_8_);

    lVar6 = (long)_iconView;

    uVar5 = *(undefined8 *)(IVar2 + lVar6);

    *(undefined8 *)(IVar2 + lVar6) = uVar3;

    _objc_release(uVar5);

    _objc_release(auVar9._0_8_);

    FUN_0029d6c0(*(undefined8 *)(IVar2 + lVar6),extraout_x1_01,1);

    FUN_00291380(IVar2,extraout_x1_02,*(undefined8 *)(IVar2 + lVar6));

    uVar3 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

    lVar6 = (long)_titleLabel;

    uVar5 = *(undefined8 *)(IVar2 + lVar6);

    *(undefined8 *)(IVar2 + lVar6) = uVar3;

    _objc_release(uVar5);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45e0(auVar8._0_8_,auVar8._8_8_,&cf_xzyChatListGroupingHorizontalSearchOrbTitle);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    pcVar4 = (cfstringStruct *)FUN_002937a0();

    pcVar1 = &cf_d__;

    if (pcVar4 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar4;

    }

    lVar7 = (long)_configuredTitle;

    _objc_retain(pcVar1);

    uVar5 = *(undefined8 *)(IVar2 + lVar7);

    *(cfstringStruct **)(IVar2 + lVar7) = pcVar1;

    _objc_release(uVar5);

    _objc_release(pcVar4);

    _objc_release(uVar3);

    _objc_release(auVar8._0_8_);

    FUN_002a1d60(*(undefined8 *)(IVar2 + lVar6),extraout_x1_03,*(undefined8 *)(IVar2 + lVar7));

    FUN_001d0ec4(0x4030000000000000,1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(*(undefined8 *)(IVar2 + lVar6),auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(*(undefined8 *)(IVar2 + lVar6),auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    FUN_0029cb60(0,*(undefined8 *)(IVar2 + lVar6));

    FUN_0029ffc0(*(undefined8 *)(IVar2 + lVar6),extraout_x1_04,1);

    FUN_00291380(IVar2,extraout_x1_05,*(undefined8 *)(IVar2 + lVar6));

    FUN_002913c0(IVar2,extraout_x1_06,IVar2,"handleTap",0x40);

    auVar8 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);

    uVar3 = FUN_00296f20(auVar8._0_8_,auVar8._8_8_,IVar2,"handleLongPress:");

    FUN_0029fce0(0x3fe0000000000000);

    FUN_00291140(IVar2,extraout_x1_07,uVar3);

    FUN_00291a20(IVar2);

    _objc_retain(IVar2);

    _objc_release(uVar3);

  }

  _objc_release(IVar2);

  return IVar2;

}




