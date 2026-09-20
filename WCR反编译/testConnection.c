// testConnection @ 018f1248

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::testConnection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WKm_);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  puVar1 = PTR_WCRefineCloudBackupService_026cf140;
  local_28 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_28;
  local_38 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_testConnectionWithCompletion__026b84e0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

