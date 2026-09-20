// editTargetSteps @ 01def9d8

/* Function Stack Size: 0x10 bytes */

void WCRefineStepCountSettingsViewController::editTargetSteps(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stepCountRandomEnabled_026a7f20);
  IVar1 = local_18;
  if (((ulong)puVar2 & 1) == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_targetCellValue_026c59b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_presentStepInputTitle_message_de_026c5a18,&cf_vhekpe,&cf_V_vhY,IVar3,6,
               PTR_s_handleFixedTargetInput__026c5a38);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_targetCellValue_026c59b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_presentStepInputTitle_message_de_026c5a18,&cf__gV,&cf_Y,IVar3,0x10,
               PTR_s_handleRangeInput__026c5a30);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

