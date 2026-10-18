// showCustomApiSubPage @0x5d00c


/* Function Stack Size: 0x10 bytes */



void OBF_AIChatSettingViewController::showCustomApiSubPage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar4 [16];

  

  auVar4 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar1 = auVar4._0_8_;

  FUN_002a1f60(uVar1,auVar4._8_8_,&cf__INA);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar4._0_8_,auVar4._8_8_,uVar2);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(uVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar2 = FUN_00296be0(uVar2,extraout_x1,2);

  _objc_release(uVar3);

  FUN_0029ce00(uVar2,extraout_x1_00,0x12);

  FUN_002a1c80(uVar2,extraout_x1_01,3000);

  FUN_0029dca0(uVar2,extraout_x1_02,param_1);

  FUN_0029db40(uVar2,extraout_x1_03,param_1);

  FUN_002a6220(uVar1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar4._0_8_,auVar4._8_8_,uVar2);

  _objc_release(auVar4._0_8_);

  FUN_002990e0(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar4._0_8_,auVar4._8_8_,uVar1,1);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




