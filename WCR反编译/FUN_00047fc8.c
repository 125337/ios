// FUN_00047fc8 @ 00047fc8

void FUN_00047fc8(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_autoAcceptTransferNotifyEnabled_0269d8c0);
  puVar4 = PTR___dispatch_main_q_02578680;
  bVar1 = ((ulong)puVar3 & 1) != 0;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_000492a0;
    local_48 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_20;
    local_40 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar3;
    _dispatch_async(puVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

