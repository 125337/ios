// toggleDisableUpdateNotification: @ 01ca5048

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginManagementViewController::toggleDisableUpdateNotification_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setBool_forKey__026a9618,uVar2,&cf_WCRefineDisableUpdateNotification);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  local_30 = &cf__y_ucNfec_y;
  if ((uVar2 & 1) == 0) {
    local_30 = &cf___T_ucNfec_y;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

