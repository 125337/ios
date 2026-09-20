// FUN_0102df30 @ 0102df30

void FUN_0102df30(long param_1)

{
  dispatch_time_t timeout;
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  dispatch_group_t group;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  group = *(dispatch_group_t *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  timeout = _dispatch_time(0,8000000000);
  _dispatch_group_wait(group,timeout);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_28 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_38 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  return;
}

