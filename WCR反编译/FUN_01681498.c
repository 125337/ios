// FUN_01681498 @ 01681498

void FUN_01681498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_30 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_20;
  local_48 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

