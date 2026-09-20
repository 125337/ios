// FUN_00550cf8 @ 00550cf8

void FUN_00550cf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_028cb360 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028cb360;
    DAT_028cb360 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028cb360);
  return;
}

