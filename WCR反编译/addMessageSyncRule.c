// addMessageSyncRule @ 018a91ec

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::addMessageSyncRule(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *local_38;
  uint local_2c;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar3 = 0;
  FUN_01138c30(&cf_message_sync,0);
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineMessageSyncRule_026ce708,PTR_s_rules_026a44d8)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    puVar4 = PTR_WCRefineMessageSyncRule_026ce708;
    bVar2 = puVar5 < segment_command_00000020.segname + 10;
    if (bVar2) {
      puVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_newRuleWithSerialNumber__026b77e0,puVar5 + 1);
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_saveRules__026b77e8,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      IVar1 = local_18;
      puVar4 = PTR_WCRefineMessageSyncRule_026ce708;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_ruleID__026a4500,local_38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_pushMessageSyncRuleEditorWithRul_026b77f0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_38,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
    }
    local_2c = (uint)!bVar2;
    _objc_storeStrong(&local_28,0);
  }
  return;
}

