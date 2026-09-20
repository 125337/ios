// FUN_00f3e80c @ 00f3e80c

void FUN_00f3e80c(long param_1)

{
  dispatch_queue_t pdVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = param_1;
  pdVar1 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_30 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar2;
  _dispatch_async(pdVar1);
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_20,0);
  return;
}

