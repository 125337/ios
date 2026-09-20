// showImageSelectorFromFolder @ 01cadfc4

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginTopViewController::showImageSelectorFromFolder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_228;
  undefined *local_220;
  ID local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  int local_1bc;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  undefined8 local_198;
  byte local_189;
  ID local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined *local_138;
  undefined *local_130;
  undefined4 local_124;
  char *local_120;
  char *local_118;
  undefined8 local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  ID local_f0;
  SEL local_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = param_2;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getPluginTopFolderPath_026c2fe0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_f0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630,local_f0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_f0,1,0);
  }
  local_100 = 0;
  local_110 = 0;
  puVar1 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_f0,&local_110);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_100,local_110);
  local_108 = puVar1;
  if ((local_100 == 0) && (puVar1 != (undefined *)0x0)) {
    local_58 = &cf_jpg;
    local_50 = &cf_jpeg;
    local_48 = &cf_png;
    local_40 = &cf_gif;
    local_38 = &cf_bmp;
    local_30 = &cf_webp;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6
              );
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_130 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar7;
    _memset(auStack_180,0,0x40);
    puVar1 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_d8,0x10);
    if (local_220 != (undefined *)0x0) {
      lVar6 = *local_170;
      local_228 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar6 != 0) {
            _objc_enumerationMutation(*local_170 - lVar6,puVar1);
          }
          local_140 = *(undefined8 *)(local_178 + (long)local_228 * 8);
          IVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_140);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = local_f8;
          local_188 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_fileExistsAtPath_isDirectory__026ca638,IVar2,&local_189);
          if ((((ulong)puVar7 & 1) != 0) && ((local_189 & 1) == 0)) {
            uVar3 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_198 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            puVar7 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_containsObject__0269cbb8,local_198);
            if (((ulong)puVar7 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_140);
            }
            _objc_storeStrong(&local_198,0);
          }
          _objc_storeStrong(&local_188,0);
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_d8,
                   0x10);
        local_228 = (undefined *)0x0;
      } while (local_220 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      pcVar5 = "WCUIAlertView";
      _objc_getClass();
      local_1a0 = pcVar5;
      if (pcVar5 != (char *)0x0) {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1a8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_show_0269d280);
        _objc_storeStrong(&local_1a8,0);
      }
      local_124 = 1;
    }
    else {
      pcVar5 = "WCUIActionSheet";
      _objc_getClass();
      local_1b0 = pcVar5;
      if (pcVar5 != (char *)0x0) {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1b8 = pcVar5;
        for (local_1bc = 0; puVar7 = (undefined *)(long)local_1bc, puVar1 = local_138,
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0), puVar7 < puVar1;
            local_1bc = local_1bc + 1) {
          puVar1 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_objectAtIndexedSubscript__0269cc78,(long)local_1bc);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1c8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_selectPluginTopImage_d_);
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = puVar7;
          _NSSelectorFromString();
          local_1d8 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_addDynamicMethodForImageSelector_026c2fe8,puVar7,local_1c8);
          IVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_formatImageNameForDisplay__026c2f98,local_1c8);
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_addBtnTitle_target_sel__0269d278,IVar2,local_e0,local_1d8);
          _objc_storeStrong(&local_1e0);
          _objc_storeStrong(&local_1d0,0);
          _objc_storeStrong(&local_1c8,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
        pcVar5 = local_1b8;
        IVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_showInView__0269d310);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        _objc_storeStrong(&local_1b8,0);
      }
      local_124 = 0;
    }
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_130,0);
  }
  else {
    pcVar5 = "WCUIAlertView";
    _objc_getClass();
    local_118 = pcVar5;
    if (pcVar5 != (char *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_120 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,0)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_show_0269d280);
      _objc_storeStrong(&local_120,0);
    }
    local_124 = 1;
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

