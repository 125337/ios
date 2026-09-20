// FUN_003d2750 @ 003d2750

void FUN_003d2750(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028ca300;
  DAT_028ca300 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

