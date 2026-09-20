// FUN_01013154 @ 01013154

void FUN_01013154(long param_1,long param_2)

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
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_storeStrong(param_1 + 0x38,uVar1);
  __Block_object_assign((void *)(param_1 + 0x40),*(void **)(param_2 + 0x40),7);
  __Block_object_assign((void *)(param_1 + 0x48),*(void **)(param_2 + 0x48),8);
  __Block_object_assign((void *)(param_1 + 0x50),*(void **)(param_2 + 0x50),8);
  __Block_object_assign((void *)(param_1 + 0x58),*(void **)(param_2 + 0x58),8);
  __Block_object_assign((void *)(param_1 + 0x60),*(void **)(param_2 + 0x60),8);
  __Block_object_assign((void *)(param_1 + 0x68),*(void **)(param_2 + 0x68),8);
  __Block_object_assign((void *)(param_1 + 0x70),*(void **)(param_2 + 0x70),8);
  __Block_object_assign((void *)(param_1 + 0x78),*(void **)(param_2 + 0x78),8);
  return;
}

