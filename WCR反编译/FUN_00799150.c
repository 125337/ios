// FUN_00799150 @ 00799150

void FUN_00799150(long param_1)

{
  long lVar1;
  
  if (DAT_028ccaa8 == 0) {
    FUN_0079e8c4();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = DAT_028ccaa8;
    DAT_028ccaa8 = param_1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028ccaa8);
  return;
}

