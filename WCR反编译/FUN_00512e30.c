// FUN_00512e30 @ 00512e30

void FUN_00512e30(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  puVar3 = PTR___dispatch_main_q_02578680;
  local_28 = lVar2;
  if (lVar2 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_00512f74;
    local_48 = &DAT_02579e20;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar4;
    _dispatch_async(puVar3,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  local_2c = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

