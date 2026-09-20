// FUN_0043c204 @ 0043c204

void FUN_0043c204(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_028ca9b0 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028ca9b0;
    DAT_028ca9b0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028ca9b0);
  return;
}

