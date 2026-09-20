// FUN_0179bf54 @ 0179bf54

void FUN_0179bf54(void)

{
  char *pcVar1;
  char *pcVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _WCRefineCrashReporterInstall();
  _WCRChatToolbarEnsureRegistrationHost();
  pcVar1 = "UIViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0179c480,&DAT_028e40a8);
  pcVar1 = "MMDiskUsageUtil";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_movePath_to__026b48f8,FUN_0179c4c8,&DAT_028e40b0);
  _MSHookMessageEx(pcVar1,PTR_s_RemoveFile__026b4900,FUN_0179c610,&DAT_028e40b8);
  pcVar1 = "NSBundle";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_bundleIdentifier_026a61b8,FUN_0179c720,&DAT_028e40c0);
  pcVar1 = "FaceRecogFlashHandler";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initPipeline_026b4908,FUN_0179c894,&DAT_028e40c8);
  pcVar2 = "dealloc";
  _sel_registerName("dealloc");
  _MSHookMessageEx(pcVar1,pcVar2,FUN_0179c8d4,&DAT_028e40d0);
  pcVar1 = "SessionSelectController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onMultiDone_026b4910,FUN_0179c910,&DAT_028e40d8);
  _MSHookMessageEx(pcVar1,PTR_s_updatePanelBtn_026b4918,FUN_0179d2c0,&DAT_028e40e0);
  _MSHookMessageEx(pcVar1,PTR_s_updateMultiSelectRightBtn_026a39d8,FUN_0179d570,&DAT_028e40e8);
  pcVar1 = "ThemeBoxOperateView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0179d820,&DAT_028e40f0);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToSuperview_0269f328,FUN_0179d984,&DAT_028e40f8);
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  FUN_0179db50();
  dVar3 = _dispatch_time(0,1000000000);
  puVar5 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  puVar4 = puVar5;
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar3,puVar4,&PTR___NSConcreteGlobalBlock_02588ce0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  dVar3 = _dispatch_time(0,1000000000);
  _objc_retainAutoreleaseReturnValue(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar3,puVar5,&PTR___NSConcreteGlobalBlock_02588d00);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_addObserverForName_object_queue__026ca4b0,uVar7,0,puVar4,
             &PTR___NSConcreteGlobalBlock_02588d40);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_addObserverForName_object_queue__026ca4b0,
             &cf_WCRefineRemoteUpdateInfoDidChange,0,puVar4,&PTR___NSConcreteGlobalBlock_02588d60);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  return;
}

