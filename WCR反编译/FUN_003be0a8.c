// FUN_003be0a8 @ 003be0a8

void FUN_003be0a8(long param_1,long param_2)

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
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_storeStrong(param_1 + 0x40,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_storeStrong(param_1 + 0x48,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_storeStrong(param_1 + 0x50,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_storeStrong(param_1 + 0x58,uVar1);
  __Block_object_assign((void *)(param_1 + 0x60),*(void **)(param_2 + 0x60),7);
  __Block_object_assign((void *)(param_1 + 0x68),*(void **)(param_2 + 0x68),7);
  return;
}

