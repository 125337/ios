// addAutoClearChatSection @ 0180a38c

/* Function Stack Size: 0x10 bytes */

void WCRefineAutoFunctionViewController::addAutoClearChatSection(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *local_70;
  undefined *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_autoClearChatTask_026a6cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineScheduledTask_026ce850;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,puVar2,
             _kWCRScheduledTaskKeyTargets);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_70 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  local_41 = false;
  bVar1 = local_28 == (undefined *)0x0;
  local_30 = puVar2;
  if (bVar1) {
    local_70 = &cf__gn_;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_isTaskEnabled__026a6cb8,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&cf_Rnt);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_setFooterTitle__0269e3c8,&cf_cc_hTgnzz_OvJ_YU_v_OYuOeQS0);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar2 = local_50;
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_openAutoClearChatSettings_026b5c90,local_18,&cf_RndJ_YU_,local_38,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

