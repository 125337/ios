// wcrReloadList @ 017c6a04

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrReloadList(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined *puVar11;
  ID local_1b8;
  ID local_80;
  ID local_70;
  ID local_68;
  ID local_60;
  ulong local_58;
  undefined *local_50;
  byte local_41;
  ID local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_38 = 0;
  while( true ) {
    uVar3 = local_38;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    if (IVar6 <= uVar3) break;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar7;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_41 = (byte)IVar8;
    puVar9 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    local_50 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHeaderTitle__0269e3c0);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    puVar9 = local_50;
    if ((local_41 & 1) != 0) {
      pcVar10 = "WCTableViewCellManager";
      _objc_getClass();
      IVar5 = local_28;
      puVar11 = PTR_s_wcrCreatePersona_026b4e60;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
      pcVar1 = &cf_e____;
      if ((IVar6 & 1) == 0) {
        pcVar1 = &cf_e_N;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar10,PTR_s_centerCellForSel_target_title__0269edf8,puVar11,IVar5,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(pcVar10);
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrShowsFollowGlobal_026b4e98);
      IVar5 = local_28;
      puVar4 = local_50;
      puVar11 = PTR_WCRefineHelper_026ce000;
      puVar9 = PTR_s_wcrSelectFollowGlobal_026b4ea0;
      if ((IVar6 & 1) != 0) {
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrFollowGlobalTitle_026b4ea8);
        _objc_retainAutoreleasedReturnValue();
        IVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrFollowsDefault_026b4eb0);
        pcVar1 = &cf_S_MR;
        if ((IVar7 & 1) == 0) {
          pcVar1 = (cfstringStruct *)0x0;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar11,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar9,IVar5,IVar6,pcVar1
                   ,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_release_02578630)(IVar6);
      }
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrIsSelecting_026b4eb8);
      if ((IVar5 & 1) == 0) {
        IVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
        if (IVar5 == 0) {
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
          pcVar1 = &cf_X_egv___S_WRgvc_u0;
          if ((IVar5 & 1) == 0) {
            pcVar1 = &cf_X_egvNS_Wc_yUSvc_u0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFooterTitle__0269e3c8,pcVar1);
        }
      }
      else {
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
        pcVar1 = &cf_p;
        if ((IVar5 & 1) == 0) {
          pcVar1 = &cf_p;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFooterTitle__0269e3c8,pcVar1);
      }
    }
    for (local_58 = 0; uVar3 = local_58, IVar5 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0), uVar3 < IVar5;
        local_58 = local_58 + 1) {
      IVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      local_60 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_wcrUsageBadgeForPrompt__026b4ec0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar6);
      puVar11 = local_50;
      puVar9 = PTR_WCRefineHelper_026ce000;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrRowSelectorForGroup_index__026b4ec8,local_38,local_58);
      IVar5 = local_28;
      IVar7 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = local_68 == 0;
      if (bVar2) {
        local_70 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = local_70;
        FUN_017c738c();
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_1b8;
      }
      else {
        local_1b8 = local_68;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_normalCellWithSel_target_title_r_0269e3f0,IVar6,IVar5,IVar7,local_1b8,
                 0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_80);
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(IVar7);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_40,0);
    local_38 = local_38 + 1;
  }
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  return;
}

