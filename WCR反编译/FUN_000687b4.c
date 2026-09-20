// FUN_000687b4 @ 000687b4

void FUN_000687b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
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
             &cf_WCRefineAutoScrollEnabledDidChangeNotification,0,puVar2,
             &PTR___NSConcreteGlobalBlock_025799f0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
  _class_getInstanceMethod();
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    _MSHookMessageEx();
  }
  puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
  _class_getInstanceMethod();
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    _MSHookMessageEx();
  }
  puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
  _class_getInstanceMethod();
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    _MSHookMessageEx();
  }
  FUN_00068df4();
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

