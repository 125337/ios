// FUN_00fc5f28 @ 00fc5f28

void FUN_00fc5f28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (((DAT_028e2fe0 & 1) == 0) && ((DAT_028e2ef4 & 1) == 0)) {
    DAT_028e2fe0 = 1;
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar3,0,puVar2,
               &PTR___NSConcreteGlobalBlock_02583c10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

