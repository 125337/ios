// FUN_000340b8 @ 000340b8

void FUN_000340b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar3,0,puVar2,
             &PTR___NSConcreteGlobalBlock_02579230);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_28;
  uVar3 = *(undefined8 *)PTR__UIApplicationWillEnterForegroundNotification_025780e8;
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar3,0,puVar2,
             &PTR___NSConcreteGlobalBlock_02579250);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_28;
  uVar3 = *(undefined8 *)PTR__UIApplicationProtectedDataDidBecomeAvailable_025780d0;
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar3,0,puVar2,
             &PTR___NSConcreteGlobalBlock_02579270);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

