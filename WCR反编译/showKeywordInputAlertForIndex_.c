// showKeywordInputAlertForIndex: @ 01a10140

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAutoReplyListViewController::showKeywordInputAlertForIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  cfstringStruct *local_b0;
  char *local_90;
  bool local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  byte local_39;
  cfstringStruct *local_38;
  byte local_29;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)param_3;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditingRuleIndex__026bb748,param_3);
  pcVar1 = local_28;
  local_39 = 0;
  bVar2 = false;
  if (local_28 != (cfstringStruct *)0x7fffffffffffffff) {
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = pcVar1 < pcVar3;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  local_51 = 0;
  local_61 = 0;
  local_71 = 0;
  local_81 = false;
  local_29 = bVar2;
  if (!bVar2) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_b0;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_b0;
  }
  local_81 = bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b0;
  if ((local_81 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar4 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_90 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_cancelKeywordInput__026bb7b8);
  pcVar1 = &cf_OX_;
  if ((local_29 & 1) == 0) {
    pcVar1 = &::cf_N;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_18,
             PTR_s_handleKeywordInput__026bb7c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x28);
  pcVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
  if (((ulong)pcVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTextFieldDefaultText__0269fd98,local_48)
    ;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_show_0269d280);
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_48,0);
  return;
}

