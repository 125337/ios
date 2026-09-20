// editIncrementSteps @ 01df0418

/* Function Stack Size: 0x10 bytes */

void WCRefineStepCountSettingsViewController::editIncrementSteps(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_incrementCellValue_026c59c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_presentStepInputTitle_message_de_026c5a18,&cf_Xekpe,
             &cf_k_k_WV_ekpeNXRvekpe_gX_u,IVar1,0xd,PTR_s_handleIncrementStepsInput__026c5a48);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

