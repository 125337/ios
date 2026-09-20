// toggleGestureScreenshotSettingsExpanded @ 017fc7c8

/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::toggleGestureScreenshotSettingsExpanded
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_gestureScreenshotSettingsExpande_026b5608);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setGestureScreenshotSettingsExpa_026b55f0,(uint)IVar1 ^ 1);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_gestureScreenshotSettingsExpande_026b5608);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setBool_forKey__026a9618,IVar1,
             &cf_WCRefineAssistGestureScreenshotSettingsExpanded);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

