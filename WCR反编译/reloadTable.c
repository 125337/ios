// reloadTable @ 017b8c24

/* Function Stack Size: 0x10 bytes */

void WCRefineAIFeatureViewController::reloadTable(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 in_x7;
  undefined *local_340;
  undefined *local_338;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_270;
  undefined *local_268;
  cfstringStruct *local_248;
  byte local_19c;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  int local_164;
  undefined *local_160;
  int local_154;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  int local_12c;
  undefined *local_128;
  int local_11c;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  int local_f4;
  undefined *local_f0;
  int local_e4;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  int local_bc;
  undefined *local_b8;
  int local_ac;
  undefined *local_a8;
  byte local_9a;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  SEL local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = param_2;
  local_80 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_90 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&::cf_A);
  puVar1 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_profileSessionSettingsEnabled_026a0b50);
  pcVar3 = &cf_c_TUSzzTUSNRV0Orz_;
  if (((ulong)puVar1 & 1) == 0) {
    pcVar3 = &cf_c_TUSzzTUSNRV0OrzsQSb;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setFooterTitle__0269e3c8,pcVar3);
  puVar1 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatAgentReplyAll_0269ce80);
  local_19c = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatAgentEnabled_0269ce88);
    local_19c = (byte)puVar1;
  }
  local_99 = local_19c & 1;
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_aiReplySettingsExpanded_026b4af8);
  puVar1 = local_98;
  local_9a = (byte)pcVar3;
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_switchCellWithSel_target_title_s_026aa260,
             PTR_s_toggleAIReply__026b4b00,local_80,&cf__T_u,local_99 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_98;
  pcVar3 = &cf_bS;
  if ((local_9a & 1) == 0) {
    pcVar3 = &cf_U_;
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
             PTR_s_toggleAIReplySettings_026b4b08,local_80,&::cf_A,pcVar3,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_80;
  puVar8 = local_98;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_toggleProfileSessionSettings__026b4b10;
  if ((local_9a & 1) != 0) {
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_profileSessionSettingsEnabled_026a0b50);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar1,pcVar3,&cf_Orz,puVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_80;
    puVar8 = local_98;
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_pickSystemPrompt_026b4b18;
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_systemPrompt_0269d0c8);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_wcrPersonaNameForPrompt__026b4b20);
    _objc_retainAutoreleasedReturnValue();
    local_248 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_248 = &::cf__;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_bVYN,
               local_248,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_40 = &cf_hQ;
    local_38 = &cf__yrb;
    local_30 = &cf___ub;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
    local_a8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_ac = 0;
    local_bc = 2;
    puVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatAgentReplyMode_0269d4f8);
    local_268 = puVar1;
    if ((long)local_bc < (long)puVar1) {
      local_268 = (undefined *)(long)local_bc;
    }
    local_d0 = local_268;
    local_b8 = local_268;
    if ((long)local_ac < (long)local_268) {
      local_270 = local_268;
    }
    else {
      local_270 = (undefined *)(long)local_ac;
    }
    local_d8 = local_270;
    local_c8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_setSelectedSegmentIndex__0269e9e0,local_270);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_80,
               PTR_s_replyModeChanged__026b4b28,0x1000);
    puVar1 = local_98;
    pcVar6 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_58 = &cf___u;
    local_50 = &cf___u_yr;
    local_48 = &cf_8_;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
    local_e0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_e4 = 0;
    local_f4 = 2;
    puVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatAgentReplyStyle_0269d3b0);
    local_298 = puVar1;
    if ((long)local_f4 < (long)puVar1) {
      local_298 = (undefined *)(long)local_f4;
    }
    local_108 = local_298;
    local_f0 = local_298;
    if ((long)local_e4 < (long)local_298) {
      local_2a0 = local_298;
    }
    else {
      local_2a0 = (undefined *)(long)local_e4;
    }
    local_110 = local_2a0;
    local_100 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_setSelectedSegmentIndex__0269e9e0,local_2a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_80,
               PTR_s_replyStyleChanged__026b4b30,0x1000);
    puVar1 = local_98;
    pcVar6 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_68 = &cf_cd_J;
    local_60 = &cf_c__J;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
    local_118 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11c = 0;
    local_12c = 1;
    puVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatAgentGroupRule_026aad90);
    local_2c8 = puVar1;
    if ((long)local_12c < (long)puVar1) {
      local_2c8 = (undefined *)(long)local_12c;
    }
    local_140 = local_2c8;
    local_128 = local_2c8;
    if ((long)local_11c < (long)local_2c8) {
      local_2d0 = local_2c8;
    }
    else {
      local_2d0 = (undefined *)(long)local_11c;
    }
    local_148 = local_2d0;
    local_138 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_setSelectedSegmentIndex__0269e9e0,local_2d0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_80,
               PTR_s_groupRuleChanged__026b4b38,0x1000);
    puVar1 = local_98;
    pcVar6 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    pcVar3 = local_80;
    puVar8 = local_98;
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_selectReplyGroups_026b4b40;
    pcVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_selectedGroupsSummary_026b4b48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_c__JRh,
               pcVar5,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_78 = &cf_cd_YS;
    local_70 = &cf_c__YS;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
    local_150 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_154 = 0;
    local_164 = 1;
    puVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatAgentContactRule_026aad98);
    local_338 = puVar1;
    if ((long)local_164 < (long)puVar1) {
      local_338 = (undefined *)(long)local_164;
    }
    local_178 = local_338;
    local_160 = local_338;
    if ((long)local_154 < (long)local_338) {
      local_340 = local_338;
    }
    else {
      local_340 = (undefined *)(long)local_154;
    }
    local_180 = local_340;
    local_170 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_setSelectedSegmentIndex__0269e9e0,local_340);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_80,
               PTR_s_contactRuleChanged__026b4b50,0x1000);
    puVar1 = local_98;
    pcVar6 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    pcVar3 = local_80;
    puVar8 = local_98;
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_selectReplyContacts_026b4b58;
    pcVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_selectedContactsSummary_026b4b60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_c__YSRh,
               pcVar5,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar3 = local_80;
    puVar8 = local_98;
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_editPrefix_026b4b68;
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatAgentPrefix_0269d3a0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_wcrAffixDisplay__026b4b70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_n_VYMR,
               pcVar5,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_80;
    puVar8 = local_98;
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_editSuffix_026b4b78;
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatAgentSuffix_0269d3a8);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_wcrAffixDisplay__026b4b70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_n_VYT,pcVar5
               ,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_80;
    puVar8 = local_98;
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_editReplyCommand_026b4b80;
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatReplyCommand_0269d4f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&::cf_A,puVar4,0
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_98;
    pcVar6 = "WCTableViewCellManager";
    _objc_getClass();
    pcVar3 = local_80;
    pcVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_replyMaxCharsControlView_026b4b88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,pcVar3,&cf_VYe_g>f_y);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar3 = local_80;
    puVar8 = local_98;
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR_s_editReplyCount_026b4b90;
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatReplyCountSpec_0269d518);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_US_kVYagpe,
               puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_a8,0);
  }
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_188 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHeaderTitle__0269e3c0,&cf__JRg);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_188,PTR_s_setFooterTitle__0269e3c8,&cf__JSSNb_c_g0Wh_0_J___00);
  pcVar3 = local_80;
  puVar8 = local_188;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_toggleGroupChatAnalysis__026b4b98;
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_groupChatAnalysisEnabled_0269d010);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar1,pcVar3,&cf__J,puVar4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_80;
  puVar8 = local_188;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_pickGroupAnalysisPrompt_026b4ba0;
  pcVar5 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_wcrGroupAnalysisPresetName_026b4ba8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_Rg,pcVar5,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  pcVar3 = local_80;
  puVar8 = local_188;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_editGroupAnalysisCommand_026b4bb0;
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_groupChatAnalysisCommand_0269d318);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_RgSN,puVar4,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar1 = local_188;
  pcVar6 = "WCTableViewCellManager";
  _objc_getClass();
  pcVar3 = local_80;
  pcVar5 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_analysisMaxCharsControlView_026b4bb8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar6,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,pcVar3,&cf_VYe_g>f_y);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHeaderTitle__0269e3c0,&::cf_A);
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFooterTitle__0269e3c8,&cf___uc_ybSN);
  pcVar3 = local_80;
  puVar8 = local_190;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_toggleAIPolish__026b4bc0;
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatPolishEnabled_0269d340);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar1,pcVar3,&::cf_A,puVar4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatPolishEnabled_0269d340);
  pcVar3 = local_80;
  puVar8 = local_190;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_editPolishCommand_026b4bc8;
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatPolishCommand_0269d348);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&::cf_A,puVar4,0
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  pcVar3 = local_80;
  puVar8 = local_190;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_toggleAIImage__026b4bd0;
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatImageEnabled_0269d350);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar1,pcVar3,&::cf_A,puVar4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatImageEnabled_0269d350);
  pcVar3 = local_80;
  puVar8 = local_190;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_editImageCommand_026b4bd8;
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatImageCommand_0269d358);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&::cf_A,puVar4,0
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  pcVar3 = local_80;
  puVar8 = local_190;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_toggleAIVideo__026b4be0;
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatVideoEnabled_0269d360);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar1,pcVar3,&::cf_A,puVar4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatVideoEnabled_0269d360);
  pcVar3 = local_80;
  puVar8 = local_190;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_editVideoCommand_026b4be8;
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_chatVideoCommand_0269d368);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&::cf_A,puVar4,0
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_80;
    puVar4 = local_190;
    puVar8 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar1 = PTR_s_editVideoDuration_026b4bf0;
    puVar7 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_videoDurationSeconds_0269d4a0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf_e_,puVar2,0,
               in_x7,puVar7);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHeaderTitle__0269e3c0,&cf_gR);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_setFooterTitle__0269e3c8,&cf_T_KmOBlS_MR__jW0);
  pcVar3 = local_80;
  puVar8 = local_198;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_openModelCenter_026b4bf8;
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_currentChatProvider_0269d548);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar3,&cf__jW_N_,puVar7,
             0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar1 = local_198;
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
             PTR_s_openPersonaLibrary_026b4c00,local_80,&cf_N_,&::cf_N,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_198;
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
             PTR_s_openGroupAnalysisLibrary_026b4c08,local_80,&cf__J,&cf____,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar5 = local_80;
  puVar8 = local_198;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_testSystemPrompt_026b4c10;
  puVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isChatProviderConfigured_0269ce90);
  pcVar3 = &::cf___;
  if (((ulong)puVar4 & 1) == 0) {
    pcVar3 = &cf__Mn_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar1,pcVar5,&cf_T_Km,pcVar3,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

