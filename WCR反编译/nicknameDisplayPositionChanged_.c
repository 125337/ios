// nicknameDisplayPositionChanged: @ 01c65638

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::nicknameDisplayPositionChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showSelfAvatar_026c1f30);
  if ((IVar1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showOtherAvatar_026c1f28);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectedSegmentIndex__0269e9e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNicknameDisplayPosition__026c1e78,2);
      goto LAB_01c65730;
    }
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNicknameDisplayPosition__026c1e78,uVar2);
LAB_01c65730:
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveSettings_026b9548);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

