// handleCreateFloatingBackgroundFolder: @ 019c47b0

/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarSettingsViewController::handleCreateFloatingBackgroundFolder_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_b0;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  ID local_48;
  undefined4 local_40;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_39 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_60 = &::cf___;
  }
  else {
    local_60 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  local_39 = !bVar1;
  FUN_019c4b14();
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_60;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_40 = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingBackgroundBasePath_026bacb8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_50 = (cfstringStruct *)0x0;
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_50,pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR_WCRefineHelper_026ce000;
    if (((ulong)puVar6 & 1) == 0) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_b0 = &cf_R_1Y_;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78,local_b0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    else {
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingNotifyInjected_026babd0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

