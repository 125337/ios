// FUN_0054e638 @ 0054e638

void FUN_0054e638(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_028cb348 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028cb348;
    DAT_028cb348 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028cb348);
  return;
}

