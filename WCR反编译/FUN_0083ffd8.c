// FUN_0083ffd8 @ 0083ffd8

void FUN_0083ffd8(ulong param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **local_20;
  undefined *local_18;
  
  if (((DAT_028cd2d8 & 1) == 0) && (FUN_0082baac(), (param_1 & 1) != 0)) {
    DAT_028cd2d8 = 1;
    FUN_0083791c();
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR___NSConcreteGlobalBlock_025808e0;
    local_18 = puVar1;
    _objc_retainBlock();
    puVar1 = local_18;
    local_20 = ppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0,0,0,ppuVar2);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_025780b8,0,0,local_20
              );
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               *(undefined8 *)PTR__UIApplicationWillTerminateNotification_025780f8,0,0,local_20);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               *(undefined8 *)PTR__UIApplicationDidReceiveMemoryWarningNotification_025780c8,0,0,
               local_20);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    _objc_storeStrong(&local_20);
    _objc_storeStrong(&local_18,0);
  }
  return;
}

