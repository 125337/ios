// toggleActive: @ 01941568

/* Function Stack Size: 0x18 bytes */

void WCRefineDoNotDisturbSettingsViewController::toggleActive_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setUserWantsActive__026abe28,uVar2);
  puVar3 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_isEffectivelyActive_0269d708);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,(byte)puVar3 & 1);
  pcVar1 = &::cf__;
  if (((ulong)puVar3 & 1) == 0) {
    pcVar1 = &cf__sQRpb;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

