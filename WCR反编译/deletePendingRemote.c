// deletePendingRemote @ 018f2a14

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::deletePendingRemote(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingRemotePath_026b8538);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 != 0) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WRd_);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    IVar2 = local_28;
    puVar1 = PTR_WCRefineCloudBackupService_026cf140;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_018f2bb0;
    local_50 = &DAT_0258a178;
    local_38 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_38;
    local_48 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_deleteRemoteBackupAtPath_complet_026b8548,IVar2,&local_68);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(param_1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

