// FUN_008081fc @ 008081fc

void FUN_008081fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  code *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  if ((DAT_028ccf98 & 1) == 0) {
    DAT_028ccf98 = 1;
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = &local_58;
    local_58 = 0;
    local_48 = 0x32000000;
    local_44 = 0x30;
    local_40 = FUN_0080850c;
    local_38 = FUN_00808560;
    local_30 = 0;
    uVar4 = *(undefined8 *)PTR__UIApplicationDidFinishLaunchingNotification_025780c0;
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_0080858c;
    local_80 = &DAT_025804f0;
    local_70 = &local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar4,0,puVar2,&local_98);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_50[5];
    local_50[5] = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_00808804;
    local_b0 = &DAT_0257dd38;
    local_a0 = &local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = puVar1;
    _dispatch_async(puVar3,&local_c8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_a8);
    __Block_object_dispose(&local_58,8);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

