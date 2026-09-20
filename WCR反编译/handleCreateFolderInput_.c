// handleCreateFolderInput: @ 01c6c6e8

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::handleCreateFolderInput_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_f0;
  char *local_90;
  undefined8 local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  local_40 = 0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar4 = local_38;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar4;
    while (uVar2 = local_48, local_48 != 0) {
      pcVar3 = "WCUIAlertView";
      _objc_getClass("WCUIAlertView");
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_40,local_48);
        break;
      }
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_48;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _objc_storeStrong(&local_48,0);
  }
  if (local_40 == 0) {
    local_4c = 1;
  }
  else {
    local_58 = 0;
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_58;
        local_58 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      _objc_storeStrong(&local_60,0);
    }
    uVar2 = local_40;
    _objc_getAssociatedObject(local_40,"basePath");
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    if (((local_58 != 0) &&
        (uVar4 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
        uVar2 = local_58, uVar4 != 0)) && (local_68 != 0)) {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_58;
      local_58 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_70 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_80 = (cfstringStruct *)0x0;
        local_88 = 0;
        local_78 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_70,1,0,&local_88);
        _objc_storeStrong(&local_80,local_88);
        if (((ulong)puVar1 & 1) == 0) {
          pcVar3 = "WCUIAlertView";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)();
          pcVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_f0 = &cf_elR_eN9Y;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_initWithTitle_message__0269d260,&cf_R_1Y_,local_f0);
          local_90 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_show_0269d280);
          _objc_storeStrong(&local_90,0);
        }
        else {
          puVar1 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveSettings_026b9548);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
        }
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
      }
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

