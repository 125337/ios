// FUN_00f583c8 @ 00f583c8

void FUN_00f583c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined **local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 *local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = _WCRefineGroupAuthorizationDidResolveNotification;
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar4,0,puVar2,
             &PTR___NSConcreteGlobalBlock_02583198);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar4,0,puVar2,
             &PTR___NSConcreteGlobalBlock_025831b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_50 = &local_40;
  local_40 = 0;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_28 = 0;
  ppuVar3 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_00f58828;
  local_58 = &DAT_0257c428;
  local_38 = local_50;
  _objc_retainBlock();
  local_98 = puVar1;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_00f588fc;
  local_80 = &DAT_025831d8;
  local_48 = ppuVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = ppuVar3;
  _WCRefineRunAfterMainFrameFirstAppear(0x4028000000000000,&local_98);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_48,0);
  __Block_object_dispose(&local_40,8);
  return;
}

