// editInitialSteps @ 01def624

/* Function Stack Size: 0x10 bytes */

void WCRefineStepCountSettingsViewController::editInitialSteps(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_x7;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stepCountInitial_026a7ee0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  puVar6 = local_28;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stepCountTargetModeEnabled_026a7ef8);
  pcVar1 = &cf_wYekpe;
  if (((ulong)puVar6 & 1) == 0) {
    pcVar1 = &cf_V_ekpe;
  }
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stepCountTargetModeEnabled_026a7ef8);
  pcVar2 = &cf_NvhvTRvc9e_Nekpe;
  if (((ulong)puVar5 & 1) == 0) {
    pcVar2 = &cf_k_kNb__WdkekpeN__X;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_presentStepInputTitle_message_de_026c5a18,pcVar1,pcVar2,local_30,6,
             PTR_s_handleInitialStepsInput__026c5a10,in_x7,puVar4);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

