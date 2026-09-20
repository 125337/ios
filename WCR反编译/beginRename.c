// beginRename @ 01c9dd18

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginIconCustomizationViewController::beginRename(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_48;
  undefined *local_40;
  char *local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingItemID_026bfbd8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    pcVar1 = "WCUIAlertView";
    _objc_getClass();
    local_38 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_2c = 1;
    }
    else {
      puVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resolvedTitleForItemID__026aecd0,
                 local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_38;
      local_40 = puVar2;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (puVar2 != (undefined *)0x0) {
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setTextFieldDefaultText__0269fd98);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_performSelector_withObject__026ca7c0,
                     PTR_s_setTextFieldDefaultText__0269fd98,local_40);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_confirmRename__026b6d20);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelPendingAction_026c2c90);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

