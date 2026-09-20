// toggleHomeGroupingSettingsExpanded @ 01ac71c8

/* Function Stack Size: 0x10 bytes */

void WCRefineGroupManagementViewController::toggleHomeGroupingSettingsExpanded
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homeGroupingSettingsExpanded_026be020);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setHomeGroupingSettingsExpanded__026be0b0,(uint)puVar1 ^ 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupData_026b7c20);
  _objc_storeStrong(&local_28,0);
  return;
}

