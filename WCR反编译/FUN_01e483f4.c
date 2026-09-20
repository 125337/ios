// FUN_01e483f4 @ 01e483f4

void FUN_01e483f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  puVar1 = PTR___dispatch_main_q_02578680;
  local_20 = param_1;
  local_18 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_28);
  return;
}

