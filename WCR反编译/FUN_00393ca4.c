// FUN_00393ca4 @ 00393ca4

void FUN_00393ca4(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x48),8);
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  _objc_storeStrong(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

