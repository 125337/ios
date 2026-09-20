// FUN_00054270 @ 00054270

void FUN_00054270(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_000557ac(local_18,1,&cf_VGrSwMR);
  uVar3 = local_18;
  FUN_00055944();
  uVar2 = local_18;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar2;
    dVar4 = _dispatch_time(0,2500000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00055c10;
    local_40 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    _dispatch_after(dVar4,puVar5,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

