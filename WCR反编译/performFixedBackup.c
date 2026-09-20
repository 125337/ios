// performFixedBackup @ 01ca1794

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::performFixedBackup(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_performWCRefineConfigBackupToSan_026a7e90);
  puVar2 = PTR_WCRefineCloudBackupService_026cf140;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineCloudBackupService_026cf140,PTR_s_shouldSyncOnLocalBackup_026c2d90);
  if (((ulong)puVar2 & 1) != 0) {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WNONz_)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineCloudBackupService_026cf140;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01ca1904;
    local_40 = &DAT_0258a178;
    local_28 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_18;
    local_38 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_uploadCurrentConfigWithCompletio_026abcc0,&local_58);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

