// cycleProvider @ 018f02a4

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::cycleProvider(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineCloudBackupService_026cf140;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineCloudBackupService_026cf140,PTR_s_normalizedProvider_026aba30);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = _WCRefineCloudBackupProviderOpenList;
  local_28 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineCloudBackupProviderOpenList);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineCloudBackupProviderHTTP);
    if (((ulong)puVar2 & 1) != 0) {
      _objc_storeStrong(&local_30,_WCRefineCloudBackupProviderWebDAV);
    }
  }
  else {
    _objc_storeStrong(&local_30,_WCRefineCloudBackupProviderHTTP);
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetRemoteList_026b8458);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  puVar2 = PTR_WCRefineCloudBackupService_026cf140;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineCloudBackupService_026cf140,PTR_s_supportsVersionHistory_026aba88);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshRemoteList_026b83a8);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

