// FUN_00f1c7f4 @ 00f1c7f4

void FUN_00f1c7f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_18;
  
  _WCRefineReloadCustomAmountRuntimeSettings();
  FUN_00f1c94c();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,
             &cf_com_qimiao_wcrefine_local_settings_changed,0,0,
             &PTR___NSConcreteGlobalBlock_02582728);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = local_18;
  uVar1 = _WCRefineGroupAuthorizationDidResolveNotification;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar1,0,puVar3,
             &PTR___NSConcreteGlobalBlock_02582748);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
             &cf_WCRefineRemoteUpdateInfoDidChange,0,0,&PTR___NSConcreteGlobalBlock_02582768);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  return;
}

