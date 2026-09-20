// toggleTargetMode: @ 01deeadc

/* Function Stack Size: 0x18 bytes */

void WCRefineStepCountSettingsViewController::toggleTargetMode_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setStepCountTargetModeEnabled__026c59e8,uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setStepCountTodayFinal__026a7ed8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setStepCountTodayPlanDate__026a7f40,&::cf___)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

