// avatarDisplayModeChanged: @ 01c64abc

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::avatarDisplayModeChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShowOtherAvatar__026c1db8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShowSelfAvatar__026c1db0,0);
  }
  else if (lVar1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShowOtherAvatar__026c1db8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShowSelfAvatar__026c1db0,1);
  }
  else if (lVar1 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShowOtherAvatar__026c1db8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShowSelfAvatar__026c1db0,1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveSettings_026b9548);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

