// clearResults @ 00fe4d44

/* Function Stack Size: 0x10 bytes */

void WCRefineIconNameCaptureSupport::clearResults(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3058,PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3060,PTR_s_removeAllObjects_0269d508);
  DAT_028e3080 = 0;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

