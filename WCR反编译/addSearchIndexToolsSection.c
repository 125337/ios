// addSearchIndexToolsSection @ 01d7b7e8

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::addSearchIndexToolsSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHeaderTitle__0269e3c0,&cf_____wQ);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_rebuildSearchIndex_026c4b68,local_18,&cf__d_____,0,1);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setFooterTitle__0269e3c8,&cf_gcNfeTdN0RS_____);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_18 + (long)_tableViewMgr),PTR_s_addSection__0269e3d0,local_28);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

