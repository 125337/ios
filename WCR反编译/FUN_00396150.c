// FUN_00396150 @ 00396150

void FUN_00396150(long param_1,long param_2)

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
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_storeStrong(param_1 + 0x60,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_storeStrong(param_1 + 0x68,uVar1);
  __Block_object_assign((void *)(param_1 + 0x70),*(void **)(param_2 + 0x70),7);
  __Block_object_assign((void *)(param_1 + 0x78),*(void **)(param_2 + 0x78),7);
  __Block_object_assign((void *)(param_1 + 0x80),*(void **)(param_2 + 0x80),7);
  return;
}

