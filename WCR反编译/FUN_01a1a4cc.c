// FUN_01a1a4cc @ 01a1a4cc

void FUN_01a1a4cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Rd);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentNativePageSheetDoneWithTi_026b76a8,&cf__Rd);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

