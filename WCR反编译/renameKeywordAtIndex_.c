// renameKeywordAtIndex: @ 01b37e40

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertKeywordsViewController::renameKeywordAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  ID IVar2;
  char *pcVar3;
  char *local_48;
  undefined4 local_3c;
  char *local_38;
  ID local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keywords_026bef60);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (param_3 < IVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingRenameIndex__026beec0,local_28);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_keywords_026bef60);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    pcVar3 = "WCUIAlertView";
    _objc_getClass();
    local_38 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_3c = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelRename__026befc0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
                 PTR_s_handleRename__026befc8);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98
                );
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_30);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
      _objc_storeStrong(&local_48,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

