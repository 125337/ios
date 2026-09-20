// providerChanged: @ 018f00d0

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupSettingsViewController::providerChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = _WCRefineCloudBackupProviderWebDAV;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  if (lVar2 == 1) {
    _objc_storeStrong(&local_30,_WCRefineCloudBackupProviderOpenList);
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    if (lVar2 == 2) {
      _objc_storeStrong(&local_30,_WCRefineCloudBackupProviderHTTP);
    }
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetRemoteList_026b8458);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  puVar3 = PTR_WCRefineCloudBackupService_026cf140;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineCloudBackupService_026cf140,PTR_s_supportsVersionHistory_026aba88);
  if (((ulong)puVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshRemoteList_026b83a8);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

