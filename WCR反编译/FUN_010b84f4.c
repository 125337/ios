// FUN_010b84f4 @ 010b84f4

void FUN_010b84f4(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x50),8);
  __Block_object_dispose(*(void **)(param_1 + 0x48),8);
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  _objc_storeStrong(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

