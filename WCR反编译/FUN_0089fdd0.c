// FUN_0089fdd0 @ 0089fdd0

void FUN_0089fdd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  dispatch_time_t dVar5;
  undefined8 uVar6;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  code *local_50;
  undefined8 local_48 [3];
  long local_30;
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  else {
    local_68 = &local_70;
    local_70 = 0;
    local_60 = 0x32000000;
    local_5c = 0x30;
    local_58 = FUN_008a023c;
    local_50 = FUN_008a0290;
    local_48[0] = 0;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    local_78 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_78;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_008a02bc;
    local_98 = &DAT_02580b70;
    local_80 = &local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = puVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar6,0,puVar3,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_68[5];
    local_68[5] = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar5 = _dispatch_time(0,8000000000);
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_78;
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_008a0394;
    local_d0 = &DAT_02580ba0;
    local_b8 = &local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = puVar2;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = uVar4;
    _dispatch_after(dVar5,puVar1,&local_e8);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_78,0);
    __Block_object_dispose(&local_70,8);
    _objc_storeStrong(local_48,0);
  }
  return;
}

