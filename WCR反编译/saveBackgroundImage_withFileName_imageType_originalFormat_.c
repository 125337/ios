// saveBackgroundImage:withFileName:imageType:originalFormat: @ 018995e4

/* Function Stack Size: 0x30 bytes */

void WCRefineChatAvatarProfileCardViewController::
     saveBackgroundImage_withFileName_imageType_originalFormat_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  cfstringStruct *local_108;
  cfstringStruct *local_d8;
  char *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  ulong local_68;
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
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundBasePath_026b73b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    local_58 = puVar3;
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
            (local_28,PTR_s_deleteOldImagesInFolder_forImage_026b73d8,local_58,local_48);
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_68 = 0;
  pcVar4 = local_50;
  local_60 = puVar1;
  FUN_01899b50();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_d8 = &cf_jpg;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_d8;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_png);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_gif);
    if (((ulong)pcVar4 & 1) == 0) {
      uVar5 = local_38;
      _UIImageJPEGRepresentation(DAT_02323d00);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_68;
      local_68 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    else {
      uVar5 = local_38;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_68;
      local_68 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
  }
  else {
    uVar5 = local_38;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_68;
    local_68 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  local_78 = (cfstringStruct *)0x0;
  local_88 = 0;
  uVar6 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_writeToFile_options_error__026a0a68,local_60,1,&local_88);
  _objc_storeStrong(&local_78,local_88);
  local_79 = (undefined1)uVar6;
  if ((uVar6 & 1) == 0) {
    pcVar7 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_108 = &cf_elOX_VGr;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_initWithTitle_message__0269d260,&cf_NO1Y_,local_108);
    local_98 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_show_0269d280);
    _objc_storeStrong(&local_98,0);
    local_8c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    local_8c = 1;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

