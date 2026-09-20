// saveProfileBgImage:withFileName:imageType:originalFormat: @ 01ce6bc0

/* Function Stack Size: 0x30 bytes */

void WCRefineProfileCardBeautifyViewController::
     saveProfileBgImage_withFileName_imageType_originalFormat_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  cfstringStruct *local_100;
  char *local_b8;
  byte local_a9;
  long local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined1 local_89;
  long local_88;
  cfstringStruct *local_80;
  ulong local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_6);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_58 == (undefined *)0x0) ||
     (puVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getWCRefineBackgroundBasePath_026c39f8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringByAppendingPathComponent__026cab30,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_58;
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_58,1,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_deleteOldImagesInFolder_forImage_026b73d8,local_58,local_48);
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_78 = 0;
  pcVar4 = local_50;
  local_70 = puVar2;
  FUN_01ce1b34();
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_100 = &cf_jpg;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_100;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_png);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_gif);
    if (((ulong)pcVar4 & 1) == 0) {
      uVar5 = local_38;
      _UIImageJPEGRepresentation(DAT_02323d00);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_78;
      local_78 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    else {
      uVar5 = local_38;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_78;
      local_78 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
  }
  else {
    uVar5 = local_38;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_78;
    local_78 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  if (local_78 == 0) {
    pcVar8 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b8 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar8,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_show_0269d280);
    _objc_storeStrong(&local_b8,0);
  }
  else {
    local_88 = 0;
    local_98 = 0;
    uVar6 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_writeToFile_options_error__026a0a68,local_70,1,&local_98);
    _objc_storeStrong(&local_88,local_98);
    local_89 = (undefined1)uVar6;
    if ((uVar6 & 1) == 0) {
      pcVar8 = "WCUIAlertView";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_a9 = 0;
      bVar1 = local_88 != 0;
      if (bVar1) {
        lVar7 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_localizedDescription_0269ced0);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = lVar7;
      }
      local_a9 = bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_elOX_VGr_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_initWithTitle_message__0269d260,&cf_NO1Y_);
      local_a0 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_show_0269d280);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

