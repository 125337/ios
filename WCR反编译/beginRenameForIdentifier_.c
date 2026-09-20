// beginRenameForIdentifier: @ 018d96d8

/* Function Stack Size: 0x18 bytes */

void WCRChatToolbarActionsViewController::beginRenameForIdentifier_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  char *pcVar2;
  ID local_50;
  char *local_48;
  undefined4 local_3c;
  char *local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actionWithIdentifier__026b8260,local_28);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCUIAlertView";
  local_30 = IVar1;
  _objc_getClass();
  local_38 = pcVar2;
  if ((local_30 == 0) || (pcVar2 == (char *)0x0)) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setPendingActionIdentifier__026b8268,local_28);
    pcVar2 = local_38;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarTitleKey);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isEqualToString__0269ccc8,&cf__);
    if ((IVar1 & 1) != 0) {
      _objc_storeStrong(&local_50,&::cf___);
    }
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((IVar1 != 0) &&
       (pcVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,
                  PTR_s_setTextFieldDefaultText__0269fd98), ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_50);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelRename_026b7020);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmRename__026b6d20);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRenameAlert__026b7028,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

