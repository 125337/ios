// FUN_00240b40 @0x240b40


void FUN_00240b40(void)



{

  undefined *puVar1;

  undefined1 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  undefined1 auVar10 [16];

  undefined *local_1b8;

  undefined8 local_1b0;

  code *local_1a8;

  undefined *puStack_1a0;

  undefined8 local_198;

  undefined8 local_190;

  long lStack_188;

  long *local_180;

  undefined8 uStack_178;

  undefined8 local_170;

  undefined8 uStack_168;

  undefined8 uStack_160;

  undefined8 uStack_158;

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  undefined8 local_130;

  undefined8 *puStack_128;

  undefined8 local_120;

  undefined8 *puStack_118;

  undefined8 local_110;

  undefined1 local_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  uVar3 = _objc_autoreleasePoolPush();

  FUN_002404c8();

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = _objc_opt_new(&_OBJC_CLASS___NSObject);

  puStack_118 = &local_120;

  local_120 = 0;

  local_110 = 0x2020000000;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_002924c0(auVar10._0_8_,auVar10._8_8_,&cf_IconHideHomeSearchBar);

  _objc_release(auVar10._0_8_);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar8 = *(undefined8 *)PTR__NSUserDefaultsDidChangeNotification_00388250;

  local_150 = PTR___NSConcreteStackBlock_003886f0;

  local_148 = 0xc2000000;

  local_140 = FUN_00240f1c;

  puStack_138 = &DAT_0038fa08;

  local_108 = uVar2;

  _objc_retain(uVar5);

  puStack_128 = &local_120;

  local_130 = uVar5;

  FUN_002912a0(uVar4,extraout_x1,uVar8,0,0,&local_150);

  _objc_unsafeClaimAutoreleasedReturnValue();

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar4,auVar10._8_8_,

               *(undefined8 *)PTR__UIApplicationDidFinishLaunchingNotification_003883c0,0,

               auVar10._0_8_,&PTR___NSConcreteGlobalBlock_0038fa38);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar4,auVar10._8_8_,&cf_XZYSettingsDidChangeNotification,0,auVar10._0_8_,

               &PTR___NSConcreteGlobalBlock_0038fa58);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar4,auVar10._8_8_,&cf_CadisWeatherUpdated,0,auVar10._0_8_,

               &PTR___NSConcreteGlobalBlock_0038fa78);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  uStack_168 = 0;

  local_170 = 0;

  uStack_158 = 0;

  uStack_160 = 0;

  lStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  local_180 = (long *)0x0;

  lVar6 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bee78,extraout_x1_00,&local_190,

                       auStack_100,0x10);

  if (lVar6 != 0) {

    lVar9 = *local_180;

    do {

      lVar7 = 0;

      do {

        if (*local_180 != lVar9) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bee78);

        }

        uVar8 = *(undefined8 *)(lStack_188 + lVar7 * 8);

        local_1b8 = puVar1;

        local_1b0 = 0xc2000000;

        local_1a8 = FUN_002412f8;

        puStack_1a0 = &DAT_0038c6f0;

        _objc_retain(uVar5);

        local_198 = uVar5;

        FUN_002912a0(uVar4,extraout_x1_01,uVar8,0,0,&local_1b8);

        _objc_unsafeClaimAutoreleasedReturnValue();

        _objc_release(local_198);

        lVar7 = lVar7 + 1;

      } while (lVar6 != lVar7);

      lVar6 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bee78,extraout_x1_02,&local_190,

                           auStack_100,0x10);

    } while (lVar6 != 0);

  }

  _objc_release(local_130);

  __Block_object_dispose(&local_120,8);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_autoreleasePoolPop(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




