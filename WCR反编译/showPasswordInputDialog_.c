// showPasswordInputDialog: @ 01a32f58

/* Function Stack Size: 0x14 bytes */

void WCRefineGeneralFunctionViewController::showPasswordInputDialog_
               (ID param_1,SEL param_2,bool param_3)

{
  if ((param_3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showChangePasswordDialog_026bc348);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showSetPasswordDialog_026bc340);
  }
  return;
}

