// handleNewTQQOnlineIconFolderInput: @ 01c628f0

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::handleNewTQQOnlineIconFolderInput_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_88;
  char *local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  ID local_40;
  ID local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if ((lVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 != 0)) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getTQQOnlineIconBasePath_026c1e18);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = (cfstringStruct *)0x0;
    local_58 = 0;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_40,1,0,&local_58);
    _objc_storeStrong(&local_50,local_58);
    if (((ulong)puVar3 & 1) == 0) {
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_88 = &cf_elR_eN9Y;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_initWithTitle_message__0269d260,&cf_R_1Y_,local_88);
      local_60 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setTqqOnlineIconFolderPath__026c1e20,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveSettings_026b9548);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

