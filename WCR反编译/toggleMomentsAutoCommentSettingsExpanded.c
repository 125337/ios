// toggleMomentsAutoCommentSettingsExpanded @ 01c0a014

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::toggleMomentsAutoCommentSettingsExpanded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentsAutoCommentSettingsExpand_026c0db0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setMomentsAutoCommentSettingsExp_026c0c88,(uint)IVar1 ^ 1);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentsAutoCommentSettingsExpand_026c0db0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setBool_forKey__026a9618,IVar1,
             &cf_WCRefineMomentsAutoCommentSettingsExpanded);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_synchronize_026a0798);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

