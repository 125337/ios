// toggleUnreadDotSettingsExpanded @ 01cb7048

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::toggleUnreadDotSettingsExpanded(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_unreadDotSettingsExpanded_026c3120);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setUnreadDotSettingsExpanded__026c32f8,(uint)IVar1 ^ 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

