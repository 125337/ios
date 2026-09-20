// FUN_00056bf4 @ 00056bf4

void FUN_00056bf4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_autoreleasePoolPush();
  if (((DAT_028c7b7a & 1) == 0) && (uVar2 = uVar1, FUN_0004c074(), (uVar2 & 1) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  else {
    FUN_00056ab0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_autoreleasePoolPop(uVar1);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x28));
  return;
}

