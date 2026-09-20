// FUN_009cb4b8 @ 009cb4b8

void FUN_009cb4b8(long param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar1 = &cf__ecS;
    FUN_009c701c(&cf__ecS,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  return;
}

