// addAutoReplySection @ 01a1be10

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineGeneralFunctionViewController::addAutoReplySection
          (WCRefineGeneralFunctionViewController *this,ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 uVar13;
  cfstringStruct *local_2b8;
  byte local_258;
  byte local_254;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  bool local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  ID local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,&cf_RVY);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFooterTitle__0269e3c8,&cf_sQ_hQ9SM);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleKeywordAutoReplyEnabled__026bb9b0;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keywordAutoReplyEnabled_026a0b18);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_sQ_RVY,puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keywordAutoReplyEnabled_026a0b18);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleKeywordAutoReplySettingsEx_026bb9b8;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keywordAutoReplySettingsExpanded_026bb9c0);
    pcVar1 = &cf_bS;
    if (((ulong)puVar5 & 1) == 0) {
      pcVar1 = &cf_U_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,&::cf__,pcVar1,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keywordAutoReplySettingsExpanded_026bb9c0);
    IVar4 = local_28;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_toggleKeywordAutoReplySessionGat_026bb9c8;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_keywordAutoReplySessionGateEnabl_026a0b20);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,puVar5)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
      IVar4 = local_28;
      puVar6 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar2 = PTR_s_showKeywordAutoReplyDelayEditor_026bb9d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keywordAutoReplyDelaySeconds_026a35d8);
      uVar13 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___2fs);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,puVar3,
                 0,in_x7,uVar13);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_60);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_toggleKeywordAutoReplyQuoteOrigi_026bb9d8;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_keywordAutoReplyQuoteOriginalEna_026a3618);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,puVar5)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_toggleKeywordAutoReplyGroupMessa_026bb9e0;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_keywordAutoReplyGroupMessagesEna_026a35e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,puVar5)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_keywordAutoReplyGroupMessagesEna_026a35e0);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_openKeywordAutoReplySelectedGrou_026bb9e8;
      if (((ulong)puVar5 & 1) != 0) {
        IVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_keywordAutoReplySelectedGroupsSu_026bb9f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,&::cf__,IVar7
                   ,1);
        _objc_retainAutoreleasedReturnValue();
        local_78 = puVar3;
        (*(code *)PTR__objc_release_02578630)(IVar7);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_78);
        _objc_storeStrong(&local_78,0);
      }
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_keywordAutoReplyOthersOnlyEnable_026a3608);
      local_254 = 1;
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_keywordAutoReplySelfMessagesEnab_026a3610);
        local_258 = 0;
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_keywordAutoReplyOnlySelfMessages_026a3600);
          local_258 = (byte)puVar5 ^ 1;
        }
        local_254 = local_258;
      }
      local_79 = local_254 & 1;
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_switchCellWithSel_target_title_s_026aa260,
                 PTR_s_toggleKeywordAutoReplyOthersOnly_026bb9f8,local_28,&::cf__,local_79);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar2);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_toggleKeywordAutoReplySelfMessag_026bba00;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_keywordAutoReplySelfMessagesEnab_026a3610);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,puVar5)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_toggleKeywordAutoReplyOnlySelfMe_026bba08;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_keywordAutoReplyOnlySelfMessages_026a3600);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,puVar5)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_keywordAutoReplyRules_026a35f8);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2b8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_a9 = 0;
      local_b9 = false;
      if (IVar7 == 0) {
        local_2b8 = &cf__gn_;
      }
      else {
        IVar8 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_keywordAutoReplyRules_026a35f8);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = IVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_2b8;
      }
      local_b9 = IVar7 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_2b8;
      if ((local_b9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                 PTR_s_openKeywordAutoReplyRuleList__026bba10,local_28,&::cf__,local_a0,1);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar2);
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_togglePatAutoReplyEnabled__026bba18;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyEnabled_026a3640);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf_b,puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyEnabled_026a3640);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_togglePatAutoReplySettingsExpand_026bba20;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplySettingsExpanded_026bba28);
    pcVar1 = &cf_bS;
    if (((ulong)puVar5 & 1) == 0) {
      pcVar1 = &cf_U_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,&::cf__,pcVar1,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplySettingsExpanded_026bba28);
    IVar4 = local_28;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar2 = PTR_s_showPatAutoReplyDelayEditor_026bba30;
    if (((ulong)puVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyDelaySeconds_026a36b0);
      uVar13 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___2fs);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,puVar3,
                 0,in_x7,uVar13);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_e0);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_togglePatAutoReplyGroupMessages__026bba38;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_patAutoReplyGroupMessagesEnabled_026a3650);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,puVar5)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_patAutoReplyGroupMessagesEnabled_026a3650);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_openPatAutoReplySelectedGroupsPi_026bba40;
      if (((ulong)puVar5 & 1) != 0) {
        IVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_patAutoReplySelectedGroupsSummar_026bba48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,&::cf__,IVar7
                   ,1);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(IVar7);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_f0);
        _objc_storeStrong(&local_f0,0);
      }
      IVar4 = local_28;
      puVar2 = local_40;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyCountMode_026a3678);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_autoReplyCountModeCellWithTitle__026bba58,&::cf__,puVar5,
                 PTR_s_patAutoReplyCountModeChanged__026bba50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_showPatAutoReplyContentEditor_026bba60;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyText_026a3660);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyRepositoryCode_026a3668);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyCountMode_026a3678);
      puVar11 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyMultiContent_026a3670);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyRandomOneFromMulti_026a3680);
      IVar7 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_eventAutoReplyContentSummaryWith_026bb9a8,puVar5,puVar9,puVar10,puVar11
                 ,puVar12);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,IVar7,0
                );
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_f8);
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patAutoReplyCountMode_026a3678);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_togglePatAutoReplyRandomOne__026bba68;
      if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_patAutoReplyRandomOneFromMulti_026a3680);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,
                   puVar5);
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
        _objc_storeStrong(&local_100,0);
      }
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_togglePatOtherAutoReplyEnabled__026bba70;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patOtherAutoReplyEnabled_026a3648);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,puVar5)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_108 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patOtherAutoReplyEnabled_026a3648);
      IVar4 = local_28;
      puVar2 = local_40;
      if (((ulong)puVar5 & 1) != 0) {
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patOtherAutoReplyCountMode_026a36a0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_autoReplyCountModeCellWithTitle__026bba58,&::cf__,puVar5,
                   PTR_s_patOtherAutoReplyCountModeChange_026bba78);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar4 = local_28;
        puVar3 = PTR_WCRefineHelper_026ce000;
        puVar2 = PTR_s_showPatOtherAutoReplyContentEdit_026bba80;
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patOtherAutoReplyText_026a3688);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_patOtherAutoReplyRepositoryCode_026a3690);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patOtherAutoReplyCountMode_026a36a0);
        puVar11 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patOtherAutoReplyMultiContent_026a3698)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar12 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_patOtherAutoReplyRandomOneFromMu_026a36a8);
        IVar7 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_eventAutoReplyContentSummaryWith_026bb9a8,puVar5,puVar9,puVar10,
                   puVar11,puVar12);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,IVar7
                   ,0);
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar3;
        (*(code *)PTR__objc_release_02578630)(IVar7);
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_110);
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_patOtherAutoReplyCountMode_026a36a0);
        IVar4 = local_28;
        puVar3 = PTR_WCRefineHelper_026ce000;
        puVar2 = PTR_s_togglePatOtherAutoReplyRandomOne_026bba88;
        if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          puVar5 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_patOtherAutoReplyRandomOneFromMu_026a36a8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,
                     puVar5);
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
          _objc_storeStrong(&local_118,0);
        }
        _objc_storeStrong(&local_110,0);
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAtMeAutoReplyEnabled__026bba90;
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyEnabled_026a36b8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__yrbRVY,puVar5)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
  puVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyEnabled_026a36b8);
  IVar4 = local_28;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_s_toggleAtMeAutoReplySettingsExpan_026bba98;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplySettingsExpanded_026bbaa0);
    pcVar1 = &cf_bS;
    if (((ulong)puVar5 & 1) == 0) {
      pcVar1 = &cf_U_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,&::cf__,pcVar1,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplySettingsExpanded_026bbaa0);
    IVar4 = local_28;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar2 = PTR_s_showAtMeAutoReplyDelayEditor_026bbaa8;
    if (((ulong)puVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyDelaySeconds_026a36f0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___2fs);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,puVar3,
                 0,in_x7,in_d0);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_130);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_openAtMeAutoReplySelectedGroupsP_026bbab0;
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_atMeAutoReplySelectedGroupsSumma_026bbab8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,&::cf__,IVar7,1
                );
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_138);
      IVar4 = local_28;
      puVar2 = local_40;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyCountMode_026a36e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_autoReplyCountModeCellWithTitle__026bba58,&::cf__,puVar5,
                 PTR_s_atMeAutoReplyCountModeChanged__026bbac0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_showAtMeAutoReplyContentEditor_026bbac8;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyText_026a36c8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyRepositoryCode_026a36d0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyCountMode_026a36e0);
      puVar11 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyMultiContent_026a36d8);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyRandomOneFromMulti_026a36e8)
      ;
      IVar7 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_eventAutoReplyContentSummaryWith_026bb9a8,puVar5,puVar9,puVar10,puVar11
                 ,puVar12);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,IVar7,0
                );
      _objc_retainAutoreleasedReturnValue();
      local_140 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_140);
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_atMeAutoReplyCountMode_026a36e0);
      IVar4 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_toggleAtMeAutoReplyRandomOne__026bbad0;
      if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_atMeAutoReplyRandomOneFromMulti_026a36e8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&::cf__,
                   puVar5);
        _objc_retainAutoreleasedReturnValue();
        local_148 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,puVar3);
        _objc_storeStrong(&local_148,0);
      }
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_130,0);
    }
    _objc_storeStrong(&local_128,0);
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

