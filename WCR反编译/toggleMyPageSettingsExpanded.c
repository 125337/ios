// toggleMyPageSettingsExpanded @ 01f403fc

/* Function Stack Size: 0x10 bytes */

void WCRefineUICleanViewController::toggleMyPageSettingsExpanded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_myPageSettingsExpanded_026c8a30);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setMyPageSettingsExpanded__026c89e0,(uint)IVar1 ^ 1);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_myPageSettingsExpanded_026c8a30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setBool_forKey__026a9618,IVar1,&cf_WCRefineLayoutMyPageSettingsExpanded);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

