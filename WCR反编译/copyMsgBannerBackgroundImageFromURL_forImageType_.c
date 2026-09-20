// copyMsgBannerBackgroundImageFromURL:forImageType: @ 01b9ba8c

/* Function Stack Size: 0x20 bytes */

void WCRefineMessageBannerBeautifyViewController::copyMsgBannerBackgroundImageFromURL_forImageType_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  byte local_23c;
  undefined *local_180;
  cfstringStruct *local_168;
  undefined8 local_100;
  byte local_f1;
  long local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  byte local_a9;
  undefined *local_a8;
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
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_absoluteString_026a1de0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isFileURL_026a7088);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  FUN_01b98aa8(&cf_copyfromfilesbeginimageType___source___isFileURL___ext___);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCurrentMsgBannerImageFolderPa_026c0090);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_deleteOldMsgBannerImagesInFolder_026c0130,IVar3,local_40);
  pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_168 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_168 = &::cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_168;
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01b95ba0();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    _objc_storeStrong(&local_58,&cf_png);
  }
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_night);
  local_69 = 0;
  local_79 = 0;
  local_180 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_180;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____dark___);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_180;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_180;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  IVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_stringByAppendingPathComponent__026cab30,local_60);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_88 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = 0;
  local_99 = 0;
  uVar1 = local_38;
  local_90 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,
             PTR_s_startAccessingSecurityScopedReso_026a22c0);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startAccessingSecurityScopedReso_026a22c0);
    local_99 = (byte)uVar1;
  }
  FUN_01b98aa8(&cf_copypreparedtarget___startedSecurityScope___);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isFileURL_026a7088);
  if ((uVar1 & 1) == 0) {
    local_d8 = 0;
    local_e8 = 0;
    puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
               local_38,0,&local_e8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_d8,local_e8);
    local_e0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
    lVar8 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01b98aa8(&cf_non_filereaddatalen__luerror___);
    (*(code *)PTR__objc_release_02578630)(lVar8);
    local_f0 = 0;
    local_23c = 0;
    if (local_e0 != (undefined *)0x0) {
      local_100 = 0;
      puVar6 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_writeToFile_options_error__026a0a68,local_88,1,&local_100);
      local_23c = (byte)puVar6;
      _objc_storeStrong(&local_f0,local_100);
    }
    local_f1 = local_23c & 1;
    lVar8 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01b98aa8(&cf_non_filewritetarget___success___error___);
    (*(code *)PTR__objc_release_02578630)(lVar8);
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = local_98;
    puVar7 = local_90;
    local_a8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_copyItemAtURL_toURL_error__026a22c8,local_38,puVar6,&local_b8);
    _objc_storeStrong(&local_98,local_b8);
    local_a9 = (byte)puVar7;
    lVar8 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01b98aa8(&cf_copyItemAtURLsuccess___error___);
    (*(code *)PTR__objc_release_02578630)(lVar8);
    if ((local_a9 & 1) == 0) {
      _objc_storeStrong(&local_98,0);
      local_c8 = local_98;
      puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
                 local_38,0,&local_c8);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_98,local_c8);
      local_c0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
      lVar8 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b98aa8(&cf_fallbackreaddatalen__luerror___);
      (*(code *)PTR__objc_release_02578630)(lVar8);
      puVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      if (puVar6 != (undefined *)0x0) {
        local_d0 = local_98;
        puVar6 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_writeToFile_options_error__026a0a68,local_88,1,&local_d0);
        _objc_storeStrong(&local_98,local_d0);
        local_a9 = (byte)puVar6;
        lVar8 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_localizedDescription_0269ced0);
        _objc_retainAutoreleasedReturnValue();
        FUN_01b98aa8(&cf_fallbackwritesuccess___error___);
        (*(code *)PTR__objc_release_02578630)(lVar8);
      }
      _objc_storeStrong(&local_c0,0);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_a8,0);
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
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

