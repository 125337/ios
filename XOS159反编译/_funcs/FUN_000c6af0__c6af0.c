// FUN_000c6af0 @0xc6af0


void FUN_000c6af0(void)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined1 auVar4 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  FUN_00299520(uVar1,auVar4._8_8_,&cf_IconHideEmojiButton);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1;

  if (lVar2 == 0) {

    FUN_0029d080(uVar1,extraout_x1,0,&cf_IconHideEmojiButton);

    uVar3 = extraout_x1_00;

  }

  FUN_00299520(uVar1,uVar3,&cf_IconHideVoiceButton);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1_01;

  if (lVar2 == 0) {

    FUN_0029d080(uVar1,extraout_x1_01,0,&cf_IconHideVoiceButton);

    uVar3 = extraout_x1_02;

  }

  FUN_00299520(uVar1,uVar3,&cf_IconHideDouTuButton);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1_03;

  if (lVar2 == 0) {

    FUN_0029d080(uVar1,extraout_x1_03,0,&cf_IconHideDouTuButton);

    uVar3 = extraout_x1_04;

  }

  FUN_00299520(uVar1,uVar3,&cf_IconHideKeyboardButton);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1_05;

  if (lVar2 == 0) {

    FUN_0029d080(uVar1,extraout_x1_05,0,&cf_IconHideKeyboardButton);

    uVar3 = extraout_x1_06;

  }

  FUN_00299520(uVar1,uVar3,&cf_IconHideNavMoreButton);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1_07;

  if (lVar2 == 0) {

    FUN_0029d080(uVar1,extraout_x1_07,0,&cf_IconHideNavMoreButton);

    uVar3 = extraout_x1_08;

  }

  FUN_00299520(uVar1,uVar3,&cf_IconHideNavSearchChatRecordButton);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 == 0) {

    FUN_0029d080(uVar1,extraout_x1_09,0,&cf_IconHideNavSearchChatRecordButton);

  }

  FUN_000c6fa8();

  if ((DAT_003e7c80 & 1) == 0) {

    uVar3 = _objc_getClass("UIView");

    _MSHookMessageEx(uVar3,"setHidden:",FUN_000c70e0,&DAT_003e7c88);

    _MSHookMessageEx(uVar3,"setAlpha:",FUN_000c7138,&DAT_003e7c90);

    uVar3 = _objc_getClass("MMUILabel");

    _MSHookMessageEx(uVar3,"setTextColor:",FUN_000c7198,&DAT_003e7c98);

    _MSHookMessageEx(uVar3,"layoutSubviews",FUN_000c73dc,&DAT_003e7ca0);

    _MSHookMessageEx(uVar3,"didMoveToSuperview",FUN_000c7408,&DAT_003e7ca8);

    uVar3 = _objc_getClass("UIButton");

    _MSHookMessageEx(uVar3,"didAddSubview:",FUN_000c7434,&DAT_003e7cb0);

    _MSHookMessageEx(uVar3,"layoutSubviews",FUN_000c74ec,&DAT_003e7cb8);

    uVar3 = _objc_getClass("MMUIButton");

    _MSHookMessageEx(uVar3,"layoutSubviews",FUN_000c7620,&DAT_003e7cc0);

    _MSHookMessageEx(uVar3,"didMoveToWindow",FUN_000c7754,&DAT_003e7cc8);

    uVar3 = _objc_getClass("MMBarButton");

    _MSHookMessageEx(uVar3,"layoutSubviews",FUN_000c7890,&DAT_003e7cd0);

    _MSHookMessageEx(uVar3,"didMoveToWindow",FUN_000c7910,&DAT_003e7cd8);

    _objc_getClass("UIImage");

    uVar3 = _object_getClass();

    _MSHookMessageEx(uVar3,"imageNamed:",FUN_000c79c4,&DAT_003e7ce0);

    _MSHookMessageEx(uVar3,"imageNamed:inBundle:compatibleWithTraitCollection:",FUN_000c7a50,

                     &DAT_003e7ce8);

    _MSHookMessageEx(uVar3,"imageWithContentsOfFile:",FUN_000c7b24,&DAT_003e7cf0);

    uVar3 = _objc_getClass("UINavigationBar");

    _MSHookMessageEx(uVar3,"layoutSubviews",FUN_000c7c1c,&DAT_003e7cf8);

    uVar3 = _objc_getClass("NewMainFrameViewController");

    _MSHookMessageEx(uVar3,"viewDidLayoutSubviews",FUN_000c7c50,&DAT_003e7d00);

    _MSHookMessageEx(uVar3,"viewDidAppear:",FUN_000c7cd8,&DAT_003e7d08);

    DAT_003e7c80 = 1;

  }

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(auVar4._0_8_,auVar4._8_8_,

               *(undefined8 *)PTR__NSUserDefaultsDidChangeNotification_00388250,0,0,

               &PTR___NSConcreteGlobalBlock_0038b9f8);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _NSLog(&cf__);

  _objc_release(uVar1);

  return;

}




