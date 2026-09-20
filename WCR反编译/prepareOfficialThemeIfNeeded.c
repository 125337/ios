// prepareOfficialThemeIfNeeded @ 015c6788

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeStore::prepareOfficialThemeIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *local_218;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  byte local_1a1;
  char *local_1a0;
  byte local_191;
  ulong local_190;
  byte local_181;
  ulong local_180;
  byte local_171;
  char *local_170;
  char *local_168;
  char *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  byte local_109;
  cfstringStruct *local_108;
  char *local_100;
  char *local_f8;
  undefined4 local_ec;
  char *local_e8;
  char *local_e0;
  undefined *local_d8;
  SEL local_d0;
  char *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_d0 = param_2;
  local_c8 = (char *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c8;
  local_d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_repositoryPath_026aeb48);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_e0,1,0);
  pcVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,&cf__wcr_imported_v1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_d8;
  local_e8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_fileExistsAtPath__026ca630,pcVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_f8 = (char *)0x0;
    pcVar2 = "CUtility";
    _objc_getClass();
    pcVar4 = &cf_weAppSDKBundleOrMainBundle;
    local_100 = pcVar2;
    _NSSelectorFromString();
    pcVar2 = local_100;
    local_108 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,local_108);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_f8;
      local_f8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_f8;
    puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar3 = PTR__OBJC_CLASS___NSBundle_026ce418;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_f8;
      local_f8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    local_109 = 1;
    _memset(auStack_158,0,0x40);
    local_c0 = &cf_weui_color_xml;
    local_b8 = &cf_weui_color_new_xml;
    local_b0 = &cf_color_css;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f0 != (undefined *)0x0) {
      lVar8 = *local_148;
      local_1f8 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar8 != 0) {
            _objc_enumerationMutation(*local_148 - lVar8,puVar1);
          }
          local_118 = *(ulong *)(local_150 + (long)local_1f8 * 8);
          pcVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,local_118);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_d8;
          local_160 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_fileExistsAtPath__026ca630,pcVar2);
          if (((ulong)puVar5 & 1) == 0) {
            uVar6 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_isEqualToString__0269ccc8,&cf_color_css);
            local_218 = local_f8;
            local_171 = 0;
            local_181 = 0;
            local_191 = 0;
            local_1a1 = 0;
            if ((uVar6 & 1) == 0) {
              uVar6 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_stringByDeletingPathExtension_0269fd18);
              _objc_retainAutoreleasedReturnValue();
              local_181 = 1;
              uVar7 = local_118;
              local_180 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              local_191 = 1;
              local_190 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_218,PTR_s_pathForResource_ofType__026a3330,uVar6);
              _objc_retainAutoreleasedReturnValue();
              local_1a1 = 1;
              local_1a0 = local_218;
            }
            else {
              local_218 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_officialColorCSSPath_026b0e30);
              _objc_retainAutoreleasedReturnValue();
              local_171 = 1;
              local_170 = local_218;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_168 = local_218;
            if ((local_1a1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1a0);
            }
            if ((local_191 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_190);
            }
            if ((local_181 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_180);
            }
            if ((local_171 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_170);
            }
            pcVar2 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
            if (pcVar2 == (char *)0x0) {
              local_109 = 0;
              local_ec = 3;
            }
            else {
              local_1b0 = 0;
              local_1b8 = 0;
              puVar5 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_copyItemAtPath_toPath_error__026a1758,local_168,local_160,
                         &local_1b8);
              _objc_storeStrong(&local_1b0,local_1b8);
              if (((ulong)puVar5 & 1) == 0) {
                local_109 = 0;
              }
              _objc_storeStrong(&local_1b0,0);
              local_ec = 0;
            }
            _objc_storeStrong(&local_168,0);
          }
          else {
            local_ec = 3;
          }
          _objc_storeStrong(&local_160,0);
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        local_1f8 = (undefined *)0x0;
      } while (local_1f0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (&::cf___,PTR_s_writeToFile_atomically_encoding__026a33a8,local_e8,1,4,0);
    }
    _objc_storeStrong(&local_f8,0);
    local_ec = 0;
  }
  else {
    local_ec = 1;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

