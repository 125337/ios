// FUN_00095800 @ 00095800

void FUN_00095800(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

