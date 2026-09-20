// pruneOldBackupsWithCompletion: @ 00f107a8

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupService::pruneOldBackupsWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  IVar2 = local_18;
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  local_30 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_listRemoteBackupsWithCompletion__026abc48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

