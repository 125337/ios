// FUN_00032210 @ 00032210

void FUN_00032210(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  long local_40;
  undefined4 local_38;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_20 = param_2;
  FUN_00031114();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 != 0) {
    uVar2 = local_18;
    FUN_00031874(local_18,uVar1);
    if ((uVar2 & 1) != 0) {
      local_38 = 1;
      goto LAB_000323ac;
    }
  }
  if (local_20 < 1) {
    local_38 = 1;
  }
  else {
    dVar3 = _dispatch_time(0,200000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_18;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0003407c;
    local_50 = &DAT_025791c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar1;
    local_40 = local_20;
    _dispatch_after(dVar3,puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_48,0);
    local_38 = 0;
  }
LAB_000323ac:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

