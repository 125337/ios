// viewDidLoad @0x1f70ec


/* Function Stack Size: 0x10 bytes */



void XZYCLGSideRailAppearanceViewController::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 unaff_x21;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  ID local_50;

  class_t *pcStack_48;

  

  pcStack_48 = &objc::class_t::XZYCLGSideRailAppearanceViewController;

  local_50 = param_1;

  _objc_msgSendSuper2(&local_50,"viewDidLoad");

  FUN_00295e00(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_00297fa0();

  if (auVar2._0_8_ == 0) {

    auVar3._8_8_ = auVar2._8_8_;

    auVar3._0_8_ = &cf_OhY;

  }

  else {

    FUN_00295e00(param_1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    unaff_x21 = auVar3._0_8_;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_OhY_);

    auVar3 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002a1f60(param_1,auVar3._8_8_,auVar3._0_8_);

  if (auVar2._0_8_ != 0) {

    _objc_release(auVar3._0_8_);

    _objc_release(unaff_x21);

  }

  _objc_release(uVar1);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar2._0_8_,auVar2._8_8_,uVar1);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  auVar2 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar1 = FUN_00296f40(auVar2._0_8_,auVar2._8_8_,&cf_n_,0,param_1,"onReset");

  FUN_00299140(param_1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f3c0(auVar2._0_8_,auVar2._8_8_,uVar1);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  auVar2 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar1 = FUN_00296960(auVar2._0_8_,auVar2._8_8_,0,param_1,"onDone");

  FUN_00299140(param_1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar2._0_8_,auVar2._8_8_,uVar1);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  FUN_00292620(param_1);

  FUN_002a49c0(param_1);

  return;

}




