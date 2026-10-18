// FUN_000fd5c0 @0xfd5c0


void FUN_000fd5c0(void)



{

  int iVar1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar2._0_8_,auVar2._8_8_,&cf_coversEnabled);

  _objc_release(auVar2._0_8_);

  if ((iVar1 != 0) && (DAT_003e7f28 != -1)) {

    thunk_FUN_001055c0();

  }

  if ((DAT_003eb410 == '\x01') && (DAT_003e7f38 != -1)) {

    thunk_FUN_00105598();

  }

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(auVar2._0_8_,auVar2._8_8_,&cf_com_shtm_lumiglass_settingsDidChange,0,0,

               &PTR___NSConcreteGlobalBlock_0038c490);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar2._0_8_);

  if (DAT_003eb410 == '\x01') {

    _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038c4d0);

    return;

  }

  return;

}




