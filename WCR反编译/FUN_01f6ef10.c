// FUN_01f6ef10 @ 01f6ef10

void FUN_01f6ef10(long param_1)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x30;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  FUN_01f6d4bc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  dVar3 = _dispatch_time(0,300000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_30 = *(undefined8 *)(param_1 + 0x38);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = lVar1;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  local_38 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar6;
  _dispatch_after(dVar3,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  return;
}

