// showVoiceInputBreathingLightPaletteSlotPicker @ 01a3b544

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::showVoiceInputBreathingLightPaletteSlotPicker
               (ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  char *pcVar3;
  char *local_40;
  ID local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar3;
  FUN_01a3ac58();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_28;
  local_30 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_18;
  local_40 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_enumerateObjectsUsingBlock__0269d3d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_show_0269d280);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

