// saveRuleTapped @ 01807900

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineAutoAcceptTransferTierEditorViewController::saveRuleTapped
          (WCRefineAutoAcceptTransferTierEditorViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double in_d0;
  undefined1 *local_98;
  undefined1 *local_60;
  byte local_51;
  undefined1 *local_50;
  undefined1 *local_48;
  byte local_39;
  undefined1 *local_38;
  byte local_29;
  undefined1 *local_28;
  SEL local_20;
  undefined1 *local_18;
  
  local_20 = param_2;
  local_18 = (undefined1 *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_amount_026a7dd0);
  if (in_d0 <= 0.0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQn_gHe);
    return;
  }
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_replyText_026b5ba8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_29 = 0;
  local_39 = 0;
  bVar1 = false;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_repositoryCode_026b0ba8);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_inviteChatRoom_026b5ba0);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar3 == (undefined1 *)0x0;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_18;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf____);
    return;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_amount_026a7dd0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_amountExistsInOtherRules__026b5be0);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_chMO_X__W);
    return;
  }
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allRules_026b5b80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_51 = 0;
  local_98 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    local_98 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_98;
  }
  local_51 = puVar3 == (undefined1 *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_98;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_buildRuleEntry_026b5c08);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_18;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEditingExistingRule_026b5b88);
  puVar3 = local_48;
  puVar2 = local_60;
  if (((ulong)puVar4 & 1) == 0) {
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    puVar6 = PTR_WCRefineHelper_026ce000;
    if (segment_command_00000020.segname + 10 <= puVar2) {
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      goto LAB_01807ec0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,local_60);
  }
  else {
    puVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_storedRuleIndex_026b5b78);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,puVar4);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
LAB_01807ec0:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  return;
}

