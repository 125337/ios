// FUN_0081f55c @ 0081f55c

void FUN_0081f55c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_0081f228();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    local_30 = DAT_028cd1c8;
    _objc_initWeak(auStack_38,local_18);
    dVar3 = _dispatch_time(0,350000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0081fccc;
    local_50 = &DAT_02579bb0;
    local_40 = local_30;
    _objc_copyWeak(auStack_48,auStack_38);
    _dispatch_after(dVar3,puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

