// ensureCropSelection @ 0166ae3c

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatCropViewController::ensureCropSelection(ID param_1,SEL param_2)

{
  bool local_11;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasActiveCropSelection_026b1f60);
  local_11 = (param_1 & 1) == 0;
  if (local_11) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQnbFh_SW);
  }
  local_11 = !local_11;
  return (uint)local_11;
}

