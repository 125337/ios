// FUN_009cee0c @ 009cee0c

void FUN_009cee0c(long param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  pcVar1 = &cf_hgeuVcS0A;
  FUN_009c701c(&cf_hgeuVcS0A,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  return;
}

