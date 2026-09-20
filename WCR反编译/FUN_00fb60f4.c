// FUN_00fb60f4 @ 00fb60f4

void FUN_00fb60f4(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  byte local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  puVar1 = PTR___dispatch_main_q_02578680;
  if (*(long *)(param_1 + 0x20) != 0) {
    local_28 = param_1;
    local_19 = param_2;
    local_18 = param_1;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00fb61ec;
    local_40 = &DAT_02582e58;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_19 & 1;
    local_38 = uVar2;
    _dispatch_async(puVar1,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

