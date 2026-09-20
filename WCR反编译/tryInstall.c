// tryInstall @ 00375098

/* Function Stack Size: 0x10 bytes */

bool WCRefineHomeSessionGroupingHook::tryInstall(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  byte local_11;
  
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_11 = 0;
  }
  else if ((DAT_028ca0f8 & 1) == 0) {
    DAT_028ca0f8 = 1;
    FUN_0037435c();
    FUN_003758b0();
    FUN_0037594c();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_addHelpersToClass__026a2318,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_numberOfSectionsInTableView__026a2388,
               PTR_s_wcrGrouping_numberOfSectionsInTa_026a28c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_numberOfRowsInSection__0269e8d8,
               PTR_s_wcrGrouping_tableView_numberOfRo_026a28c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_heightForHeaderInSecti_026a2348,
               PTR_s_wcrGrouping_tableView_heightForH_026a28d0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_heightForFooterInSecti_026a2368,
               PTR_s_wcrGrouping_tableView_heightForF_026a28e0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_estimatedHeightForHead_026a28e8,
               PTR_s_wcrGrouping_tableView_estimatedH_026a28f0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_estimatedHeightForFoot_026a28f8,
               PTR_s_wcrGrouping_tableView_estimatedH_026a2900);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_viewForHeaderInSection_026a2358,
               PTR_s_wcrGrouping_tableView_viewForHea_026a2908);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_viewForFooterInSection_026a2378,
               PTR_s_wcrGrouping_tableView_viewForFoo_026a2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_heightForRowAtIndexPat_0269e8e0,
               PTR_s_wcrGrouping_tableView_heightForR_026a2918);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_cellForRowAtIndexPath__0269e790,
               PTR_s_wcrGrouping_tableView_cellForRow_026a2920);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_didSelectRowAtIndexPat_0269e8c0,
               PTR_s_wcrGrouping_tableView_didSelectR_026a2928);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_canEditRowAtIndexPath__026a2930,
               PTR_s_wcrGrouping_tableView_canEditRow_026a2938);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_editingStyleForRowAtIn_026a2940,
               PTR_s_wcrGrouping_tableView_editingSty_026a2948);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_commitEditingStyle_for_026a2950,
               PTR_s_wcrGrouping_tableView_commitEdit_026a2958);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_editActionsForRowAtInd_026a2960,
               PTR_s_wcrGrouping_tableView_editAction_026a2968);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_installOptionalTableDelegateOnCl_026a28d8,pcVar1,
               PTR_s_tableView_trailingSwipeActionsCo_026a2970,
               PTR_s_wcrGrouping_tableView_trailingSw_026a2978);
    pcVar2 = &cf_logicGetSessionAtIndexPath_;
    _NSSelectorFromString(&cf_logicGetSessionAtIndexPath_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_logicGetSessionAtInd_026a2980);
    pcVar2 = &cf_logicGetCellDataAtIndexPath_;
    _NSSelectorFromString(&cf_logicGetCellDataAtIndexPath_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_logicGetCellDataAtIn_026a2988);
    pcVar2 = &cf_onLogicHideSession_;
    _NSSelectorFromString(&cf_onLogicHideSession_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_onLogicHideSession__026a2990);
    pcVar2 = &cf_onLogicDeleteSessionByUsername_;
    _NSSelectorFromString(&cf_onLogicDeleteSessionByUsername_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_onLogicDeleteSession_026a2998);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_willDisplayCell_forRow_0269fba8,
               PTR_s_wcrGrouping_tableView_willDispla_026a29a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_didEndDisplayingCell_f_026a29a8,
               PTR_s_wcrGrouping_tableView_didEndDisp_026a29b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_viewDidLoad_0269cee8,PTR_s_wcrGrouping_viewDidLoad_026a29b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_viewDidAppear__0269cd50,PTR_s_wcrGrouping_viewDidAppear__026a29c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_viewWillAppear__0269cd48,PTR_s_wcrGrouping_viewWillAppear__026a29c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_scrollViewWillBeginDragging__026a29d0,
               PTR_s_wcrGrouping_scrollViewWillBeginD_026a29d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_scrollViewDidScroll__0269eb48,PTR_s_wcrGrouping_scrollViewDidScroll__026a29e0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_scrollViewWillEndDragging_withVe_026a29e8,
               PTR_s_wcrGrouping_scrollViewWillEndDra_026a29f0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_scrollViewDidEndDragging_willDec_0269eb38,
               PTR_s_wcrGrouping_scrollViewDidEndDrag_026a29f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_scrollViewDidEndDecelerating__0269eb40,
               PTR_s_wcrGrouping_scrollViewDidEndDece_026a2a00);
    pcVar2 = &cf_reloadSessions;
    _NSSelectorFromString(&cf_reloadSessions);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_reloadSessions_026a2a08);
    pcVar2 = &cf_reloadAll;
    _NSSelectorFromString(&cf_reloadAll);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_reloadAll_026a2a10);
    pcVar2 = &cf_insertSessionCellAtIndexes_scrollToCell_;
    _NSSelectorFromString(&cf_insertSessionCellAtIndexes_scrollToCell_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_insertSessionCellAtI_026a2a18);
    pcVar2 = &cf_deleteSessionCellAtIndexes_;
    _NSSelectorFromString(&cf_deleteSessionCellAtIndexes_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_deleteSessionCellAtI_026a2a20);
    pcVar2 = &cf_insertRow_;
    _NSSelectorFromString(&cf_insertRow_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_insertRow__026a2a28);
    pcVar2 = &cf_deleteSessionCell_atSection_withUser_;
    _NSSelectorFromString(&cf_deleteSessionCell_atSection_withUser_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
               PTR_s_wcrGrouping_deleteSessionCell_at_026a2a30);
    FUN_003759b8();
    FUN_00375bb0();
    FUN_00375c6c();
    local_11 = 1;
  }
  else {
    FUN_0037435c();
    FUN_003758b0();
    FUN_0037594c();
    local_11 = 1;
  }
  return (uint)local_11;
}

