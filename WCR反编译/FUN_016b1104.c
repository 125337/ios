// FUN_016b1104 @ 016b1104

void FUN_016b1104(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  return;
}

