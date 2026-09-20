// defaultSwipeQuoteLengthValue @ 01a3fe84

/* Function Stack Size: 0x10 bytes */

double WCRefineGeneralFunctionViewController::defaultSwipeQuoteLengthValue(ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_50;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_50 = in_d0 * DAT_02324008;
  if (local_50 < 20.0) {
    local_50 = 20.0;
  }
  return local_50;
}

