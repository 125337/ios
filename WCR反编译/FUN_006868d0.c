// FUN_006868d0 @ 006868d0

void FUN_006868d0(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_30;
  byte local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  dVar1 = _dispatch_time(0,350000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_28 = *(byte *)(param_1 + 0x28) & 1;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  _dispatch_after(dVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30,0);
  return;
}

