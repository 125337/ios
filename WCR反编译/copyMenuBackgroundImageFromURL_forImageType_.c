// copyMenuBackgroundImageFromURL:forImageType: @ 01b87f50

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineMenuBeautifyViewController::copyMenuBackgroundImageFromURL_forImageType_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  byte local_17c;
  undefined *local_140;
  cfstringStruct *local_128;
  long local_f8;
  char *local_f0;
  char *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  byte local_9a;
  byte local_99;
  long local_98;
  undefined *local_90;
  ID local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  ulong local_58;
  cfstringStruct *local_50;
  ID local_48;
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
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCurrentMenuImageFolderPath_026bfda0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_deleteOldMenuImagesInFolder_forI_026bfdb0,IVar2,local_40);
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_128 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_128 = &::cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_128;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_01b872bc();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar6;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  uVar5 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (uVar5 == 0) {
    _objc_storeStrong(&local_58,&cf_png);
  }
  uVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_night);
  local_69 = 0;
  local_79 = 0;
  local_140 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((uVar5 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_140;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____dark___);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_140;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_stringByAppendingPathComponent__026cab30,local_60);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_88 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = 0;
  local_99 = 0;
  uVar5 = local_38;
  local_90 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,
             PTR_s_startAccessingSecurityScopedReso_026a22c0);
  if ((uVar5 & 1) != 0) {
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startAccessingSecurityScopedReso_026a22c0);
    local_99 = (byte)uVar5;
  }
  local_9a = 0;
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isFileURL_026a7088);
  if ((uVar5 & 1) == 0) {
    local_d8 = local_98;
    puVar7 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
               local_38,0,&local_d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_98,local_d8);
    local_d0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_length_0269cca0);
    local_17c = 0;
    if (puVar7 != (undefined *)0x0) {
      local_e0 = local_98;
      puVar7 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_writeToFile_options_error__026a0a68,local_88,1,&local_e0);
      local_17c = (byte)puVar7;
      _objc_storeStrong(&local_98,local_e0);
    }
    local_9a = local_17c & 1;
    _objc_storeStrong(&local_d0,0);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_98;
    puVar8 = local_90;
    local_a8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_copyItemAtURL_toURL_error__026a22c8,local_38,puVar7,&local_b0);
    _objc_storeStrong(&local_98,local_b0);
    local_9a = (byte)puVar8;
    if (((ulong)puVar8 & 1) == 0) {
      _objc_storeStrong(&local_98,0);
      local_c0 = local_98;
      puVar7 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
                 local_38,0,&local_c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_98,local_c0);
      local_b8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_length_0269cca0);
      if (puVar7 != (undefined *)0x0) {
        local_c8 = local_98;
        puVar7 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_writeToFile_options_error__026a0a68,local_88,1,&local_c8);
        _objc_storeStrong(&local_98,local_c8);
        local_9a = (byte)puVar7;
      }
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_a8,0);
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
  }
  if ((local_9a & 1) == 0) {
    pcVar9 = "WCUIAlertView";
    _objc_getClass();
    local_e8 = pcVar9;
    if (pcVar9 != (char *)0x0) {
      _objc_alloc();
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      bVar1 = local_98 != 0;
      if (bVar1) {
        local_f8 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_localizedDescription_0269ced0);
        _objc_retainAutoreleasedReturnValue();
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringWithFormat__0269cca8,&cf_elOX_eN_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_initWithTitle_message__0269d260,&cf_NO1Y_);
      local_f0 = pcVar9;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_show_0269d280);
      _objc_storeStrong(&local_f0,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
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

