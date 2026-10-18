// viewDidLoad @0x1c5344


/* Function Stack Size: 0x10 bytes */



void XZYDesktopLyricsSettingsViewController::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar3 [16];

  ID local_40;

  class_t *pcStack_38;

  

  pcStack_38 = &objc::class_t::XZYDesktopLyricsSettingsViewController;

  local_40 = param_1;

  _objc_msgSendSuper2(&local_40,"viewDidLoad");

  FUN_002a1f60(param_1,extraout_x1,&cf_LhbLk);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar3._0_8_,auVar3._8_8_,uVar1);

  _objc_release(auVar3._0_8_);

  _objc_release(uVar1);

  uVar1 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar1 = FUN_00296be0(uVar1,extraout_x1_00,2);

  _objc_release(uVar2);

  FUN_0029ce00(uVar1,extraout_x1_01,0x12);

  FUN_0029db40(uVar1,extraout_x1_02,param_1);

  FUN_0029dca0(uVar1,extraout_x1_03,param_1);

  FUN_002a6220(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar3._0_8_,auVar3._8_8_,uVar1);

  _objc_release(auVar3._0_8_);

  FUN_002a1c40(param_1,extraout_x1_04,uVar1);

  _objc_release(uVar1);

  return;

}




