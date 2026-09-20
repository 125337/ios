// FUN_0077830c @ 0077830c

void FUN_0077830c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

