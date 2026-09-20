// handleMaxStepsInput: @ 01df0d60

/* Function Stack Size: 0x18 bytes */

void WCRefineStepCountSettingsViewController::handleMaxStepsInput_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_01deef5c();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_30 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setStepCountMaxCap__026c5a68,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  pcVar1 = &::cf___;
  if ((long)local_30 < 1) {
    pcVar1 = &cf__Sm_v;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

