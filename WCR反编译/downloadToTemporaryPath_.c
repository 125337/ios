// downloadToTemporaryPath: @ 00f09420

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupService::downloadToTemporaryPath_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  ID local_38;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_supportsVersionHistory_026aba88);
  IVar3 = local_18;
  uVar2 = local_28;
  bVar1 = (IVar4 & 1) != 0;
  if (bVar1) {
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_00f09584;
    local_48 = &DAT_025824f8;
    local_38 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_listRemoteBackupsWithCompletion__026abc48,&local_60);
    _objc_storeStrong(&local_40,0);
  }
  else {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_normalizedRemotePath_026abb08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_downloadRemotePath_toTemporaryPa_026abbc8,IVar4,local_28);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

