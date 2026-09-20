// addPKCDynamicConfigSection @ 01d81888

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::addPKCDynamicConfigSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_80;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHeaderTitle__0269e3c0,&cf_P);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_pkcOldSettingsVC_026af560);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pkcLetsGoVC_026af568);
  _objc_retainAutoreleasedReturnValue();
  if (local_38 == (cfstringStruct *)0x0) {
    local_80 = &cf__gMn_;
  }
  else {
    local_80 = local_38;
  }
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_configurePKCOldSettings_026c4be8,local_18,&cf_Mn_eHrn_ub,local_80,1);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,puVar1);
  if (local_40 == (cfstringStruct *)0x0) {
    local_a0 = &cf__gMn_;
  }
  else {
    local_a0 = local_40;
  }
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_configurePKCLetsGo_026c4bf0,local_18,&cf_Mn_,local_a0,1);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,puVar1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title__026c3030,
             PTR_s_clearPKCConfiguration_026c4bf8,local_18,&cf_nd_bgMn_);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFooterTitle__0269e3c8,&cf_P);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_18 + (long)_tableViewMgr),PTR_s_addSection__0269e3d0,local_28);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

