// _WCRSuperFloatBootstrap @ 0163ad24

void _WCRSuperFloatBootstrap(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = (ulong)puVar3 & 0xffffffff;
  if ((((ulong)puVar3 & 1) != 0) && (FUN_0163a868(), (uVar4 & 1) != 0)) {
    if ((DAT_028e3cc0 & 1) == 0) {
      DAT_028e3cc0 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ensureProfilesInitialized_026b1870);
      _WCRSuperFloatRefreshActions();
      _objc_unsafeClaimAutoreleasedReturnValue();
      FUN_0163aeec();
      if (DAT_028e3cb8 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = _WCRSuperFloatSettingsChangedNotification;
        puVar5 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_addObserverForName_object_queue__026ca4b0,uVar1,0,puVar5,
                   &PTR___NSConcreteGlobalBlock_02587a20);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = DAT_028e3cb8;
        DAT_028e3cb8 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _WCRSuperFloatApplyRuntimeState();
    }
    else {
      _WCRSuperFloatApplyRuntimeState();
    }
  }
  return;
}

