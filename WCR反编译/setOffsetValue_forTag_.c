// setOffsetValue:forTag: @ 019ef694

/* Function Stack Size: 0x20 bytes */

void WCRefineFontConvertViewController::setOffsetValue_forTag_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  if (param_4 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWeightOffset__026bb218,param_3);
  }
  else if (param_4 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSizeOffset__026bb220,param_3);
  }
  else if (param_4 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLineHeightOffset__026bb228,param_3);
  }
  else if (param_4 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLetterSpacingOffset__026bb230,param_3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_savePreferences_026bb238);
  return;
}

