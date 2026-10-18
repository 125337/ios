// viewDidLoad @0x1aee60


/* Function Stack Size: 0x10 bytes */



void AABCustomDashStyleHelpViewController::viewDidLoad(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  ID local_50;

  class_t *pcStack_48;

  

  pcStack_48 = &objc::class_t::AABCustomDashStyleHelpViewController;

  local_50 = param_1;

  _objc_msgSendSuper2(&local_50,"viewDidLoad");

  auVar6 = FUN_00298060(param_1);

  pcVar1 = &cf____7h___R;

  if (auVar6._0_8_ != 2) {

    pcVar1 = &cf_Z_7h___R;

  }

  FUN_002a1f60(param_1,auVar6._8_8_,pcVar1);

  FUN_002a4a60(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  auVar6 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar2 = FUN_00296f40(auVar6._0_8_,auVar6._8_8_,&cf_Y6RhQ,0,param_1,"aabHelp_copyAll");

  FUN_00299140(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITextView);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  auVar6 = FUN_00296b80(uVar2);

  FUN_0029d760(param_1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar3);

  FUN_00293640(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ce00(auVar6._0_8_,auVar6._8_8_,0x12);

  _objc_release(auVar6._0_8_);

  FUN_00293640(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029dec0(auVar6._0_8_,auVar6._8_8_,0);

  _objc_release(auVar6._0_8_);

  FUN_002955a0(0x4028000000000000,&_OBJC_CLASS___UIFont,extraout_x1,&cf_Menlo);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  lVar5 = lVar4;

  if (lVar4 == 0) {

    FUN_00298ec0(0x4028000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00388428,

                 &_OBJC_CLASS___UIFont);

    lVar5 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00293640(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar6._0_8_,auVar6._8_8_,lVar5);

  _objc_release(auVar6._0_8_);

  if (lVar4 == 0) {

    _objc_release(lVar5);

  }

  _objc_release(lVar4);

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00293640(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  FUN_002a4a60(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00293640(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  FUN_00293640(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1dc0(0x4028000000000000,0x4028000000000000,0x4044000000000000,0x4028000000000000);

  _objc_release(uVar2);

  FUN_00293640(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cbe0(auVar6._0_8_,auVar6._8_8_,1);

  _objc_release(auVar6._0_8_);

  FUN_002a4400(&_OBJC_CLASS___NSMutableString);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_00298060(param_1);

  if (lVar5 == 2) {

    FUN_00290da0(param_1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002919e0(uVar2,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    FUN_002919e0(uVar2,extraout_x1_00,&cf_newline_s_);

  }

  FUN_00290d80(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002919a0(uVar2,auVar6._8_8_,&::cf__);

  _objc_release(auVar6._0_8_);

  FUN_00293640(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00293640(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar3,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}




