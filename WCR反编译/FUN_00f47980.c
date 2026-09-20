// FUN_00f47980 @ 00f47980

void FUN_00f47980(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  puVar1 = PTR___dispatch_main_q_02578680;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = *(byte *)(param_1 + 0x30) & 1;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_48 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  return;
}

