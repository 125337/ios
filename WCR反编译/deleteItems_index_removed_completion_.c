// deleteItems:index:removed:completion: @ 00f10d00

/* Function Stack Size: 0x30 bytes */

void WCRefineCloudBackupService::deleteItems_index_removed_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,long_long param_5,
               ID param_6,undefined4 param_7)

{
  long lVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  long local_80;
  long_long local_78;
  ID local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  long local_50;
  long_long local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_50 = 0;
  local_48 = param_5;
  local_40 = param_4;
  _objc_storeStrong(&local_50,param_6);
  uVar4 = local_40;
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (uVar4 < uVar3) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    IVar2 = local_28;
    lVar1 = local_50;
    uVar4 = local_60;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_00f10f4c;
    local_90 = &DAT_025826b8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_38;
    local_80 = lVar1;
    local_78 = local_48;
    local_70 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar3;
    local_68 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_deleteRemotePath_completion__026abca0,uVar4,&local_a8);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  else {
    if (local_50 != 0) {
      (**(code **)(local_50 + 0x10))(local_50,local_48,0);
    }
    local_54 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

