// FUN_00fef0a4 @ 00fef0a4

void FUN_00fef0a4(long param_1)

{
  if (((DAT_028e30f1 & 1) != 0) && (*(long *)(param_1 + 0x30) == DAT_028e3120)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    FUN_00fee7b8();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

