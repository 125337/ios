// FUN_01f51da0 @ 01f51da0

void FUN_01f51da0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x28;
  local_30 = lVar1;
  _objc_loadWeakRetained();
  local_38 = param_1;
  if (local_30 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_38 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectedSegmentIndex__0269e9e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_applyForceModeAppearanceToContro_026c9108,local_38,1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showRestartAlertIfNeeded_026c9140);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

