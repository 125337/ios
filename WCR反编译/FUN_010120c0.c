// FUN_010120c0 @ 010120c0

void FUN_010120c0(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x48),8);
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  _objc_storeStrong(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

