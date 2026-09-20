// handleCreateFolder: @ 01ce603c

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardBeautifyViewController::handleCreateFolder_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  uint local_8c;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &::cf___;
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_8c = 0;
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_8c = (uint)pcVar2;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if ((local_8c & 1) == 0) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_d0 = &::cf___;
      }
      _objc_storeStrong(&local_40,local_d0);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if ((local_58 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_c0 = &::cf___;
      }
      _objc_storeStrong(&local_40,local_c0);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_58,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,0);
  if ((local_40 != (cfstringStruct *)0x0) &&
     (pcVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     pcVar1 != (cfstringStruct *)0x0)) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getWCRefineBackgroundBasePath_026c39f8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = 0;
    local_80 = 0;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_68,1,0,&local_80);
    _objc_storeStrong(&local_78,local_80);
    if (((ulong)puVar3 & 1) == 0) {
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithTitle_message__0269d260,&cf_R_1Y_);
      local_88 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_show_0269d280);
      _objc_storeStrong(&local_88,0);
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

