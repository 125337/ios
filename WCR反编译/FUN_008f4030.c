// FUN_008f4030 @ 008f4030

void FUN_008f4030(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_008f3a68();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = **(long **)(param_1 + 0x20);
  **(long **)(param_1 + 0x20) = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  return;
}

