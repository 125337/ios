// viewDidLoad @0x59a4


/* Function Stack Size: 0x10 bytes */



void PersonalOBF_CoversSettingViewController::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  float fVar3;

  double dVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  ID local_40;

  class_t *pcStack_38;

  

  pcStack_38 = &objc::class_t::PersonalOBF_CoversSettingViewController;

  local_40 = param_1;

  _objc_msgSendSuper2(&local_40,"viewDidLoad");

  FUN_00299c00(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&::cf__);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f60(param_1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar5._0_8_,auVar5._8_8_,uVar1);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar1);

  FUN_00299140(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cec0(auVar5._0_8_,auVar5._8_8_,2);

  _objc_release(auVar5._0_8_);

  FUN_00295760(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_00299020();

  FUN_002a0660(param_1,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  fVar3 = (float)FUN_00295460(auVar5._0_8_,auVar5._8_8_,&cf_coverImageSize);

  FUN_0029ec80((double)fVar3,param_1);

  _objc_release(auVar5._0_8_);

  dVar4 = (double)FUN_00296520(param_1);

  if (dVar4 <= 0.0) {

    FUN_0029ec80(0x4049000000000000,param_1);

  }

  uVar1 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  auVar5 = FUN_00296be0(uVar1,extraout_x1,2);

  FUN_002a1c40(param_1,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  FUN_002a4dc0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029dca0(auVar5._0_8_,auVar5._8_8_,param_1);

  _objc_release(auVar5._0_8_);

  FUN_002a4dc0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029db40(auVar5._0_8_,auVar5._8_8_,param_1);

  _objc_release(auVar5._0_8_);

  FUN_002a4dc0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ce00(auVar5._0_8_,auVar5._8_8_,0x12);

  _objc_release(auVar5._0_8_);

  FUN_002a6220(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar1,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar1);

  return;

}




