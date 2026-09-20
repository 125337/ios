// FUN_01099fb4 @ 01099fb4

void FUN_01099fb4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_0123456789abcdefABCDEF);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e32b0;
  DAT_028e32b0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

