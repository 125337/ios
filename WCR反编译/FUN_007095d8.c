// FUN_007095d8 @ 007095d8

void FUN_007095d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScreenRecordingFrameProcessor_026ce8d8,PTR_s_wcr_bootstrapIfNeeded_026a75b0
            );
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
             &cf_com_qimiao_wcrefine_media_post_process_settings_changed,0,puVar2,
             &PTR___NSConcreteGlobalBlock_0257f288);
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
             &PTR___NSConcreteGlobalBlock_0257f2a8);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

