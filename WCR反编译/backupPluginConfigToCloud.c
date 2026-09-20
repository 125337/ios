// backupPluginConfigToCloud @ 01ca1aa4

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::backupPluginConfigToCloud(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineCloudBackupService_026cf140;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineCloudBackupService_026cf140,PTR_s_isReady_026aba68);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_WNzYNn_kXQ0W_W);
  }
  else {
    puVar3 = PTR_WCRefineCloudBackupService_026cf140;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineCloudBackupService_026cf140,PTR_s_uploadConfirmMessage_026b84e8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_01ca1c24;
    local_30 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_YN0RNz,puVar3,&cf_Sm,0,
               &cf_YN,&local_48);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

