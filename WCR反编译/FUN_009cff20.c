// FUN_009cff20 @ 009cff20

void FUN_009cff20(long param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  pcVar1 = &cf_T__NlgS_uVGr;
  FUN_009c701c(&cf_T__NlgS_uVGr,0xfffffffffffffffe);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  return;
}

