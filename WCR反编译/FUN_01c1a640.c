// FUN_01c1a640 @ 01c1a640

void FUN_01c1a640(long param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

