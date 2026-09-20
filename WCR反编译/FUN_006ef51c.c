// FUN_006ef51c @ 006ef51c

void FUN_006ef51c(long param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  lVar1 = param_1 + 0x30;
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else if ((local_19 & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    local_34 = 0;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_006ef6c0;
    local_50 = &DAT_02578e60;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_30;
    local_48 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    _dispatch_async(puVar2,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_34 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

