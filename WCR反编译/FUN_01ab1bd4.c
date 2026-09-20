// FUN_01ab1bd4 @ 01ab1bd4

void FUN_01ab1bd4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

