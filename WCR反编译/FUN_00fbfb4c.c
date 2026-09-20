// FUN_00fbfb4c @ 00fbfb4c

void FUN_00fbfb4c(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  puVar1 = PTR___dispatch_main_q_02578680;
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_19 & 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = *(undefined8 *)(param_1 + 0x30);
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

