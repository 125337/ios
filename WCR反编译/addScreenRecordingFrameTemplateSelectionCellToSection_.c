// addScreenRecordingFrameTemplateSelectionCellToSection: @ 017f0464

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::addScreenRecordingFrameTemplateSelectionCellToSection_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  ID IVar4;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = "WCTableViewNormalCellManager";
  _objc_getClass();
  IVar2 = local_18;
  puVar1 = PTR_s_openScreenRecordingFrameTemplate_026b5838;
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_screenRecordingFrameTemplateStat_026b5840);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_normalCellForSel_target_title_ri_026a0a88,puVar1,IVar2,&cf_bWYX_j_g,IVar4,
             0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

