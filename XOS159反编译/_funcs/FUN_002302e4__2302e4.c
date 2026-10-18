// FUN_002302e4 @0x2302e4


void FUN_002302e4(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  uVar2 = _objc_autoreleasePoolPush();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar6._0_8_;

  iVar1 = FUN_002924c0(uVar3,auVar6._8_8_,&cf_coversEnabled);

  if (iVar1 == 0) {

    DAT_003eb0e8 = 0;

    DAT_003eb0e9 = 0;

  }

  else {

    DAT_003eb0e8 = FUN_002924c0(uVar3,extraout_x1,&cf_xzyHighRefreshEnabled);

    DAT_003eb0e9 = FUN_002924c0(uVar3,extraout_x1_00,&cf_xzyHighRefreshFPSVisible);

  }

  FUN_002a2e80(&objc::class_t::XZYHighRefreshDriver);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00291280(auVar6._0_8_,auVar6._8_8_,uVar4,"applicationDidFinishLaunching:",

               *(undefined8 *)PTR__UIApplicationDidFinishLaunchingNotification_003883c0,0);

  _objc_release(auVar6._0_8_);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00291280(auVar6._0_8_,auVar6._8_8_,uVar4,"applicationDidBecomeActive:",

               *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_003883b0,0);

  _objc_release(auVar6._0_8_);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00291280(auVar6._0_8_,auVar6._8_8_,uVar4,"applicationWillResignActive:",

               *(undefined8 *)PTR__UIApplicationWillResignActiveNotification_003883d8,0);

  _objc_release(auVar6._0_8_);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar5,auVar6._8_8_,&cf_XZYSettingsDidChangeNotification,0,auVar6._0_8_,

               &PTR___NSConcreteGlobalBlock_0038f8f0);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_autoreleasePoolPop(uVar2);

  return;

}




