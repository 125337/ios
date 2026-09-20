// FUN_008a0394 @ 008a0394

void FUN_008a0394(long param_1)

{
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObserver__0269f128,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28,0);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}

