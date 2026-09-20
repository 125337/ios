// handleMoveToForeground @ 00eb5ab8

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundBlur::handleMoveToForeground(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelScheduledApplyBlur_026ab270);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fc3333333333333,param_1,PTR_s_removeBlurWithDuration__026ab278);
  return;
}

