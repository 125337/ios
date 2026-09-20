// onCancelSeletctedLocation @ 0195a29c

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationSettingsViewController::onCancelSeletctedLocation(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_pickMode) = 0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0)
  ;
  return;
}

