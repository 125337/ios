// applySliderValue:forKind: @ 019db724

/* Function Stack Size: 0x20 bytes */

void WCRefineFontBeautifyViewController::applySliderValue_forKind_
               (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 0x7d1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setFontBeautifyScale__026baf78);
  }
  else if (local_30 == 0x7d2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setFontBeautifyWeightDelta__026baf80,(long)local_28);
  }
  else if (local_30 == 0x7d3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFontBeautifyLetterSpacing__026baf88);
  }
  else if (local_30 == 0x7d4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFontBeautifyLineSpacing__026baf90);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

