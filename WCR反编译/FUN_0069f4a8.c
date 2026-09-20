// FUN_0069f4a8 @ 0069f4a8

void FUN_0069f4a8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  uint local_28;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = param_3;
  local_20 = param_2;
  if (DAT_028cbdc0 != (code *)0x0) {
    (*DAT_028cbdc0)(local_18,param_2,param_3 & 1);
  }
  puVar3 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = ((ulong)puVar4 & 1) != 0;
  if (bVar1) {
    FUN_0069841c(local_18);
    dVar5 = _dispatch_time(0,150000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_0069f67c;
    local_38 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar2;
    _dispatch_after(dVar5,puVar3,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

