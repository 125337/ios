// handleItemCellTap: @ 01c9d7e0

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginIconCustomizationViewController::handleItemCellTap_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  char *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_78;
  byte local_5c;
  char *local_58;
  byte local_4a;
  byte local_49;
  undefined *local_48;
  char *local_40;
  undefined4 local_34;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_itemIDFromSender__026c2c70,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingItemID__026bfbd0,local_30);
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    local_40 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_34 = 1;
    }
    else {
      puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resolvedTitleForItemID__026aecd0,
                 local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_30;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_more_plugin_hub);
      local_49 = (byte)IVar1;
      local_5c = 1;
      if ((IVar1 & 1) == 0) {
        IVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_isEqualToString__0269ccc8,&cf_hub_settings);
        local_5c = (byte)IVar1;
      }
      local_4a = local_5c & 1;
      pcVar2 = local_40;
      _objc_alloc();
      if ((local_49 & 1) == 0) {
        local_78 = &cf__INcN6e_uSNcVh;
        if ((local_4a & 1) == 0) {
          local_78 = &cf_S_IN>f_yTyNVh;
        }
      }
      else {
        local_78 = &cf__INbvub0cN0eQSVh;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_initWithTitle_message__0269d260,local_48,local_78);
      local_58 = pcVar2;
      if ((local_4a & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf__INTy,local_18,
                   PTR_s_beginRename_026c2c78);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bVh,local_18,
                 PTR_s_beginPickIcon_026c2c80);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Y,local_18,
                 PTR_s_resetCurrentItem_026c2c88);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelPendingAction_026c2c90);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_48,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

