// FUN_006dc5f0 @ 006dc5f0

void FUN_006dc5f0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    dVar3 = _dispatch_time(0,350000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_006dcfc0;
    local_30 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
    _dispatch_after(dVar3,puVar4,&local_48);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

