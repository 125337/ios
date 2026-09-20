// FUN_015882f8 @ 015882f8

void FUN_015882f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  FUN_0158845c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_28 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_40 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_38 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_40,0);
  return;
}

