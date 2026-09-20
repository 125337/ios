// copyProfileBgImageFromURL:forImageType:htmlOnly: @ 01ce732c

/* Function Stack Size: 0x24 bytes */

void WCRefineProfileCardBeautifyViewController::copyProfileBgImageFromURL_forImageType_htmlOnly_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  cfstringStruct *local_210;
  uint local_14c;
  char *local_128;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  byte local_d1;
  char *local_d0;
  undefined *local_c8;
  byte local_b9;
  long local_b8;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  byte local_63;
  byte local_62;
  byte local_61;
  char *local_60;
  undefined *local_58;
  ulong local_50;
  int local_48;
  byte local_41;
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
  local_41 = (byte)param_5;
  if (local_38 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eNS1Y_);
    local_48 = 1;
    goto LAB_01ce8158;
  }
  uVar2 = local_38;
  FUN_01ce8184();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  if ((((local_41 & 1) != 0) &&
      ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf_html),
      (uVar2 & 1) == 0)) &&
     (uVar2 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_htm),
     (uVar2 & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
               local_38,1,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    FUN_01ce851c();
    if (((ulong)puVar3 & 1) != 0) {
      _objc_storeStrong(&local_50,&cf_html);
    }
    _objc_storeStrong(&local_58,0);
  }
  uVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    pcVar5 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    local_48 = 1;
    _objc_storeStrong(&local_60,0);
  }
  else if ((local_41 & 1) == 0) {
    _WCRefineProfileBgWarehouseTabFromConfig();
    local_61 = uVar2 == 1;
    uVar2 = local_50;
    FUN_01ce07cc();
    local_62 = (byte)uVar2;
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_html);
    local_14c = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_htm);
      local_14c = (uint)uVar2;
    }
    local_63 = (byte)local_14c & 1;
    if ((local_14c & 1) == 0) {
      if (((local_61 & 1) == 0) || ((local_62 & 1) != 0)) {
        if (((local_61 & 1) != 0) || ((local_62 & 1) == 0)) goto LAB_01ce76b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR_fVGrN_VGrbRV
                  );
        local_48 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR_fN_);
        local_48 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_H);
      local_48 = 1;
    }
  }
  else {
LAB_01ce76b8:
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_70 == (undefined *)0x0) ||
       (puVar3 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
       puVar3 == (undefined *)0x0)) {
      puVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getWCRefineBackgroundBasePath_026c39f8);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_stringByAppendingPathComponent__026cab30,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_70;
      local_70 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_70,1,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCurrentFolderName_026c3958);
    _objc_retainAutoreleasedReturnValue();
    local_90 = (undefined *)0x0;
    uVar2 = local_40;
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_night);
    if ((uVar2 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_90;
      local_90 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____dark___
                );
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_90;
      local_90 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileExistsAtPath__026ca630,local_70);
    if (((ulong)puVar3 & 1) == 0) {
      local_a0 = 0;
      local_a8 = 0;
      puVar3 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_70,1,0,&local_a8);
      _objc_storeStrong(&local_a0,local_a8);
      if (((ulong)puVar3 & 1) == 0) {
        pcVar5 = "WCUIAlertView";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_b9 = 0;
        bVar1 = local_a0 != 0;
        if (bVar1) {
          lVar6 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = lVar6;
        }
        local_b9 = bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_elR_eN9Y_)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_initWithTitle_message__0269d260,&cf_NO1Y_);
        local_b0 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_show_0269d280);
        local_48 = 1;
        _objc_storeStrong(&local_b0,0);
      }
      else {
        local_48 = 0;
      }
      _objc_storeStrong(&local_a0,0);
      if (local_48 == 0) goto LAB_01ce7b94;
    }
    else {
LAB_01ce7b94:
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_deleteOldImagesInFolder_forImage_026b73d8,local_70,local_40);
      puVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_stringByAppendingPathComponent__026cab30,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar3;
      if ((local_90 == (undefined *)0x0) ||
         (puVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
         puVar3 == (undefined *)0x0)) {
        pcVar5 = "WCUIAlertView";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_show_0269d280);
        local_48 = 1;
        _objc_storeStrong(&local_d0,0);
      }
      else {
        uVar7 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_startAccessingSecurityScopedReso_026a22c0);
        uVar2 = local_38;
        puVar3 = local_98;
        local_d1 = (byte)uVar7;
        local_e0 = (cfstringStruct *)0x0;
        puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_c8);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_copyItemAtURL_toURL_error__026a22c8,uVar2,puVar4,&local_f0);
        _objc_storeStrong(&local_e0,local_f0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_e1 = (byte)puVar3;
        if (((ulong)puVar3 & 1) == 0) {
          local_100 = local_e0;
          puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,
                     PTR_s_dataWithContentsOfURL_options_er_026ac470,local_38,1,&local_100);
          _objc_retainAutoreleasedReturnValue();
          _objc_storeStrong(&local_e0,local_100);
          local_f8 = puVar3;
          if ((puVar3 != (undefined *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0),
             puVar3 != (undefined *)0x0)) {
            local_108 = local_e0;
            puVar3 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_writeToFile_options_error__026a0a68,local_c8,1,&local_108);
            _objc_storeStrong(&local_e0,local_108);
            local_e1 = (byte)puVar3;
          }
          _objc_storeStrong(&local_f8,0);
        }
        if ((local_d1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
        }
        if ((local_e1 & 1) == 0) {
          local_119 = false;
          bVar1 = local_e0 == (cfstringStruct *)0x0;
          if (bVar1) {
            local_210 = &cf__gw;
          }
          else {
            local_210 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_localizedDescription_0269ced0);
            _objc_retainAutoreleasedReturnValue();
            local_118 = local_210;
          }
          local_119 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = local_210;
          if ((local_119 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_118);
          }
          pcVar5 = "WCUIAlertView";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_elY6ReN_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_initWithTitle_message__0269d260,&cf_NO1Y_);
          local_128 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28);
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_show_0269d280);
          _objc_storeStrong(&local_128,0);
          _objc_storeStrong(&local_110,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
        }
        _objc_storeStrong(&local_e0,0);
        local_48 = 0;
      }
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_50,0);
LAB_01ce8158:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

