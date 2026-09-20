// FUN_01f6dca0 @ 01f6dca0

void FUN_01f6dca0(long param_1)

{
  undefined8 uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = local_20;
  local_28 = param_1;
  FUN_01f6de38(local_20,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  dVar2 = _dispatch_time(0,200000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_30;
  local_48 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  local_38 = *(undefined8 *)(param_1 + 0x38);
  _dispatch_after(dVar2,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

