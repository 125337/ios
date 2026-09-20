// FUN_000a68d0 @ 000a68d0

bool FUN_000a68d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_000b4068();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  FUN_000b3ecc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return lVar2 != 0;
}

