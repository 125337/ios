// FUN_000a0cd4 @ 000a0cd4

void FUN_000a0cd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,
             &cf_WCRefineBackGestureEnabledDidChangeNotification,0,puVar2,
             &PTR___NSConcreteGlobalBlock_02579c90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = "_UINavigationInteractiveTransition";
  _objc_getClass();
  pcVar4 = &cf_initWithViewController_animator_;
  _NSSelectorFromString(&cf_initWithViewController_animator_);
  FUN_000a1170(pcVar3,pcVar4,FUN_000a11e0,&DAT_028c8020);
  pcVar4 = &cf_handleNavigationTransition_;
  _NSSelectorFromString(&cf_handleNavigationTransition_);
  FUN_000a1170(pcVar3,pcVar4,FUN_000a148c,&DAT_028c8028);
  FUN_000a1170(pcVar3,PTR_s_gestureRecognizerShouldBegin__0269e2b8,FUN_000a1700,&DAT_028c8030);
  FUN_000a1170(pcVar3,PTR_s_gestureRecognizer_shouldReceiveT_0269e2c0,FUN_000a1b70,&DAT_028c8038);
  FUN_000a1170(pcVar3,PTR_s_gestureRecognizer_shouldBeRequir_0269e2c8,FUN_000a2020,&DAT_028c8040);
  FUN_000a1170(pcVar3,PTR_s_gestureRecognizer_shouldRecogniz_0269e2d0,FUN_000a2208,&DAT_028c8048);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  pcVar4 = &cf__finishInteractiveTransition_transitionContext_;
  _NSSelectorFromString(&cf__finishInteractiveTransition_transitionContext_);
  FUN_000a1170(puVar1,pcVar4,FUN_000a23f0,&DAT_028c8050);
  pcVar3 = "MMBaseMultiMenuTableViewCell";
  _objc_getClass();
  FUN_000a1170(pcVar3,PTR_s_gestureRecognizerShouldBegin__0269e2b8,FUN_000a266c,&DAT_028c8058);
  pcVar3 = "FavMultiMenuTableViewCell";
  _objc_getClass();
  FUN_000a1170(pcVar3,PTR_s_didMoveToWindow_0269ddb8,FUN_000a2764,&DAT_028c8060);
  return;
}

