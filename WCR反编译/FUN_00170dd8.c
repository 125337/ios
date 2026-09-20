// FUN_00170dd8 @ 00170dd8

void FUN_00170dd8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}

