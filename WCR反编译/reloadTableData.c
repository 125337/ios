// reloadTableData @ 01f9c6b4

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackSettingsViewController::reloadTableData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  cfstringStruct *pcVar6;
  char *pcVar7;
  ID IVar8;
  cfstringStruct *local_1d0;
  undefined *local_a0;
  char *local_98;
  undefined *local_90;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined1 *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,&cf_SR);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setFooterTitle__0269e3c8,&cf_Q_uRfN_Y);
  IVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_50;
  puVar1 = local_68;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleEnabled__026b5ca0;
  puVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackEnabled_026a9ce0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_uSR,puVar5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackEnabled_026a9ce0);
  IVar4 = local_50;
  puVar1 = local_68;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleContinuousSend__026c9c88;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackContinuousSendEnabled_026c9c18);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__T_u_Se_,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_50;
    puVar1 = local_68;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleAttachment__026c9c90;
    puVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackAttachmentEnabled_026a9d18);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_J_Y_wQDNeQS,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_50;
    puVar1 = local_68;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_togglePlusLongPress__026c3098;
    puVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackPlusLongPressEnabled_026a9d30);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__cSNRSeQS,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_50;
    puVar1 = local_68;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleQuickBar__026c9c98;
    puVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackQuickBarEnabled_026a9d20);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_J_Yh_wc_tc,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar6 = (cfstringStruct *)PTR_WCRefineVoicePackStore_026cea20;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackStore_026cea20,PTR_s_resolvedRelativePath_026ae1f0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_50;
    puVar1 = local_68;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_selectPath_026c9ca0;
    local_70 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_1d0 = &::cf__;
    }
    else {
      local_1d0 = local_70;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&cf_bSv_,
               local_1d0,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_38 = &cf_JSO_;
    local_30 = &cf_ceQ;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
    local_78 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackPresentMode_026c9af8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setSelectedSegmentIndex__0269e9e0,
               puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
               PTR_s_presentModeChanged__026c9ca8);
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addCell__0269e3f8,pcVar7);
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&cf___mo_N_);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setFooterTitle__0269e3c8,&cf_MR_);
    IVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_48 = &cf_MR;
    local_40 = &::cf_T;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
    local_90 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackBindSendOrder_026c9ab8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_setSelectedSegmentIndex__0269e9e0,
               puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
               PTR_s_bindOrderChanged__026c9cb0,0x1000);
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addCell__0269e3f8,pcVar7);
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&cf__t);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_setFooterTitle__0269e3c8,&cf__cJ_Y0_eQ0S_TTv__);
    IVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar2 = local_a0;
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
               PTR_s_openManager_026c9cb8,local_50,&cf_S_t,0,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_a0;
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
               PTR_s_openDownloadOptions_026c9cc0,local_50,&cf_SN_,0,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  IVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pageSheetMode_026c9788);
  if ((IVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

