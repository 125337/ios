// handleVersionTap: @ 01d31a10

/* Function Stack Size: 0x18 bytes */

void WCRefineRootViewController::handleVersionTap_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_2c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isUpdateNotificationDisabled_026c43e8);
    local_2c = (uint)IVar3 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_2c & 1) == 0) {
    puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR__f);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_openUpdateLink_026c4420);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

