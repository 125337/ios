// confirmRenameHistoryItem: @ 01e3de30

/* Function Stack Size: 0x18 bytes */

void WCRefineSvgColorSchemeHistoryViewController::confirmRenameHistoryItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  int local_9c;
  ID local_70;
  ID local_60;
  undefined *local_50;
  ID local_48;
  ID local_40;
  undefined4 local_38;
  byte local_31;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  bVar1 = true;
  if (IVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRenameItemID_026b7be8);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 0;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingRenameItemID__026b7bc0,0);
    local_38 = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mode_026ab488);
    puVar4 = local_50;
    if (IVar2 != 0) {
      local_70 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRenameItemID_026b7be8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_renameSvgRandomColorSchemeHistor_026c6470,local_70,local_48);
      local_9c = (int)puVar4;
    }
    else {
      local_60 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRenameItemID_026b7be8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_renameSvgFixedColorSchemeHistory_026c6468,local_60,local_48);
      local_9c = (int)puVar4;
    }
    if (IVar2 != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingRenameItemID__026b7bc0,0);
    if (local_9c != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Ty_OX_);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

