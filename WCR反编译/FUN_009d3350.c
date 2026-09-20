// FUN_009d3350 @ 009d3350

void FUN_009d3350(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_storeStrong(param_1 + 0x20,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_storeStrong(param_1 + 0x28,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_storeStrong(param_1 + 0x30,uVar1);
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),7);
  __Block_object_assign((void *)(param_1 + 0x40),*(void **)(param_2 + 0x40),7);
  return;
}

