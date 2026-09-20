// WCRefineToDo_tryInstall @ 007f18c8

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoHook::WCRefineToDo_tryInstall(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  byte local_11;
  
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_11 = 0;
  }
  else if ((DAT_028cced0 & 1) == 0) {
    DAT_028cced0 = 1;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar5,0,puVar3,
               &PTR___NSConcreteGlobalBlock_025802e0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_addHelpersToClass__026a2318,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeHeaderUnstick_026ce568,
               PTR_s_installMainFrameTableHookIfNeede_026a2320);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_heightForHeaderInSecti_026a2348,
               PTR_s_WCRefineToDo_tableView_heightFor_026a85b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_viewForHeaderInSection_026a2358,
               PTR_s_WCRefineToDo_tableView_viewForHe_026a85b8);
    FUN_007f26ac(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_viewDidAppear__0269cd50,PTR_s_WCRefineToDo_viewDidAppear__026a85c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_viewDidDisappear__0269de98,PTR_s_WCRefineToDo_viewDidDisappear__026a85c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_viewWillDisappear__0269eb30,PTR_s_WCRefineToDo_viewWillDisappear__026a85d0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_viewDidLayoutSubviews_0269de90,PTR_s_WCRefineToDo_viewDidLayoutSubvie_026a85d8)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_initTableHeaderView_026a4fc0,PTR_s_WCRefineToDo_initTableHeaderView_026a85e0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_setSearchBarToTableHeaderView_0269fe30,
               PTR_s_WCRefineToDo_setSearchBarToTable_026a85e8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_mmTableViewDidFinishedLoading__026a85f0,
               PTR_s_WCRefineToDo_mmTableViewDidFinis_026a85f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_notifyTaskBarOnMainTableViewInit_026a8600,
               PTR_s_WCRefineToDo_notifyTaskBarOnMain_026a8608);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_reLayoutSubviews_026a8610,PTR_s_WCRefineToDo_reLayoutSubviews_026a8618);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_heightForFooterInSecti_026a2368,
               PTR_s_WCRefineToDo_tableView_heightFor_026a8620);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
               PTR_s_tableView_viewForFooterInSection_026a2378,
               PTR_s_WCRefineToDo_tableView_viewForFo_026a8628);
    pcVar4 = &cf_deleteSessionCellAtIndexes_;
    _NSSelectorFromString(&cf_deleteSessionCellAtIndexes_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar4,
               PTR_s_WCRefineToDo_deleteSessionCellAt_026a8630);
    pcVar4 = &cf_insertSessionCellAtIndexes_scrollToCell_;
    _NSSelectorFromString(&cf_insertSessionCellAtIndexes_scrollToCell_);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar4,
               PTR_s_WCRefineToDo_insertSessionCellAt_026a8638);
    pcVar1 = "WCScheduleMgr";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_addScheduleItem__026a8640,PTR_s_WCRefineToDo_addScheduleItem__026a8648);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_removeItem__026a8650,PTR_s_WCRefineToDo_removeItem__026a8658);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_removeItemWithMessage__026a8660,
                 PTR_s_WCRefineToDo_removeItemWithMessa_026a8668);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onGetScheduleCgi_updateAllItems__026a8670,
                 PTR_s_WCRefineToDo_onGetScheduleCgi_up_026a8678);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onGetScheduleCgi_updateFirstPage_026a8680,
                 PTR_s_WCRefineToDo_onGetScheduleCgi_up_026a8688);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onCgiDeleteSchedule_success_errT_026a8690,
                 PTR_s_WCRefineToDo_onCgiDeleteSchedule_026a8698);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onCgiModSchedule_success_errTips_026a86a0,
                 PTR_s_WCRefineToDo_onCgiModSchedule_su_026a86a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onCgiAddSchedule_success_errTips_026a86b0,
                 PTR_s_WCRefineToDo_onCgiAddSchedule_su_026a86b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onCgiClearAllSuccess_errTips__026a86c0,
                 PTR_s_WCRefineToDo_onCgiClearAllSucces_026a86c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_handleSyncAction_remindId__026a86d0,
                 PTR_s_WCRefineToDo_handleSyncAction_re_026a86d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_removeAllSchedules_026a86e0,PTR_s_WCRefineToDo_removeAllSchedules_026a86e8);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_updateAllSchedules_026a86f0,PTR_s_WCRefineToDo_updateAllSchedules_026a86f8);
    }
    pcVar1 = "MiniTaskViewController";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onScheduleListUpdate_026a8700,PTR_s_WCRefineToDo_onScheduleListUpdat_026a8708
                );
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onScheduleRemoveItem__026a8710,
                 PTR_s_WCRefineToDo_onScheduleRemoveIte_026a8718);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onScheduleAppendItem__026a8720,
                 PTR_s_WCRefineToDo_onScheduleAppendIte_026a8728);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onScheduleItemRemindChange__026a8730,
                 PTR_s_WCRefineToDo_onScheduleItemRemin_026a8738);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_reloadScheduleItems_026a8740,PTR_s_WCRefineToDo_reloadScheduleItems_026a8748)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_resetScheduleStatus_026a8750,PTR_s_WCRefineToDo_resetScheduleStatus_026a8758)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onMiniTaskCollectionCellRemoveRe_026a8760,
                 PTR_s_WCRefineToDo_onMiniTaskCollectio_026a8768);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onMiniTaskCollectionCellAddRemin_026a8770,
                 PTR_s_WCRefineToDo_onMiniTaskCollectio_026a8778);
    }
    pcVar1 = "MiniTaskCollectionScheduleCell";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onDeleteMenuClick__026a8780,PTR_s_WCRefineToDo_onDeleteMenuClick__026a8788);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onDeleteButtonClick__026a8790,PTR_s_WCRefineToDo_onDeleteButtonClick_026a8798
                );
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_onRemindButtonClick__026a87a0,PTR_s_WCRefineToDo_onRemindButtonClick_026a87a8
                );
    }
    pcVar1 = "MainTabBarViewController";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_OnMainFrameDoubleClicked__026a87b0,
                 PTR_s_WCRefineToDo_OnMainFrameDoubleCl_026a87b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_setSelectedIndex__0269e450,PTR_s_WCRefineToDo_setSelectedIndex__026a87c0);
    }
    _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterAddObserver();
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_settings_changed,0,puVar3,
               &PTR___NSConcreteGlobalBlock_02580300);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11 = 1;
  }
  else {
    local_11 = 1;
  }
  return (uint)local_11;
}

