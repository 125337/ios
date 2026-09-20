// FUN_004fc034 @ 004fc034

void FUN_004fc034(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  FUN_004fc19c();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar4,0,puVar2,
             &PTR___NSConcreteGlobalBlock_0257d6f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = "CMessageMgr";
  _objc_getClass();
  if (pcVar3 != (char *)0x0) {
    FUN_004fc304(pcVar3,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_004fc398,&DAT_028caf00);
    FUN_004fc304(pcVar3,PTR_s_AddMsg_MsgWrap__0269d040,FUN_004fc470,&DAT_028caf08);
  }
  return;
}

