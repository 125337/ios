// FUN_0050845c @ 0050845c

void FUN_0050845c(long param_1)

{
  bool bVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  _objc_alloc_init();
  bVar1 = lVar2 != 0;
  local_28 = lVar2;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_view_026cabd8);
    _objc_unsafeClaimAutoreleasedReturnValue(lVar2);
    dVar3 = _dispatch_time(0,100000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_00508688;
    local_58 = &DAT_0257d818;
    local_40 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar5;
    _dispatch_after(dVar3,puVar4,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

