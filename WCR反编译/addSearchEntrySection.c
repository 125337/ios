// addSearchEntrySection @ 01d7bd2c

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::addSearchEntrySection(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  char *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  char *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  SEL local_90;
  ID local_88;
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
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_90 = param_2;
  local_88 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&cf_d__eQSn_);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_bS;
  if ((*(byte *)(local_88 + (long)_searchEntryExpanded) & 1) == 0) {
    pcVar1 = &cf_U_;
  }
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_toggleSearchEntryExpanded_026c4b90,local_88,&cf_cNZTd__eQS,pcVar1,1);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,puVar3);
  if ((*(byte *)(local_88 + (long)_searchEntryExpanded) & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_40 = &cf_QL__;
    local_38 = &cf__IN;
    local_30 = &cf_NmR;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
    local_b0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_mainFrameTopSearchModeSegmentInd_026bf3c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSelectedSegmentIndex__0269e9e0,IVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_88,
               PTR_s_mainFrameTopSearchModeChanged__026bf3d0,0x1000);
    pcVar5 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,pcVar5);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar4 = local_88;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_setMainFrameTopSearchPlan2Offset_026bf3d8;
    local_c0 = puVar6;
    if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      IVar7 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_mainFrameTopSearchPlan2OffsetXTe_026bf3e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,IVar4,&::cf__,IVar7,0
                );
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,local_c8);
      _objc_storeStrong(&local_c8,0);
    }
    if ((local_c0 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) ||
       (local_c0 == (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
      puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
      _objc_alloc();
      local_50 = &cf__ed__;
      local_48 = &cf_cNd__;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
      local_d0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_mainFrameTopSearchTapGestureMode_026bf3e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setSelectedSegmentIndex__0269e9e0,IVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_88,
                 PTR_s_mainFrameTopSearchTapGestureMode_026bf3f0,0x1000);
      pcVar5 = "WCTableViewCellManager";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,pcVar5);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
    }
    IVar4 = local_88;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_handleSearchEntrySwitch__026c4b98;
    puVar8 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_WCRefineSearchEntryMainFrameMenu_026a3fb0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf__NuSNRSeQS,
               puVar8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
    puVar2 = local_e0;
    if (((ulong)puVar3 & 1) != 0) {
      local_60 = &cf_entryKey;
      local_58 = &cf_WCRefineSearchEntryMainFrameMenu;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_userInfo);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,local_e0);
    IVar4 = local_88;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_handleSearchEntrySwitch__026c4b98;
    puVar8 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_WCRefineSearchEntryMYActions_026b4a58);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_mRRKb_wQheQS,
               puVar8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
    puVar2 = local_e8;
    if (((ulong)puVar3 & 1) != 0) {
      local_70 = &cf_entryKey;
      local_68 = &cf_WCRefineSearchEntryMYActions;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_70,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_userInfo);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,local_e8);
    IVar4 = local_88;
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_handleSearchEntrySwitch__026c4b98;
    puVar8 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_WCRefineSearchEntryThemeBox_026b4a48);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,IVar4,&cf_mR0RvP_bI_eQS
               ,puVar8);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
    puVar2 = local_f0;
    if (((ulong)puVar3 & 1) != 0) {
      local_80 = &cf_entryKey;
      local_78 = &cf_WCRefineSearchEntryThemeBox;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_80,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_userInfo);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,local_f0);
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_88 + (long)_tableViewMgr),PTR_s_addSection__0269e3d0,local_98);
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

