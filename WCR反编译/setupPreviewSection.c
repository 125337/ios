// setupPreviewSection @ 018be4a4

/* Function Stack Size: 0x10 bytes */

void WCRefineChatTimeViewController::setupPreviewSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  char *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  pcVar3 = "WCTableViewNormalCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,pcVar3);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

