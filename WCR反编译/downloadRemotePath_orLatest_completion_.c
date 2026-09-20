// downloadRemotePath:orLatest:completion: @ 00f08158

/* Function Stack Size: 0x24 bytes */

void WCRefineCloudBackupService::downloadRemotePath_orLatest_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  ID IVar2;
  undefined **ppuVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  ID local_50;
  undefined **local_48;
  undefined4 local_3c;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isReady_026aba68);
  uVar1 = local_38;
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_finish_success_message__026abb10,local_38,0,&::cf_HQ);
    local_3c = 1;
  }
  else {
    ppuVar3 = &local_78;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00f0830c;
    local_60 = &DAT_02582228;
    local_50 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar1;
    _objc_retainBlock();
    local_48 = ppuVar3;
    if ((local_29 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_downloadRemotePath_toTemporaryPa_026abbc8,local_28,ppuVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_downloadToTemporaryPath__026abbc0,ppuVar3);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_58,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

