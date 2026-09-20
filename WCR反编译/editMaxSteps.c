// editMaxSteps @ 01df0ba8

/* Function Stack Size: 0x10 bytes */

void WCRefineStepCountSettingsViewController::editMaxSteps(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stepCountMaxCap_026a7f00);
  local_48 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((long)puVar1 < 1) {
    local_48 = &::cf___;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stepCountMaxCap_026a7f00);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  if ((long)puVar1 >= 1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentStepInputTitle_message_de_026c5a18,&::cf___,&::cf___,local_30,6,
             PTR_s_handleMaxStepsInput__026c5a60);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

