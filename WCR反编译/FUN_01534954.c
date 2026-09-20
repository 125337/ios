// FUN_01534954 @ 01534954

void FUN_01534954(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    FUN_0152ecd8(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  return;
}

