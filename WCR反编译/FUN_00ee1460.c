// FUN_00ee1460 @ 00ee1460

void FUN_00ee1460(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  _objc_storeStrong(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

