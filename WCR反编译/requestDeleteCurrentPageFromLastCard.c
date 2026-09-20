// requestDeleteCurrentPageFromLastCard @ 01b14410

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::requestDeleteCurrentPageFromLastCard
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  undefined1 local_29;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recordsOnCurrentPage_026bec08);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingPageDeleteRecords__026bebf8);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingPageDeleteRecords_026bebf0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetDraggingDeleteState_026bebe0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_boolForKey__0269f3d8,
               &cf_WCRefineKeywordAlertLastItemPageDeletePromptShown);
    local_29 = SUB81(puVar3,0);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setBool_forKey__026a9618,1,
                 &cf_WCRefineKeywordAlertLastItemPageDeletePromptShown);
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      local_38 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_deleteRecordsForPendingCurrentPa_026bec00);
        local_30 = 1;
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_40 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addCancelBtnTitle_target_sel__0269d268);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                     PTR_s_cancelLastCardPageDelete__026bec10);
        }
        pcVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addBtnTitle_target_sel__0269d278);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                     PTR_s_confirmLastCardPageDelete__026bec18);
        }
        pcVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
        }
        _objc_storeStrong(&local_40,0);
        local_30 = 0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_deleteRecordsForPendingCurrentPa_026bec00);
      local_30 = 1;
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

