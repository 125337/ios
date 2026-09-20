// refreshRemoteList @ 018f1784

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::refreshRemoteList(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineCloudBackupService_026cf140;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineCloudBackupService_026cf140,PTR_s_supportsVersionHistory_026aba88);
  if ((((ulong)puVar1 & 1) != 0) &&
     (IVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_remoteListLoading_026b84f0),
     (IVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRemoteListLoading__026b84f8,1);
    IVar2 = local_18;
    puVar1 = PTR_WCRefineCloudBackupService_026cf140;
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_018f18a0;
    local_30 = &DAT_0258a1a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_listRemoteBackupsWithCompletion__026abc48,&local_48);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

