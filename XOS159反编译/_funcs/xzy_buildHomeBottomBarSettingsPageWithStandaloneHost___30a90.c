// xzy_buildHomeBottomBarSettingsPageWithStandaloneHost: @0x30a90


/* Function Stack Size: 0x14 bytes */



ID _0x2f19de29::xzy_buildHomeBottomBarSettingsPageWithStandaloneHost_

             (ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined1 auVar5 [16];

  

  if ((param_3 & 1) == 0) {

    _objc_retain();

  }

  else {

    param_1 = _objc_alloc_init(&objc::class_t::_0x2f19de29);

  }

  auVar5 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar1 = auVar5._0_8_;

  FUN_002a1f60(uVar1,auVar5._8_8_,&cf__Nu_h7h_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(uVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar2 = FUN_00296be0(uVar2,extraout_x1,2);

  _objc_release(uVar3);

  FUN_0029ce00(uVar2,extraout_x1_00,0x12);

  FUN_002a1c80(uVar2,extraout_x1_01,0x3f5);

  FUN_0029dca0(uVar2,extraout_x1_02,param_1);

  FUN_0029db40(uVar2,extraout_x1_03,param_1);

  FUN_0029dee0(uVar2,extraout_x1_04,1);

  FUN_0029cb40(uVar2,extraout_x1_05,1);

  FUN_002a6220(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  if (param_3 != 0) {

    FUN_002910c0(uVar1,extraout_x1_06,param_1);

    FUN_002945e0(param_1,extraout_x1_07,uVar1);

  }

  _objc_release(uVar2);

  _objc_release(param_1);

  IVar4 = _objc_autoreleaseReturnValue(uVar1);

  return IVar4;

}




