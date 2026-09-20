// FUN_009cee80 @ 009cee80

void FUN_009cee80(long param_1)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  
  lVar2 = *(long *)(param_1 + 0x28);
  local_48 = *(cfstringStruct **)(param_1 + 0x20);
  bVar1 = local_48 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_48 = &cf_BlSpe;
    FUN_009c701c(&cf_BlSpe,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_48;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,0,0,local_48);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

