// invalidateTodayPlan @ 01ded5e8

/* Function Stack Size: 0x10 bytes */

void WCRefineStepCountSettingsViewController::invalidateTodayPlan(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setStepCountTodayFinal__026a7ed8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStepCountTodayPlanDate__026a7f40);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStepCountLastReported__026a7f08,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setStepCountLastReportDate__026a7f10,&::cf___);
  _objc_storeStrong(&local_28,0);
  return;
}

