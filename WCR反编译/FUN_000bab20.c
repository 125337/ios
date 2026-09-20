// FUN_000bab20 @ 000bab20

void FUN_000bab20(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  dVar1 = _dispatch_time(0,10000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_30 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar4;
  _dispatch_after(dVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}

