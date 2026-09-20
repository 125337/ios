// openRemoteHistory @ 018f1990

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::openRemoteHistory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_remoteItems_026b8438);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_remoteListLoading_026b84f0);
    if ((IVar2 & 1) == 0) {
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W7Re_
                );
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRemoteListLoading__026b84f8,1);
      IVar2 = local_18;
      puVar4 = PTR_WCRefineCloudBackupService_026cf140;
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_018f1bbc;
      local_40 = &DAT_0258a1d8;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_28;
      local_38 = IVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_listRemoteBackupsWithCompletion__026abc48,&local_58);
      _objc_storeStrong(&local_30);
      _objc_storeStrong(&local_38,0);
      _objc_storeStrong(&local_28,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_W7ReNzRh);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentRemoteHistoryAlert_026b8500);
  }
  return;
}

