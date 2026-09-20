// toggleShowAvatar: @ 01c5e318

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::toggleShowAvatar_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShowAvatarTQQ__026c1d30,0);
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShowAvatar__026c1d28,uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveSettings_026b9548);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

