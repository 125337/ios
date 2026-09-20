// FUN_01794ae8 @ 01794ae8

void FUN_01794ae8(void)

{
  char *pcVar1;
  char *pcVar2;
  
  if (DAT_028e4058 == (char *)0x0) {
    pcVar1 = "MMContext";
    _objc_getClass();
    DAT_028e4058 = pcVar1;
  }
  pcVar1 = DAT_028e4058;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_currentContext_0269d5f8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

