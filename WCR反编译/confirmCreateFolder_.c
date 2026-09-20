// confirmCreateFolder: @ 01d0260c

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::confirmCreateFolder_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_a8;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  ID local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &::cf___;
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    _objc_storeStrong(&local_30,local_68);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar2 = local_30;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_TyeHe);
    local_34 = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureBasePath_026c3c28);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_48 = (cfstringStruct *)0x0;
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_48,pcVar1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR_WCRefineHelper_026ce000;
    if (((ulong)puVar6 & 1) == 0) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_a8 = &cf_R_1Y_;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78,local_a8);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      local_34 = 1;
    }
    else {
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentTab_026c3bd8);
      _WCRefineProfileBgApplyWarehouseTab();
      FUN_01cfeff4();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadFolders_026c3c78);
      local_34 = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

