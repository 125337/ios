// FUN_006ef7cc @ 006ef7cc

void FUN_006ef7cc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_storeStrong(param_1 + 0x20,uVar1);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  return;
}

