// copyPickedURL:type: @ 01880380

/* Function Stack Size: 0x20 bytes */

void WCRefineChatAttachmentBeautifyViewController::copyPickedURL_type_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_168;
  undefined *local_118;
  cfstringStruct *local_100;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  undefined *local_98;
  ID local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
  cfstringStruct *local_58;
  ID local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (local_38 == 0) {
    local_44 = 1;
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentFolderPathEnsureExists_026b6ea8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_deleteOldMediaInFolder_forType__026b6f78,IVar1,local_40);
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_100 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_100;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_0187d458();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (uVar4 == 0) {
      _objc_storeStrong(&local_60,&cf_png);
    }
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_night);
    local_71 = 0;
    local_81 = 0;
    local_118 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_118;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____dark___
                );
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_118;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_118;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByAppendingPathComponent__026cab30,local_68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_90 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = (cfstringStruct *)0x0;
    local_a1 = 0;
    uVar4 = local_38;
    local_98 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,
               PTR_s_startAccessingSecurityScopedReso_026a22c0);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_startAccessingSecurityScopedReso_026a22c0);
      local_a1 = (byte)uVar4;
    }
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isFileURL_026a7088);
    if ((uVar4 & 1) == 0) {
      puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
      if ((puVar6 == (undefined *)0x0) ||
         (puVar6 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_e0,PTR_s_writeToFile_atomically__0269f928,local_90,1),
         ((ulong)puVar6 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_NO1Y_);
      }
      _objc_storeStrong(&local_e0,0);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_a0;
      puVar7 = local_98;
      local_b0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_copyItemAtURL_toURL_error__026a22c8,local_38,puVar6,&local_c0);
      _objc_storeStrong(&local_a0,local_c0);
      local_b1 = (byte)puVar7;
      if (((ulong)puVar7 & 1) == 0) {
        _objc_storeStrong(&local_a0,0);
        local_d0 = local_a0;
        puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470
                   ,local_38,0,&local_d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(&local_a0,local_d0);
        local_c8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
        if (puVar6 != (undefined *)0x0) {
          local_d8 = local_a0;
          puVar6 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_writeToFile_options_error__026a0a68,local_90,1,&local_d8);
          _objc_storeStrong(&local_a0,local_d8);
          local_b1 = (byte)puVar6;
        }
        _objc_storeStrong(&local_c8,0);
      }
      puVar6 = PTR_WCRefineHelper_026ce000;
      if ((local_b1 & 1) == 0) {
        pcVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_localizedDescription_0269ced0);
        _objc_retainAutoreleasedReturnValue();
        local_168 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_168 = &cf_NO1Y_;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78,local_168);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_b0,0);
    }
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

