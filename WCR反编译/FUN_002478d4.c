// FUN_002478d4 @ 002478d4

void FUN_002478d4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_00247a18();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    dVar3 = _dispatch_time(0,150000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_00247b10;
    local_38 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar2;
    _dispatch_after(dVar3,puVar4,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

