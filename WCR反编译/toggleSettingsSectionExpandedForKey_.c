// toggleSettingsSectionExpandedForKey: @ 01e1f4bc

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::toggleSettingsSectionExpandedForKey_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_settingsSectionExpandedForKey__026c5f40,
             local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setSettingsSectionExpanded_forKe_026c5f48,
             ((byte)puVar1 ^ 1) & 1,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

