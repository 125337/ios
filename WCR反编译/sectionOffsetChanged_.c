// sectionOffsetChanged: @ 01ae87c4

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeAvatarStripSettingsViewController::sectionOffsetChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectedSegmentIndex__0269e9e0,1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeAvatarStripSectionOffset_026a23d0);
    puVar1 = local_38;
    if ((long)puVar3 < -4) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__0R);
      goto LAB_01ae89f0;
    }
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripSectionOffset_026a23d0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setHomeAvatarStripSectionOffset__026be4b8,puVar3 + -1);
  }
  else {
    if (local_30 != 2) goto LAB_01ae89f0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeAvatarStripSectionOffset_026a23d0);
    puVar1 = local_38;
    if (2 < (long)puVar3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__0R);
      goto LAB_01ae89f0;
    }
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeAvatarStripSectionOffset_026a23d0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setHomeAvatarStripSectionOffset__026be4b8,puVar3 + 1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHaptic_026bab98);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
LAB_01ae89f0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

