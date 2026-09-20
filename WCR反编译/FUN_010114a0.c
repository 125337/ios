// FUN_010114a0 @ 010114a0

void FUN_010114a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,local_20);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x20));
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

