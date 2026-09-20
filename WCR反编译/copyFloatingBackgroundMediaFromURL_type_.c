// copyFloatingBackgroundMediaFromURL:type: @ 019c597c

/* Function Stack Size: 0x20 bytes */

void WCRefineFloatingTabBarSettingsViewController::copyFloatingBackgroundMediaFromURL_type_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  cfstringStruct *local_1a0;
  byte local_178;
  byte local_174;
  undefined *local_140;
  cfstringStruct *local_120;
  cfstringStruct *local_100;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  undefined *local_a0;
  ID local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ID local_50;
  undefined4 local_44;
  ulong local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_44 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentFloatingBackgroundFolderP_026bacc0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_deleteOldFloatingBackgroundMedia_026bad08,IVar3,local_40);
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_100 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_100;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    FUN_019c3a4c();
    _objc_retainAutoreleasedReturnValue();
    local_120 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_120 = &cf_png;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_120;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingBackgroundLayoutFileKey_026bad10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_night);
    local_79 = 0;
    local_89 = 0;
    local_140 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((uVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_140;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____dark___
                );
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_140;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_140;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    IVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByAppendingPathComponent__026cab30,local_70);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_98 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 0;
    pcVar2 = local_38;
    local_a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,
               PTR_s_startAccessingSecurityScopedReso_026a22c0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_startAccessingSecurityScopedReso_026a22c0);
      local_a1 = (byte)pcVar2;
    }
    local_b0 = (cfstringStruct *)0x0;
    local_b1 = 0;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isFileURL_026a7088);
    if (((ulong)pcVar2 & 1) == 0) {
      local_d8 = local_b0;
      puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
                 local_38,0,&local_d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_b0,local_d8);
      local_d0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      local_178 = 0;
      if (puVar1 != (undefined *)0x0) {
        puVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_writeToFile_atomically__0269f928,local_98,1);
        local_178 = (byte)puVar1;
      }
      local_b1 = local_178 & 1;
      _objc_storeStrong(&local_d0,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_removeItemAtPath_error__0269f910,local_98,0);
      pcVar2 = local_38;
      puVar1 = local_a0;
      puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_98);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_copyItemAtURL_toURL_error__026a22c8,pcVar2,puVar6,&local_c0);
      _objc_storeStrong(&local_b0,local_c0);
      local_b1 = (byte)puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if ((local_b1 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470
                   ,local_38,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
        local_174 = 0;
        if (puVar1 != (undefined *)0x0) {
          puVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_writeToFile_atomically__0269f928,local_98,1);
          local_174 = (byte)puVar1;
        }
        local_b1 = local_174 & 1;
        _objc_storeStrong(&local_c8,0);
      }
    }
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
    }
    puVar1 = PTR_WCRefineHelper_026ce000;
    if ((local_b1 & 1) == 0) {
      pcVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1a0 = &cf_NO1Y_;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_1a0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingNotifyInjected_026babd0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_of_NO);
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_70,0);
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

