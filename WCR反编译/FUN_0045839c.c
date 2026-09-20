// FUN_0045839c @ 0045839c

bool FUN_0045839c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (DAT_028ca9b8 != 0) {
    FUN_0043c204();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return bVar1;
}

