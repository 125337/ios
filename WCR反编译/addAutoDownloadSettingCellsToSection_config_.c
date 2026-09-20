// addAutoDownloadSettingCellsToSection:config: @ 01a188b8

/* Function Stack Size: 0x20 bytes */

void WCRefineGeneralFunctionViewController::addAutoDownloadSettingCellsToSection_config_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined8 in_x7;
  undefined *local_130;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  char *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  IVar1 = local_50;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoDownloadPrivateChatDef_026bb8a0;
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadPrivateChatDefaultEn_0269d990);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar1,&::cf__,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,puVar3);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadPrivateChatDefaultEn_0269d990);
  local_81 = 0;
  local_91 = 0;
  local_130 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  if ((uVar2 & 1) == 0) {
    local_48 = &cf_c_O;
    local_40 = &cf_cdO;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_130;
  }
  else {
    local_38 = &cf_c__J;
    local_30 = &cf_cd_J;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_130;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar2 = local_68;
  local_a0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadSessionRule_0269d998);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setSelectedSegmentIndex__0269e9e0,uVar2 != 1)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
             PTR_s_handleAutoDownloadSessionRuleCha_026bb8a8,0x1000);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadPrivateChatDefaultEn_0269d990);
  local_a8 = &::cf__;
  if ((uVar2 & 1) == 0) {
    local_a8 = &::cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar5 = "WCTableViewCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,pcVar5);
  IVar1 = local_50;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_openAutoDownloadSessionPicker__026bb8b0;
  IVar6 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_autoDownloadSessionSelectorCellT_026bb8b8);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_autoDownloadSelectedSessionsSumm_026bb8c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar4,IVar1,IVar6,IVar7,1);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,local_b8);
  IVar1 = local_50;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoDownloadImage__026bb8c8;
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadImageEnabled_0269d970);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar1,&::cf__,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,puVar3);
  IVar1 = local_50;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoDownloadVideo__026bb8d0;
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadVideoEnabled_0269d978);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar1,&::cf__,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,puVar3);
  IVar1 = local_50;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoDownloadFile__026bb8d8;
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadFileEnabled_0269d980);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar1,&::cf__,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,puVar3);
  IVar1 = local_50;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoDownloadHistory__026bb8e0;
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadHistoryEnabled_0269d940);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar1,&::cf__,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,puVar3);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadHistoryEnabled_0269d940);
  IVar1 = local_50;
  puVar8 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar4 = PTR_s_setAutoDownloadHistoryMaxAgeDays_026bb8e8;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_autoDownloadHistoryMaxAgeDays_0269dad8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar4,IVar1,&::cf__,puVar3,1,
               in_x7,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,local_e0);
    _objc_storeStrong(&local_e0,0);
  }
  IVar1 = local_50;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_setAutoDownloadLimitMB_026bb8f0;
  puVar8 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_limitDisplayText_026bb8f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar4,IVar1,&::cf__,puVar8,1);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,local_e8);
  local_f0 = (undefined *)0x0;
  puVar4 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_usedBytes_026ab198);
  puVar3 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
  local_f8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_formatBytes__026ab1a0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_f0;
  local_f0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
             PTR_s_isQuotaExceededForUsedBytes__026ab1a8,local_f8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_f0;
    local_f0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_showAutoDownloadUsageActions_026bb900,local_50,&::cf__,local_f0,1);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addCell__0269e3f8,puVar4);
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

