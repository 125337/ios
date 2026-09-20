// FUN_00328d00 @ 00328d00

void FUN_00328d00(long param_1)

{
  undefined *puVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  dVar2 = _dispatch_time(0,80000000);
  puVar5 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  puVar3 = puVar5;
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_00328ef0;
  local_40 = &DAT_02579910;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar4;
  _dispatch_after(dVar2,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  dVar2 = _dispatch_time(0,240000000);
  _objc_retainAutoreleaseReturnValue(puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar1;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_00328f24;
  local_70 = &DAT_0257c218;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar4;
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  _dispatch_after(dVar2,puVar5,&local_88);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_38,0);
  return;
}

