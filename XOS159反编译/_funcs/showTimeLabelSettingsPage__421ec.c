// showTimeLabelSettingsPage @0x421ec


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showTimeLabelSettingsPage(ID param_1,SEL param_2)



{

  undefined1 auVar1 [16];

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar8 [16];

  undefined8 uVar2;

  

  auVar8 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar2 = auVar8._0_8_;

  FUN_002a1f60(uVar2,auVar8._8_8_,&cf_mo_lle);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar2);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar8._0_8_,auVar8._8_8_,uVar3);

  _objc_release(auVar8._0_8_);

  _objc_release(uVar3);

  uVar3 = _objc_alloc_init(&_OBJC_CLASS___UINavigationBarAppearance);

  FUN_002933a0();

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar3,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1460(uVar3,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_00299140(uVar2);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1960(auVar8._0_8_,auVar8._8_8_,uVar3);

  _objc_release(auVar8._0_8_);

  FUN_00299140(uVar2);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0f60(auVar8._0_8_,auVar8._8_8_,uVar3);

  _objc_release(auVar8._0_8_);

  _objc_release(uVar3);

  uVar3 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(uVar2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar3 = FUN_00296be0(uVar3,extraout_x1,2);

  _objc_release(uVar4);

  FUN_0029ce00(uVar3,extraout_x1_00,0x12);

  FUN_002a1c80(uVar3,extraout_x1_01,0x3ed);

  FUN_0029dca0(uVar3,extraout_x1_02,param_1);

  FUN_0029db40(uVar3,extraout_x1_03,param_1);

  FUN_002a6220(uVar2);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar8._0_8_,auVar8._8_8_,uVar3);

  _objc_release(auVar8._0_8_);

  FUN_002990e0(param_1);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  auVar8 = _objc_retainAutoreleasedReturnValue();

  lVar6 = auVar8._0_8_;

  if (lVar6 == 0) {

    auVar1._8_8_ = 0;

    auVar1._0_8_ = auVar8._8_8_;

    auVar8 = auVar1 << 0x40;

  }

  else {

    FUN_00299260(lVar6);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    lVar7 = auVar8._0_8_;

    if (lVar7 != 0) {

      _objc_retain(lVar7);

      _objc_release(lVar5);

      auVar8._8_8_ = extraout_x1_04;

      auVar8._0_8_ = lVar7;

      lVar5 = lVar7;

    }

  }

  FUN_0029aa80(lVar5,auVar8._8_8_,uVar2,1);

  _objc_release(auVar8._0_8_);

  _objc_release(lVar6);

  _objc_release(lVar5);

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}




