// FUN_00808938 @ 00808938

void FUN_00808938(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_00808048();
  if (((DAT_028ccf99 & 1) != 0) && ((DAT_028ccf9b & 1) == 0)) {
    DAT_028ccf9b = 1;
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)PTR__UIScreenCapturedDidChangeNotification_025781f0;
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar4,0,puVar2,
               &PTR___NSConcreteGlobalBlock_02580520);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)PTR__UIApplicationWillResignActiveNotification_025780f0;
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar4,0,puVar2,
               &PTR___NSConcreteGlobalBlock_02580540);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_local_settings_changed,0,puVar2,
               &PTR___NSConcreteGlobalBlock_02580560);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

