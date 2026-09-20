// _WCRefineApplyPluginHubEntryHidden @ 00697948

byte _WCRefineApplyPluginHubEntryHidden(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **local_28;
  undefined *local_20;
  byte local_12;
  byte local_11;
  
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  local_12 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHideWCRefinePluginHubEntryArm_026a6548,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setHideWCRefinePluginHubEntryEna_026a6550,local_12 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_postGlobalSettingsChangedNotific_026a6558);
    ppuVar3 = &PTR___NSConcreteGlobalBlock_0257ea68;
    _objc_retainBlock();
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_28 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar1 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      (*(code *)local_28[2])();
    }
    local_11 = 1;
    _objc_storeStrong(&local_28);
    _objc_storeStrong(&local_20,0);
  }
  return local_11 & 1;
}

