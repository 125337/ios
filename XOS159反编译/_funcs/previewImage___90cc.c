// previewImage: @0x90cc


/* Function Stack Size: 0x18 bytes */



void PersonalOBF_CoversSettingViewController::previewImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  double in_d2;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  

  _objc_retain(param_3);

  FUN_00295a40(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar7._0_8_,auVar7._8_8_,param_3);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002965c0(&_OBJC_CLASS___UIImage,auVar8._8_8_,auVar8._0_8_);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    uVar2 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

    FUN_00292400(&_OBJC_CLASS___UIColor);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar2);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(auVar9._0_8_,auVar9._8_8_,uVar3);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar3);

    FUN_0029fda0(uVar2,extraout_x1,0);

    auVar9 = _objc_alloc(&_OBJC_CLASS___UIImageView);

    auVar9 = FUN_00296c40(auVar9._0_8_,auVar9._8_8_,lVar1);

    uVar3 = auVar9._0_8_;

    FUN_0029d6c0(uVar3,auVar9._8_8_,1);

    FUN_002a6220(uVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029e5e0(uVar3);

    _objc_release(uVar4);

    FUN_0029ce00(uVar3,extraout_x1_00,0x12);

    FUN_002a6220(uVar2);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar9._0_8_,auVar9._8_8_,uVar3);

    _objc_release(auVar9._0_8_);

    auVar9 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

    uVar4 = FUN_00296f20(auVar9._0_8_,auVar9._8_8_,uVar2,"dismissModalViewControllerAnimated:");

    FUN_002a6220(uVar2);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00291140(auVar9._0_8_,auVar9._8_8_,uVar4);

    _objc_release(auVar9._0_8_);

    FUN_00292660(&_OBJC_CLASS___UIButton,extraout_x1_01,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar9._0_8_;

    FUN_002a1f80(uVar5,auVar9._8_8_,&cf_sQ,0);

    FUN_002a4aa0(0x4031000000000000,&_OBJC_CLASS___UIFont);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a53a0(uVar5);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(auVar9._0_8_,auVar9._8_8_,uVar6);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar6);

    FUN_002a64a0(&_OBJC_CLASS___UIColor);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1fc0(uVar5,auVar9._8_8_,auVar9._0_8_,0);

    _objc_release(auVar9._0_8_);

    FUN_002a6220(uVar2);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029e5e0(in_d2 + -70.0,0x4049000000000000,0x404e000000000000,0x4044000000000000,uVar5);

    _objc_release(uVar6);

    FUN_0029ce00(uVar5,extraout_x1_02,1);

    FUN_002913c0(uVar5,extraout_x1_03,uVar2,"dismissModalViewControllerAnimated:",0x40);

    FUN_002a6220(uVar2);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar9._0_8_,auVar9._8_8_,uVar5);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_1,extraout_x1_04,uVar2,1,0);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

    _objc_release(uVar2);

  }

  _objc_release(lVar1);

  _objc_release(auVar8._0_8_);

  _objc_release(auVar7._0_8_);

  _objc_release(param_3);

  return;

}




