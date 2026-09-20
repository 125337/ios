// containerEnabledChanged: @ 01c86aac

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginContainerSettingsViewController::containerEnabledChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setContainerEnabled__026c2970,uVar2);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setGroupingEnabled__026c2980,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setShowsEntryInMoreView__026c2978,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginHubManager_026ce800,PTR_s_activateCompatibilityFacadeIfNee_026a6568
              );
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_applyPersistedCustomEntries_026a6570);
  }
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showRestartAlert_026c2988);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

