// buildRecentSection @ 01e46554

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingTabsViewController::buildRecentSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_x7;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setFooterTitle__0269e3c8,&cf_Sq_T0);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_18;
  puVar1 = local_30;
  puVar6 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar2 = PTR_s_editRecentDays_026c6570;
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeTelegramGroupingRecentDays_026b0278);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,&::cf_0,puVar3,1,
             in_x7,puVar5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

