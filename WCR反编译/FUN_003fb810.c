// FUN_003fb810 @ 003fb810

void FUN_003fb810(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  uint uVar2;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  uint local_40;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar3;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_18;
  local_29 = param_4;
  (*DAT_028ca5e0)(local_18,local_20,local_28,param_4 & 1);
  uVar2 = (uint)uVar3;
  FUN_003fbf38();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    _objc_initWeak(auStack_48,local_18);
    dVar4 = _dispatch_time(0,100000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_003fc4ec;
    local_58 = &DAT_02578da0;
    _objc_copyWeak(auStack_50,auStack_48);
    _dispatch_after(dVar4,puVar5,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  local_40 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

