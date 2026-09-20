// profileBgSourceModeChanged: @ 01cdc928

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardBeautifyViewController::profileBgSourceModeChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  local_30 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  lVar1 = local_30;
  if ((local_30 < 0) || (lVar1 = local_30 + -3, lVar1 != 0 && 2 < local_30)) {
    local_30 = 0;
  }
  _WCRefineProfileBgApplyWarehouseTab(lVar1,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

