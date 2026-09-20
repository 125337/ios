// deleteRemoteBackupAtPath:completion: @ 00f0fb5c

/* Function Stack Size: 0x20 bytes */

void WCRefineCloudBackupService::deleteRemoteBackupAtPath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  ID local_40;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_finish_success_message__026abb10,local_30,0,&cf_lgc_RdvYN);
    local_34 = 1;
  }
  else {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_supportsVersionHistory_026aba88);
    IVar2 = local_18;
    lVar3 = local_28;
    uVar1 = local_30;
    if ((IVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_finish_success_message__026abb10,local_30,0,&cf__IN);
      local_34 = 1;
    }
    else {
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_00f0fd28;
      local_50 = &DAT_02582378;
      local_40 = local_18;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_deleteRemotePath_completion__026abca0,lVar3,&local_68);
      _objc_storeStrong(&local_48,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

