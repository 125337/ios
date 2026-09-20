// FUN_00fb2388 @ 00fb2388

void FUN_00fb2388(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  FUN_00fb25a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_38 = uVar1;
  FUN_00fb2984(uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___dispatch_main_q_02578680;
  local_40 = uVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_40;
  local_68 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_38;
  local_58 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

