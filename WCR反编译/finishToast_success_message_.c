// finishToast:success:message: @ 018f1120

/* Function Stack Size: 0x24 bytes */

void WCRefineCloudBackupSettingsViewController::finishToast_success_message_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  if ((local_29 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_38,
               local_28);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,local_38,
               local_28);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

