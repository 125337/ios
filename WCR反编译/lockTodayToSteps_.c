// lockTodayToSteps: @ 01ded6c0

/* Function Stack Size: 0x18 bytes */

void WCRefineStepCountSettingsViewController::lockTodayToSteps_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *local_38;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_todayKey_026c5980);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setStepCountTodayFinal__026a7ed8,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setStepCountTodayPlanDate__026a7f40,local_30)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setStepCountLastReported__026a7f08,local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setStepCountLastReportDate__026a7f10,local_30);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

