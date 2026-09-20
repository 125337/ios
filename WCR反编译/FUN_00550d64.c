// FUN_00550d64 @ 00550d64

void FUN_00550d64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_028cb338 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028cb338;
    DAT_028cb338 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028cb338);
  return;
}

