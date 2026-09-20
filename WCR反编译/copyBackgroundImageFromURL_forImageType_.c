// copyBackgroundImageFromURL:forImageType: @ 01899d34

/* Function Stack Size: 0x20 bytes */

void WCRefineChatAvatarProfileCardViewController::copyBackgroundImageFromURL_forImageType_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_1c0;
  long local_1a0;
  uint local_16c;
  undefined *local_130;
  char *local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  byte local_9a;
  byte local_99;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  ulong local_58;
  undefined *local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundBasePath_026b73b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_deleteOldImagesInFolder_forImage_026b73d8,local_48,local_40);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentFolderName_026b73e0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_38;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_018993e0();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    _objc_storeStrong(&local_58,&cf_png);
  }
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_night);
  local_69 = 0;
  local_79 = 0;
  local_130 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_130;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____dark___);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_130;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_stringByAppendingPathComponent__026cab30,local_60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = (cfstringStruct *)0x0;
  local_99 = 0;
  uVar4 = local_38;
  local_90 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,
             PTR_s_startAccessingSecurityScopedReso_026a22c0);
  if ((uVar4 & 1) != 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startAccessingSecurityScopedReso_026a22c0);
    local_99 = (byte)uVar4;
  }
  local_9a = 0;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isFileURL_026a7088);
  if ((uVar4 & 1) == 0) {
    local_d0 = 0;
    local_e0 = 0;
    puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
               local_38,0,&local_e0);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_d0,local_e0);
    local_e8 = 0;
    local_16c = 0;
    local_d8 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      local_f0 = 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_writeToFile_options_error__026a0a68,local_88,1,&local_f0);
      local_16c = (uint)puVar1;
      _objc_storeStrong(&local_e8,local_f0);
    }
    local_9a = (byte)local_16c & 1;
    if ((local_16c & 1) == 0) {
      if (local_e8 == 0) {
        local_1a0 = local_d0;
      }
      else {
        local_1a0 = local_e8;
      }
      _objc_storeStrong(&local_98,local_1a0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_98;
    puVar2 = local_90;
    local_a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_copyItemAtURL_toURL_error__026a22c8,local_38,puVar1,&local_b0);
    _objc_storeStrong(&local_98,local_b0);
    local_9a = (byte)puVar2;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_storeStrong(&local_98,0);
      local_c0 = local_98;
      puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
                 local_38,0,&local_c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_98,local_c0);
      local_b8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      if (puVar1 != (undefined *)0x0) {
        local_c8 = local_98;
        puVar1 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_writeToFile_options_error__026a0a68,local_88,1,&local_c8);
        _objc_storeStrong(&local_98,local_c8);
        local_9a = (byte)puVar1;
      }
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_a8,0);
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
  }
  if ((local_9a & 1) == 0) {
    pcVar6 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar7 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_1c0 = &cf_elY6ReN;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_initWithTitle_message__0269d260,&cf_NO1Y_,local_1c0);
    local_100 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_show_0269d280);
    _objc_storeStrong(&local_100,0);
    local_f4 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    local_f4 = 1;
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

