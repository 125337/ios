// FUN_01aad974 @ 01aad974

void FUN_01aad974(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_28 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_38,0);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_20,0);
  return;
}

