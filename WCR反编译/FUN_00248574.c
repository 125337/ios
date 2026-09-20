// FUN_00248574 @ 00248574

void FUN_00248574(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar2 = PTR___dispatch_main_q_02578680;
  bVar1 = *(long *)(param_1 + 0x20) != 0;
  local_28 = param_1;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00248680;
    local_40 = &DAT_02579910;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar3;
    _dispatch_async(puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_20,0);
  return;
}

