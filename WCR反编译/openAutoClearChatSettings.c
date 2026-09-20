// openAutoClearChatSettings @ 0180a6b4

/* Function Stack Size: 0x10 bytes */

void WCRefineAutoFunctionViewController::openAutoClearChatSettings(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_38;
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_ensureAutoClearChatTask_026b5c98);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_WCRefineScheduledTaskViewController_026ced20;
    _objc_alloc();
    puVar3 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_taskID__026a6cd8,local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithTaskID__026af668);
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eNRpe_NP);
  }
  local_2c = (uint)(puVar1 == (undefined *)0x0);
  _objc_storeStrong(&local_28,0);
  return;
}

