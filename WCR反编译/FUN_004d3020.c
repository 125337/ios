// FUN_004d3020 @ 004d3020

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_004d3020(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_1 < 2) {
    FUN_004d2d9c(param_1 - 2);
  }
  else {
    DAT_028cace9 = 0;
    DAT_028cacea = 1;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    DAT_028cacf0 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028caca0;
    DAT_028caca0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028caca8;
    DAT_028caca8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

