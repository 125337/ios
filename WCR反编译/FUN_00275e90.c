// FUN_00275e90 @ 00275e90

void FUN_00275e90(long param_1,byte param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_38;
  uint local_34;
  long local_30;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR___dispatch_main_q_02578680;
  bVar1 = *(long *)(param_1 + 0x20) != 0;
  local_30 = param_1;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00275fec;
    local_50 = &DAT_0257b1d8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_28;
    local_38 = local_19 & 1;
    local_40 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    _dispatch_async(puVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

