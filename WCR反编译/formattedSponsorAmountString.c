// formattedSponsorAmountString @ 01f45bb8

/* Function Stack Size: 0x10 bytes */

ID WCRefineUpdateLogView::formattedSponsorAmountString(ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (in_d0 == (double)(long)in_d0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

