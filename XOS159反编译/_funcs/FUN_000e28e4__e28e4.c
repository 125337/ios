// FUN_000e28e4 @0xe28e4


void FUN_000e28e4(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_000e2a94();

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar1,auVar3._8_8_,&cf_XZYSettingsDidChangeNotification,0,auVar3._0_8_,

               &PTR___NSConcreteGlobalBlock_0038bff0);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  _objc_release(uVar1);

  FUN_002a6400(&_OBJC_CLASS___NSHashTable);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = DAT_003e7d90;

  DAT_003e7d90 = uVar2;

  _objc_release(uVar1);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar1,auVar3._8_8_,

               *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_003883b8,0,

               auVar3._0_8_,&PTR___NSConcreteGlobalBlock_0038c010);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  _objc_release(uVar1);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar1,auVar3._8_8_,

               *(undefined8 *)PTR__UIApplicationWillEnterForegroundNotification_003883d0,0,

               auVar3._0_8_,&PTR___NSConcreteGlobalBlock_0038c030);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  _objc_release(uVar1);

  return;

}




