// FUN_0079c4d8 @ 0079c4d8

void FUN_0079c4d8(long param_1)

{
  long lVar1;
  
  if (DAT_028ccab0 == 0) {
    FUN_007a0d70();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = DAT_028ccab0;
    DAT_028ccab0 = param_1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028ccab0);
  return;
}

