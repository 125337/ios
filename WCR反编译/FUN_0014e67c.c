// FUN_0014e67c @ 0014e67c

void FUN_0014e67c(undefined1 param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((DAT_028c87e4 & 1) == 0) {
    DAT_028c87e4 = 1;
    uVar1 = param_1;
    FUN_00147f7c();
    DAT_028c87e3 = uVar1;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar5,0,puVar3,
               &PTR___NSConcreteGlobalBlock_0257a5e8);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

