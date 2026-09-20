// FUN_00504a98 @ 00504a98

void FUN_00504a98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028caf58;
  DAT_028caf58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

