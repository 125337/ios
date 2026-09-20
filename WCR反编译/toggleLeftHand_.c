// toggleLeftHand: @ 01e245f0

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::toggleLeftHand_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setFanLeftHand__026c6198,uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  _objc_storeStrong(&local_28,0);
  return;
}

