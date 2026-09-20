// FUN_00098b64 @ 00098b64

void FUN_00098b64(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

