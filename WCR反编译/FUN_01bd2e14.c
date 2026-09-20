// FUN_01bd2e14 @ 01bd2e14

void FUN_01bd2e14(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  byte local_38;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_30 = param_1;
  local_21 = param_3;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  uVar1 = local_20;
  local_40 = *(undefined8 *)(param_1 + 0x28);
  local_38 = local_21 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_20,0);
  return;
}

