// FUN_010132a0 @ 010132a0

void FUN_010132a0(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x78),8);
  __Block_object_dispose(*(void **)(param_1 + 0x70),8);
  __Block_object_dispose(*(void **)(param_1 + 0x68),8);
  __Block_object_dispose(*(void **)(param_1 + 0x60),8);
  __Block_object_dispose(*(void **)(param_1 + 0x58),8);
  __Block_object_dispose(*(void **)(param_1 + 0x50),8);
  __Block_object_dispose(*(void **)(param_1 + 0x48),8);
  _objc_storeStrong(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

