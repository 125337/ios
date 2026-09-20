// FUN_019a2060 @ 019a2060

void FUN_019a2060(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong();
  puVar1 = PTR___dispatch_main_q_02578680;
  local_38 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_68 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_30;
  local_60 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_50 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar3;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_30,0);
  return;
}

