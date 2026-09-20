// FUN_01993368 @ 01993368

void FUN_01993368(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  dVar1 = _dispatch_time(0,200000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  _dispatch_after(dVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_28);
  return;
}

