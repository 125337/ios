// FUN_0081edf4 @ 0081edf4

void FUN_0081edf4(long param_1)

{
  if (*(long *)(param_1 + 0x28) == DAT_028cd1c8) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    FUN_0081ee94();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

