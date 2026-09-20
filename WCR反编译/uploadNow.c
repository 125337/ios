// uploadNow @ 018f1434

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::uploadNow(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_WCRefineCloudBackupService_026cf140;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineCloudBackupService_026cf140,PTR_s_uploadConfirmMessage_026b84e8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_YN0RNz,puVar3,&cf_Sm,0,
             &cf_YN);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

