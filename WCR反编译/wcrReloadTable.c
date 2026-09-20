// wcrReloadTable @ 017cea4c

/* Function Stack Size: 0x10 bytes */

void WCRefineAISessionSettingsViewController::wcrReloadTable(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  cfstringStruct *local_310;
  cfstringStruct *local_2e0;
  cfstringStruct *local_230;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  uint local_134;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined *local_118;
  bool local_109;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  int local_dc;
  cfstringStruct *local_d8;
  int local_cc;
  undefined *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  int local_a4;
  cfstringStruct *local_a0;
  int local_94;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  SEL local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = param_2;
  local_60 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrManager_026b5080);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar4 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_60;
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrOptions_026b5098);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineHelper_026ce000;
  local_78 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHeaderTitle__0269e3c0,&cf_S_MRO);
  pcVar6 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrSessionID_026b5090);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar5 = &cf__guUSr;
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar5 = &cf__guUSr;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFooterTitle__0269e3c8,pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  pcVar5 = local_60;
  uVar2 = _WCRAISessionAutoReplyEnabled;
  uVar1 = _WCRAISessionConversationEnabled;
  puVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_chatAgentReplyAll_0269ce80);
  local_134 = 1;
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_chatAgentEnabled_0269ce88);
    local_134 = (uint)puVar4;
  }
  pcVar6 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_wcrBool_fallback__026b50a8,uVar1,local_134 & 1)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_wcrBool_fallback__026b50a8,uVar2,pcVar6);
  puVar4 = local_80;
  local_81 = (byte)pcVar5;
  puVar8 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_switchCellWithSel_target_title_s_026aa260,
             PTR_s_wcrToggleReply__026b50b0,local_60,&cf__T_u,local_81 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  local_40 = &cf_hQ;
  local_38 = &cf__yrb;
  local_30 = &cf___ub;
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithItems__0269e9d8);
  local_90 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  local_94 = 0;
  local_a4 = 2;
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrReplyMode_026b50b8);
  local_198 = pcVar5;
  if ((long)local_a4 < (long)pcVar5) {
    local_198 = (cfstringStruct *)(long)local_a4;
  }
  local_b8 = local_198;
  local_a0 = local_198;
  if ((long)local_94 < (long)local_198) {
    local_1a0 = local_198;
  }
  else {
    local_1a0 = (cfstringStruct *)(long)local_94;
  }
  local_c0 = local_1a0;
  local_b0 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setSelectedSegmentIndex__0269e9e0,local_1a0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_60,
             PTR_s_wcrReplyModeChanged__026b50c0,0x1000);
  puVar4 = local_80;
  pcVar9 = "WCTableViewCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(pcVar9);
  puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  local_58 = &cf___u;
  local_50 = &cf___u_yr;
  local_48 = &cf_8_;
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithItems__0269e9d8);
  local_c8 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  local_cc = 0;
  local_dc = 2;
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrReplyStyle_026b50c8);
  local_1c8 = pcVar5;
  if ((long)local_dc < (long)pcVar5) {
    local_1c8 = (cfstringStruct *)(long)local_dc;
  }
  local_f0 = local_1c8;
  local_d8 = local_1c8;
  if ((long)local_cc < (long)local_1c8) {
    local_1d0 = local_1c8;
  }
  else {
    local_1d0 = (cfstringStruct *)(long)local_cc;
  }
  local_f8 = local_1d0;
  local_e8 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSelectedSegmentIndex__0269e9e0,local_1d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_60,
             PTR_s_wcrReplyStyleChanged__026b50d0,0x1000);
  puVar4 = local_80;
  pcVar9 = "WCTableViewCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(pcVar9);
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrSessionID_026b5090);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  puVar4 = PTR_WCRefineAIStore_026ce048;
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrOptions_026b5098);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_sanitizedUserNames__026aad80);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_60;
    puVar3 = local_80;
    puVar8 = PTR_WCRefineHelper_026ce000;
    puVar4 = PTR_s_wcrPickReplyMembers_026b50d8;
    puVar10 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
    local_230 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_109 = false;
    if (puVar10 == (undefined *)0x0) {
      local_230 = &cf_NP6R;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_230;
    }
    local_109 = puVar10 != (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar4,pcVar5,&cf_SVYc__S,
               local_230,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    if ((local_109 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    _objc_storeStrong(&local_100,0);
  }
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrManager_026b5080);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_118 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHeaderTitle__0269e3c0,&cf__N__SVY);
  pcVar5 = local_60;
  puVar3 = local_118;
  puVar8 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_wcrPickPreset_026b50e0;
  pcVar6 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrPersonaTitle_026b50e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar4,pcVar5,&cf_bVYN,pcVar6,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  pcVar5 = local_60;
  uVar1 = _WCRAISessionPrefix;
  puVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_chatAgentPrefix_0269d3a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_wcrString_fallback__026b50a0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_120 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar5 = local_60;
  uVar1 = _WCRAISessionSuffix;
  puVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_chatAgentSuffix_0269d3a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_wcrString_fallback__026b50a0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_128 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar5 = local_60;
  puVar3 = local_118;
  puVar8 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_wcrEditPrefix_026b50f0;
  pcVar6 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_2e0 = &cf_e;
  }
  else {
    local_2e0 = local_120;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar4,pcVar5,&cf_n_VYMR,
             local_2e0,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  pcVar5 = local_60;
  puVar3 = local_118;
  puVar8 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_wcrEditSuffix_026b50f8;
  pcVar6 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_310 = &cf_e;
  }
  else {
    local_310 = local_128;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar4,pcVar5,&cf_n_VYT,
             local_310,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrManager_026b5080);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  pcVar5 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
  if (pcVar5 != (cfstringStruct *)0x0) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHeaderTitle__0269e3c0,&::cf_space_s_);
    puVar4 = local_130;
    pcVar9 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    pcVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrManager_026b5080);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    _objc_storeStrong(&local_130,0);
  }
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_wcrManager_026b5080);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

