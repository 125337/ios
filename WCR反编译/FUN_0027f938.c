// FUN_0027f938 @ 0027f938

void FUN_0027f938(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  __Block_object_dispose(*(void **)(param_1 + 0x50),8);
  __Block_object_dispose(*(void **)(param_1 + 0x48),8);
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  _objc_storeStrong(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

