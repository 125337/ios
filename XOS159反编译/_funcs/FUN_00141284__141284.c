// FUN_00141284 @0x141284


void FUN_00141284(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined1 auVar8 [16];

  

  FUN_0013e1a0();

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(param_4 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  FUN_002965c0(&_OBJC_CLASS___UIImage,extraout_x1,uVar1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    uVar3 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

    FUN_00292400(&_OBJC_CLASS___UIColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(uVar3);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(auVar8._0_8_,auVar8._8_8_,uVar4);

    _objc_release(auVar8._0_8_);

    _objc_release(uVar4);

    FUN_0029fda0(uVar3,extraout_x1_00,0);

    auVar8 = _objc_alloc(&_OBJC_CLASS___UIImageView);

    auVar8 = FUN_00296c40(auVar8._0_8_,auVar8._8_8_,lVar2);

    uVar4 = auVar8._0_8_;

    FUN_0029d6c0(uVar4,auVar8._8_8_,1);

    FUN_002a6220(uVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029e5e0(uVar4);

    _objc_release(uVar5);

    FUN_0029ce00(uVar4,extraout_x1_01,0x12);

    FUN_002a6220(uVar3);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar8._0_8_,auVar8._8_8_,uVar4);

    _objc_release(auVar8._0_8_);

    auVar8 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

    uVar5 = FUN_00296f20(auVar8._0_8_,auVar8._8_8_,uVar3,"dismissModalViewControllerAnimated:");

    FUN_002a6220(uVar3);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00291140(auVar8._0_8_,auVar8._8_8_,uVar5);

    _objc_release(auVar8._0_8_);

    FUN_00292660(&_OBJC_CLASS___UIButton,extraout_x1_02,1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar8._0_8_;

    FUN_002a1f80(uVar6,auVar8._8_8_,&cf_sQ,0);

    FUN_002a4aa0(0x4031000000000000,&_OBJC_CLASS___UIFont);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a53a0(uVar6);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(auVar8._0_8_,auVar8._8_8_,uVar7);

    _objc_release(auVar8._0_8_);

    _objc_release(uVar7);

    FUN_002a64a0(&_OBJC_CLASS___UIColor);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1fc0(uVar6,auVar8._8_8_,auVar8._0_8_,0);

    _objc_release(auVar8._0_8_);

    FUN_002a6220(uVar3);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029e5e0(param_3 + -70.0,0x4049000000000000,0x404e000000000000,0x4044000000000000,uVar6);

    _objc_release(uVar7);

    FUN_0029ce00(uVar6,extraout_x1_03,1);

    FUN_002913c0(uVar6,extraout_x1_04,uVar3,"dismissModalViewControllerAnimated:",0x40);

    FUN_002a6220(uVar3);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar8._0_8_,auVar8._8_8_,uVar6);

    _objc_release(auVar8._0_8_);

    FUN_0029a500(*(undefined8 *)(param_4 + 0x28),extraout_x1_05,uVar3,1,0);

    _objc_release(uVar6);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

  }

  _objc_release(lVar2);

  _objc_release(uVar1);

  return;

}




