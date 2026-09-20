// showSourceMenu @ 019fb3dc

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationCheckViewController::showSourceMenu(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  ID IVar3;
  uint local_54;
  char *local_50;
  char *local_48;
  byte local_39;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineFriendRelationChecker_026ceb00;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isRunning_026aca10);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQf_PS_MRhKm);
    local_2c = 1;
    goto LAB_019fb740;
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isPaused_026a14d8);
  local_39 = 0;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_status_026a1830);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = 0;
    if (((ulong)puVar1 & 1) != 0) goto LAB_019fb51c;
  }
  else {
LAB_019fb51c:
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPendingRangeReplacement_026aca88);
    local_54 = (uint)puVar1 ^ 1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_54 & 1) == 0) {
    pcVar2 = "WCUIActionSheet";
    _objc_getClass();
    local_48 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_2c = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf__JU_h__,local_18,
                 PTR_s_selectFromContactPicker_026bb4c0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NJ_YRhb,local_18,
                 PTR_s_selectFromChatList_026bb4c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_hQ_YS,local_18,
                 PTR_s_confirmSelectAllFriends_026bb4d0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar2 = local_50;
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_storeStrong(&local_50,0);
      local_2c = 0;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__O_u0_YS0);
    local_2c = 1;
  }
LAB_019fb740:
  _objc_storeStrong(&local_28,0);
  return;
}

