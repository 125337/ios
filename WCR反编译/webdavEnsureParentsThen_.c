// webdavEnsureParentsThen: @ 00f0b7f8

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupService::webdavEnsureParentsThen_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_parentDirectoriesOfRemotePath_026abc68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_webdavMkcolRemaining_index_compl_026abc70,IVar1,0,local_28);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

