// FUN_0007e49c @0x7e49c


void FUN_0007e49c(void)



{

  long lVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  dispatch_time_t dVar8;

  undefined1 auVar9 [16];

  undefined4 local_458;

  undefined1 local_454;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  uVar3 = _objc_getClass("NSUserDefaults");

  _MSHookMessageEx(uVar3,"setObject:forKey:",FUN_0007e950,&DAT_003e75d0);

  _MSHookMessageEx(uVar3,"setBool:forKey:",FUN_0007e9dc,&DAT_003e75d8);

  _MSHookMessageEx(uVar3,"setInteger:forKey:",FUN_0007ea50,&DAT_003e75e0);

  _MSHookMessageEx(uVar3,"setFloat:forKey:",FUN_0007eac4,&DAT_003e75e8);

  _MSHookMessageEx(uVar3,"setDouble:forKey:",FUN_0007eb40,&DAT_003e75f0);

  _MSHookMessageEx(uVar3,"setURL:forKey:",FUN_0007ebbc,&DAT_003e75f8);

  _MSHookMessageEx(uVar3,"removeObjectForKey:",FUN_0007ec48,&DAT_003e7600);

  if (DAT_003e7758 != -1) {

    FUN_0028edfc();

  }

  _objc_getClass("MMServiceCenter");

  uVar3 = _object_getClass();

  local_458 = 0x3a4040;

  _class_addMethod(uVar3,"defaultCenter",FUN_0007ecb4,&local_458);

  uVar3 = _objc_getClass("NewSettingViewController");

  _MSHookMessageEx(uVar3,"reloadTableData",FUN_0007ed3c,&DAT_003e7608);

  local_458 = 0x403a4040;

  local_454 = 0;

  _class_addMethod(uVar3,"getBubbleFolderPathForName:",FUN_0007ed88,&local_458);

  local_458 = 0x3a4076;

  _class_addMethod(uVar3,"showCoversSettings",FUN_0007ee80,&local_458);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_002924c0(auVar9._0_8_,auVar9._8_8_,&cf_coversEnabled);

  _objc_release(auVar9._0_8_);

  if (iVar2 != 0) {

    if (DAT_003e7778 != -1) {

      FUN_0028ee10();

    }

    if (DAT_003e7bc8 != -1) {

      FUN_0028ee24();

    }

    if (DAT_003e7c50 != -1) {

      FUN_0028ee38();

    }

    if (DAT_003e7c68 != -1) {

      FUN_0028ee4c();

    }

  }

  uVar3 = _objc_autoreleasePoolPush();

  if (DAT_003e75b8 == 0) {

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002912a0(uVar4,auVar9._8_8_,

                 *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_003883b0,0,

                 auVar9._0_8_,&PTR___NSConcreteGlobalBlock_0038b430);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    lVar1 = DAT_003e75b8;

    DAT_003e75b8 = lVar5;

    _objc_release(lVar1);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar4);

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002912a0(uVar6,auVar9._8_8_,

                 *(undefined8 *)PTR__UIApplicationSignificantTimeChangeNotification_003883c8,0,

                 auVar9._0_8_,&PTR___NSConcreteGlobalBlock_0038b450);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar4 = DAT_003e75c0;

    DAT_003e75c0 = uVar7;

    _objc_release(uVar4);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar6);

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002912a0(uVar6,auVar9._8_8_,

                 *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_003883b8,0,

                 auVar9._0_8_,&PTR___NSConcreteGlobalBlock_0038b470);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar4 = DAT_003e75c8;

    DAT_003e75c8 = uVar7;

    _objc_release(uVar4);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar6);

  }

  dVar8 = _dispatch_time(0,1000000000);

  _dispatch_after(dVar8,PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038b490);

  _objc_autoreleasePoolPop(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




