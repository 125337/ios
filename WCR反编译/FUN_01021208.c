// FUN_01021208 @ 01021208

void FUN_01021208(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,
             &cf_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789__);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e31b0;
  DAT_028e31b0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

