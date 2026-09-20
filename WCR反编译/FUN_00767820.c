// FUN_00767820 @ 00767820

void FUN_00767820(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined8 uVar6;
  
  pcVar1 = "WCPayQRCodeRewardPayerDetailViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_amountBtnClick__026a7da8,FUN_00767de4,&DAT_028cc8c8);
  _MSHookMessageEx(pcVar1,PTR_s_editMoneyBtnClick_026a7db0,FUN_007693e8,&DAT_028cc8d0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidDisappear__0269de98,FUN_007699b4,&DAT_028cc8d8);
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_00769b00,&DAT_028cc8e0);
  pcVar1 = "WCRefineRootViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_scanAppreciationQRCode_026a7db8,FUN_0076a5d4,&DAT_028cc8e8);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_0076aa7c,&DAT_028cc8f0);
  FUN_0076aadc();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar6,0,puVar3,
             &PTR___NSConcreteGlobalBlock_0257fa88);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = _WCRefineGroupAuthorizationDidResolveNotification;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar6,0,puVar3,
             &PTR___NSConcreteGlobalBlock_0257faa8);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,
             &cf_WCRefineRemoteUpdateInfoDidChange,0,puVar3,&PTR___NSConcreteGlobalBlock_0257fac8);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = _WCRefineSponsorTotalTamperNotification;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar6,0,puVar3,
             &PTR___NSConcreteGlobalBlock_0257fae8);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar5 = _dispatch_time(0,800000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar5,puVar2,&PTR___NSConcreteGlobalBlock_0257fb08);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

