// backgroundModeChanged: @ 01ec55f0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListSettingsViewController::backgroundModeChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setToDoCardBackgroundUseMedia__026c7a68,lVar2 == 1);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardBackgroundUseMedia_026c7060);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setToDoCardBackgroundSettingsExp_026c7a70,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureToDoBackgroundBaseFolders_026c7a78);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshToDoBackgroundMediaFromSe_026c7a80);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

