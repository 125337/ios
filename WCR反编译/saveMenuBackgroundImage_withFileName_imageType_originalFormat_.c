// saveMenuBackgroundImage:withFileName:imageType:originalFormat: @ 01b879f8

/* Function Stack Size: 0x30 bytes */

void WCRefineMenuBeautifyViewController::
     saveMenuBackgroundImage_withFileName_imageType_originalFormat_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  char *pcVar7;
  char *local_b8;
  char *local_b0;
  byte local_a1;
  long local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  undefined1 local_79;
  long local_78;
  ulong local_70;
  ulong local_68;
  ID local_60;
  ID local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCurrentMenuImageFolderPath_026bfda0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_deleteOldMenuImagesInFolder_forI_026bfdb0,IVar2,local_48);
  IVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_68 = 0;
  uVar3 = local_50;
  local_60 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,&cf_png);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_gif);
    if ((uVar3 & 1) == 0) {
      uVar4 = local_38;
      _UIImageJPEGRepresentation(DAT_02323d00);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_68 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      uVar4 = local_38;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_68 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  else {
    uVar4 = local_38;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_68;
    local_68 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if (local_68 == 0) {
    pcVar7 = "WCUIAlertView";
    _objc_getClass();
    local_b0 = pcVar7;
    if (pcVar7 != (char *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b8 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar7,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_show_0269d280);
      _objc_storeStrong(&local_b8,0);
    }
  }
  else {
    local_78 = 0;
    local_88 = 0;
    uVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_writeToFile_options_error__026a0a68,local_60,1,&local_88);
    _objc_storeStrong(&local_78,local_88);
    local_79 = (undefined1)uVar3;
    if ((uVar3 & 1) == 0) {
      pcVar7 = "WCUIAlertView";
      _objc_getClass();
      local_90 = pcVar7;
      if (pcVar7 != (char *)0x0) {
        _objc_alloc();
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_a1 = 0;
        bVar1 = local_78 != 0;
        if (bVar1) {
          lVar5 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = lVar5;
        }
        local_a1 = bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_elOX_VGr_)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar7,PTR_s_initWithTitle_message__0269d260,&cf_NO1Y_);
        local_98 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_show_0269d280);
        _objc_storeStrong(&local_98,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

