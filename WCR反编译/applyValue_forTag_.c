// applyValue:forTag: @ 01e17818

/* Function Stack Size: 0x20 bytes */

void WCRefineSuperFloatFanSettingsViewController::applyValue_forTag_
               (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_snappedValueForTag_raw__026c5d98,param_4);
  if ((undefined *)param_4 == &DAT_00011d29) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_3,PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setFanStartAngle__026c5da0);
  }
  else if ((undefined *)param_4 == &DAT_00011d2a) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_3,PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setFanEndAngle__026c5da8);
  }
  else if ((undefined *)param_4 == &DAT_00011d2b) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_3,PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setFanBottomStartAngle__026c5db0
              );
  }
  else if ((undefined *)param_4 == &DAT_00011d2c) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_3,PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setFanBottomEndAngle__026c5db8);
  }
  else if ((undefined *)param_4 == &DAT_00011d2d) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_3,PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setFanCornerGapX__026c5dc0);
  }
  else if ((undefined *)param_4 == &DAT_00011d2e) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_3,PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setFanCornerGapY__026c5dc8);
  }
  return;
}

