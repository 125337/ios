// FUN_01630b20 @ 01630b20

void FUN_01630b20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e3c30;
  DAT_028e3c30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

