// FUN_01992940 @ 01992940

void FUN_01992940(long param_1)

{
  dispatch_queue_t pdVar1;
  undefined8 uVar2;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  pdVar1 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  _dispatch_async(pdVar1);
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

