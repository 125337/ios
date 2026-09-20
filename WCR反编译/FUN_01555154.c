// FUN_01555154 @ 01555154

void FUN_01555154(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_storeStrong(param_1 + 0x20,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_storeStrong(param_1 + 0x28,uVar1);
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),8);
  __Block_object_assign((void *)(param_1 + 0x40),*(void **)(param_2 + 0x40),8);
  return;
}

