// finish:success:message: @ 00f027b0

/* Function Stack Size: 0x24 bytes */

void WCRefineCloudBackupService::finish_success_message_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,bool param_5,ID param_6)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  byte local_40;
  uint local_3c;
  undefined8 local_38;
  byte local_29;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_29 = (byte)param_4;
  _objc_storeStrong(&local_38,param_5);
  puVar4 = PTR___dispatch_main_q_02578680;
  bVar1 = local_28 != 0;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_28;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_00f02928;
    local_58 = &DAT_02581f90;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_38;
    local_48 = lVar3;
    local_40 = local_29 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar2;
    _dispatch_async(puVar4,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

