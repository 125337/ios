// FUN_007991a4 @ 007991a4

void FUN_007991a4(long param_1)

{
  long lVar1;
  
  if (DAT_028ccaa0 == 0) {
    FUN_0079e8c4();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = DAT_028ccaa0;
    DAT_028ccaa0 = param_1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028ccaa0);
  return;
}

