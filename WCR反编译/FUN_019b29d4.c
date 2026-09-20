// FUN_019b29d4 @ 019b29d4

void FUN_019b29d4(long param_1)

{
  long lVar1;
  
  if (DAT_028e4398 == 0) {
    FUN_0197f418();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = DAT_028e4398;
    DAT_028e4398 = param_1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028e4398);
  return;
}

