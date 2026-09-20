// FUN_01ac4308 @ 01ac4308

void FUN_01ac4308(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR___dispatch_main_q_02578680;
  local_20 = param_1;
  local_18 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_30 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar3;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}

