// buildBasicSection @ 01ac4dd4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineGroupManagementViewController::buildBasicSection
          (WCRefineGroupManagementViewController *this,ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 in_x7;
  double in_d0;
  double dVar10;
  cfstringStruct *local_568;
  cfstringStruct *local_550;
  cfstringStruct *local_490;
  undefined1 *local_480;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  bool local_161;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  bool local_149;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  char *local_120;
  undefined *local_118;
  bool local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined1 *local_f8;
  undefined4 local_ec;
  double local_e8;
  double local_e0;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined *local_80;
  byte local_71;
  undefined1 *local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_68 = param_2;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_60;
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_homeSessionGroupingAdvancedModes_026bdfa0);
  local_71 = (byte)IVar4;
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,&cf_W_xn_);
  pcVar1 = &cf__cb_nuR_SfYd_O0;
  if ((local_71 & 1) == 0) {
    pcVar1 = &cf__cb_nuR_SfYd_O0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFooterTitle__0269e3c8,pcVar1);
  IVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_60;
  puVar2 = local_80;
  puVar6 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_toggleGroupingEnabled__026bdfa8;
  puVar5 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeSessionGroupingEnabled_026a2888);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf__T_uuR_,puVar5)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar5 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeSessionGroupingStyleMode_026a2890);
  local_9c = 0;
  local_1b0 = puVar5;
  if ((long)puVar5 < 0) {
    local_1b0 = (undefined1 *)0x0;
  }
  local_a8 = local_1b0;
  local_90 = local_1b0;
  local_ac = 1;
  if ((long)local_1b0 < 1) {
    local_1b8 = local_1b0;
  }
  else {
    local_1b8 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  local_b8 = local_1b8;
  local_88 = local_1b8;
  if ((local_71 & 1) == 0) {
    local_88 = (undefined1 *)0x0;
  }
  puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_98 = puVar5;
  _objc_alloc();
  local_38 = &cf_8_;
  local_30 = &cf_QQ;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithItems__0269e9d8);
  local_c0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setSelectedSegmentIndex__0269e9e0,local_88);
  if ((local_71 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setEnabled_forSegmentAtIndex__026bdfb0,0,1)
    ;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_60,
             PTR_s_groupingModeSegmentChanged__026bdfb8,0x1000);
  pcVar7 = "WCTableViewCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addCell__0269e3f8,pcVar7);
  IVar4 = local_60;
  puVar2 = local_80;
  puVar6 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_toggleInlineNameCentered__026bdfc8;
  if (local_88 == (undefined1 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_48 = &cf_SY;
    local_40 = &cf_v;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithItems__0269e9d8);
    local_d0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingSubListBrowseMode_026a2760);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setSelectedSegmentIndex__0269e9e0,
               puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_60,
               PTR_s_subListBrowseModeSegmentChanged__026bdfc0,0x1000);
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addCell__0269e3f8,pcVar7);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  else if (local_88 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingInlineNameCenteredEn_026a3258);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_R_TyE__N,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleInlineAvatarShown__026bdfd0;
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingInlineAvatarShown_026a31f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_>f_yR_4YP,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingInlineAvatarShown_026a31f8);
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_editInlineDisclosureSymbols__026bdfd8;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_homeGroupingInlineDisclosureSymb_026a3298);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,IVar4,&cf_U_,puVar8,1
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_homeGroupingInlineCompactRowHeig_026a3038);
      IVar4 = local_60;
      puVar2 = local_80;
      puVar6 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR_s_editInlineCompactRowHeight__026bdfe0;
      if ((in_d0 < 20.0) || (local_e0 = in_d0, 68.0 < in_d0)) {
        local_e0 = 52.0;
      }
      puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
      in_d0 = local_e0;
      dVar10 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,IVar4,&cf___QL,puVar9
                 ,1,in_x7,dVar10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar9);
    }
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleInlineCountRightShown__026bdfe8;
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingInlineCountRightShow_026bdff0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_SOOpe,puVar5)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleInlineFloatingCollapse__026bdff8;
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingInlineFloatingCollap_026be000);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf__nmbSdkR_,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingInlineFloatingCollap_026be000);
    if (((ulong)puVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_homeGroupingInlineFoldBarFontSiz_026be008);
      IVar4 = local_60;
      puVar2 = local_80;
      puVar6 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR_s_editInlineFoldBarFontSize__026be010;
      if ((in_d0 < 10.0) || (local_e8 = in_d0, 22.0 < in_d0)) {
        local_e8 = 14.0;
      }
      puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
      dVar10 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,IVar4,&cf__nmbSagW_S,
                 puVar9,1,in_x7,dVar10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      puVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_footerTitle_026af6c0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFooterTitle__0269e3c8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  IVar4 = local_60;
  puVar2 = local_80;
  puVar6 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_toggleHomeGroupingSettingsExpand_026be018;
  puVar5 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingSettingsExpanded_026be020);
  pcVar1 = &cf_bS;
  if (((ulong)puVar5 & 1) == 0) {
    pcVar1 = &cf_U_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,IVar4,&cf_U_,pcVar1,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar5 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingSettingsExpanded_026be020);
  IVar4 = local_60;
  puVar2 = local_80;
  puVar6 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_toggleHideGroupBadge__026be028;
  if (((ulong)puVar5 & 1) == 0) {
    local_ec = 1;
  }
  else {
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingHideGroupBadgeEnable_026a3230);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_R_h,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingHideGroupBadgeEnable_026a3230);
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleUnreadRedDot__026be030;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingUnreadRedDotEnabled_026a3238)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_mo__p,
                 puVar5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleFilterDuplicate__026be038;
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingFilterDuplicateEnabl_026a2ca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_nYT_N,puVar5)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleExcludeAtMe__026be040;
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingExcludeAtMeEnabled_026a2be8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_N6e__yrbmo_,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingExcludeAtMeEnabled_026a2be8);
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_homeGroupingExcludeAtMeChatRooms_026a2bf0);
      _objc_retainAutoreleasedReturnValue();
      local_480 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        local_480 = *(undefined1 **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_480;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
      local_490 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_109 = false;
      if (puVar5 == (undefined1 *)0x0) {
        local_490 = &cf_pQb;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(local_490,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_108 = local_490;
      }
      local_109 = puVar5 != (undefined1 *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_100 = local_490;
      if ((local_109 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_108);
      }
      puVar3 = local_80;
      puVar6 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                 PTR_s_openExcludeAtMeChatRoomsPicker__026be048,local_60,&::cf__,local_100,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
    }
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleExcludeUnread__026be050;
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingExcludeUnreadEnabled_026a2c78);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_N6e__MQSbpb_g
               ,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_58 = &cf_R_Ne;
    local_50 = &cf_R_Ne;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithItems__0269e9d8);
    local_118 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingUnreadBelowGroupsEna_026a2cd0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_setSelectedSegmentIndex__0269e9e0,((ulong)puVar5 & 1) != 0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_60,
               PTR_s_uncollectedPositionSegmentChange_026be058,0x1000);
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_120 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addCell__0269e3f8,pcVar7);
    IVar4 = local_60;
    puVar2 = local_80;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleExcludeSessions__026be060;
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingExcludeSessionsEnabl_026a2bd8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&cf_c__YS_JN6e_,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingExcludeSessionsEnabl_026a2bd8);
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_homeGroupingExcludeSessions_026a2be0);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar5;
      FUN_01ac6854(puVar5,0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_128;
      local_130 = puVar5;
      FUN_01ac6854(local_128,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_130;
      local_138 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      local_550 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_149 = false;
      if (puVar5 == (undefined1 *)0x0) {
        local_550 = &cf_pQb;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(local_550,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_148 = local_550;
      }
      local_149 = puVar5 != (undefined1 *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_140 = local_550;
      if ((local_149 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_148);
      }
      puVar5 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
      local_568 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar5 == (undefined1 *)0x0) {
        local_568 = &cf_pQb;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(local_568,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_160 = local_568;
      }
      local_161 = puVar5 != (undefined1 *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = local_568;
      if (local_161) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      puVar3 = local_80;
      puVar6 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                 PTR_s_openExcludeFriendsPicker__026be068,local_60,&::cf__,local_140);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar3 = local_80;
      puVar6 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                 PTR_s_openExcludeChatRoomsPicker__026be070,local_60,&::cf__,local_158,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_158);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
    local_ec = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

