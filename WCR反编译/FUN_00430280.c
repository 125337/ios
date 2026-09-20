// FUN_00430280 @ 00430280

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00430280(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRKeywordAlertLifecycleObserver_026ce6b0;
  local_20 = param_1;
  local_18 = param_1;
  _objc_alloc_init();
  puVar2 = DAT_028ca818;
  DAT_028ca818 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addObserver_selector_name_object_0269caf8,DAT_028ca818,
             PTR_s_handleApplicationDidBecomeActive_026a37f8,
             *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addObserver_selector_name_object_0269caf8,DAT_028ca818,
             PTR_s_handleApplicationWillEnterForegr_026a3800,
             *(undefined8 *)PTR__UIApplicationWillEnterForegroundNotification_025780e8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addObserver_selector_name_object_0269caf8,DAT_028ca818,
             PTR_s_handleApplicationDidEnterBackgro_026a3808,
             *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_025780b8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addObserver_selector_name_object_0269caf8,DAT_028ca818,
             PTR_s_handleRemoteUpdateInfoDidChange__026a3810,&cf_WCRefineRemoteUpdateInfoDidChange,0
            );
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addObserver_selector_name_object_0269caf8,DAT_028ca818,
             PTR_s_handleGroupAuthorizationDidResol_026a3818,
             _WCRefineGroupAuthorizationDidResolveNotification,0);
  _objc_storeStrong(&local_28,0);
  return;
}

