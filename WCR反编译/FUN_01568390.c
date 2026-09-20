// FUN_01568390 @ 01568390

void FUN_01568390(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  if (*(long *)(param_1 + 0x30) == DAT_028e3958) {
    local_20 = param_1;
    local_18 = param_1;
    dVar1 = _dispatch_time(0,450000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_015684b0;
    local_40 = &DAT_02586760;
    local_28 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_38 = uVar3;
    _dispatch_after(dVar1,puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

