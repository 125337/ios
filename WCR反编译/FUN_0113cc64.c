// FUN_0113cc64 @ 0113cc64

void FUN_0113cc64(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR___NSConcreteGlobalBlock_02585ac0;
  local_28 = puVar1;
  _objc_retainBlock();
  local_30 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addObserverForName_object_queue__026ca4b0,
             _WCRefineGroupAuthorizationDidResolveNotification,0,0,ppuVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addObserverForName_object_queue__026ca4b0,
             &cf_WCRefineRemoteUpdateInfoDidChange,0,0,local_30);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

