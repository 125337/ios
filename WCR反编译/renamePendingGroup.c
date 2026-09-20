// renamePendingGroup @ 0194d984

/* Function Stack Size: 0x10 bytes */

void WCRefineEmoticonGroupManageViewController::renamePendingGroup(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  char *pcVar3;
  cfstringStruct *local_60;
  char *local_50;
  cfstringStruct *local_48;
  char *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  ID local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingRenameGroupId_026b99b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_18;
  local_28 = param_1;
  _objc_getAssociatedObject(local_18,"wcr_eg_sheet_name");
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_34 = 1;
  }
  else {
    pcVar3 = "WCUIAlertView";
    _objc_getClass();
    local_40 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_34 = 1;
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,_WCREmoticonGroupUngroupedId);
      local_48 = &cf__TT_gR_;
      if ((IVar2 & 1) == 0) {
        local_48 = &cf__TTR_;
      }
      (*(code *)PTR__objc_retain_02578638)();
      pcVar3 = local_40;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingTextAlert__026b9938,pcVar3);
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0
                );
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14)
        ;
      }
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98
                );
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_30);
      }
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addCancelBtnTitle_target_sel__0269d268);
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18,
                   PTR_s_handleTextAlertCancel__026b9958);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                   PTR_s_handleTextAlertCancel__026b9958);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_handleRenameConfirm__026b99c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

