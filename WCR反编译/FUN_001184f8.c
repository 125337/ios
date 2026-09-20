// FUN_001184f8 @ 001184f8

void FUN_001184f8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028c8550;
  DAT_028c8550 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

