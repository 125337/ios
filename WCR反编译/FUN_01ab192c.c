// FUN_01ab192c @ 01ab192c

void FUN_01ab192c(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_70;
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
  dVar1 = _dispatch_time(0,250000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  puVar2 = puVar4;
  _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01ab1b40;
  local_40 = &DAT_0257a800;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar3;
  _dispatch_after(dVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar1 = _dispatch_time(0,550000000);
  _objc_retainAutoreleaseReturnValue(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar3;
  _objc_copyWeak(auStack_60,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar3;
  _dispatch_after(dVar1,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_68);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_38,0);
  return;
}

