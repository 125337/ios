// importZipURL: @ 01d079d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

long_long WCRefineProfileBgMaterialRepositoryViewController::importZipURL_
                    (ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  cfstringStruct **ppcVar2;
  undefined *puVar3;
  cfstringStruct **ppcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  cfstringStruct *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  cfstringStruct *local_698;
  undefined *local_678;
  undefined *local_5e8;
  undefined *local_5e0;
  undefined *local_5b8;
  undefined *local_548;
  undefined *local_540;
  cfstringStruct *local_4f0;
  undefined *local_4b8;
  undefined *local_4b0;
  cfstringStruct *local_430;
  bool local_3e1;
  cfstringStruct *local_3e0;
  undefined *local_3d0;
  undefined *local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  long local_3b0;
  long local_3a8;
  byte local_399;
  cfstringStruct *local_398;
  undefined1 auStack_390 [8];
  long local_388;
  long *local_380;
  undefined8 local_350;
  undefined *local_348;
  byte local_339;
  undefined *local_338;
  undefined *local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  cfstringStruct *local_2e8;
  long_long local_2e0;
  cfstringStruct *local_2d8;
  undefined8 local_2d0;
  ulong local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  cfstringStruct *local_280;
  undefined *local_278;
  undefined *local_270;
  int local_268;
  undefined1 local_261;
  char *local_260;
  char *local_258;
  byte local_249;
  cfstringStruct **local_248;
  cfstringStruct **local_240;
  cfstringStruct **local_238;
  cfstringStruct *local_230;
  SEL local_228;
  ID local_220;
  long_long local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [128];
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined1 auStack_b0 [128];
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppcVar2 = &local_230;
  local_230 = (cfstringStruct *)0x0;
  local_228 = param_2;
  local_220 = param_1;
  _objc_storeStrong(ppcVar2,param_3);
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  _arc4random_uniform(0xffffffff);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_WCRPBGHTML__u);
  _objc_retainAutoreleasedReturnValue();
  ppcVar4 = ppcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(ppcVar2,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_238 = ppcVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(ppcVar2);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  ppcVar2 = local_238;
  pcVar5 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_430 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_430 = &cf_repo_zip;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (ppcVar2,PTR_s_stringByAppendingPathComponent__026cab30,local_430);
  _objc_retainAutoreleasedReturnValue();
  local_240 = ppcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_230;
  puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_240);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_copyItemAtURL_toURL_error__026a22c8,pcVar5);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  ppcVar2 = local_238;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_238,PTR_s_stringByAppendingPathComponent__026cab30,&cf_extract);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_248 = ppcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_249 = 0;
  pcVar7 = "ZipArchive";
  _objc_getClass();
  local_258 = pcVar7;
  if (pcVar7 != (char *)0x0) {
    _objc_alloc_init();
    local_260 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipOpenFile__026ad0b0);
    if ((((ulong)pcVar7 & 1) != 0) &&
       (pcVar7 = local_260,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_260,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipFileTo_overWrite__026ad0b8
                 ), ((ulong)pcVar7 & 1) != 0)) {
      pcVar7 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_UnzipOpenFile__026ad0b0,local_240);
      local_261 = SUB81(pcVar7,0);
      if (((ulong)pcVar7 & 1) != 0) {
        pcVar7 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_260,PTR_s_UnzipFileTo_overWrite__026ad0b8,local_248,1);
        local_249 = (byte)pcVar7;
        pcVar7 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_260,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipCloseFile_026ad0c0);
        if (((ulong)pcVar7 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_UnzipCloseFile_026ad0c0);
        }
      }
    }
    _objc_storeStrong(&local_260,0);
  }
  if ((local_249 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_218 = 0;
    local_268 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_270 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_248);
    _objc_retainAutoreleasedReturnValue();
    local_30 = *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260;
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_enumeratorAtURL_includingPropert_026b0eb8,puVar3,puVar8,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_278 = puVar9;
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _memset(auStack_2c0,0,0x40);
    puVar3 = local_278;
    (*(code *)PTR__objc_retain_02578638)();
    local_4b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_b0,0x10);
    if (local_4b0 != (undefined *)0x0) {
      lVar14 = *local_2b0;
      local_4b8 = (undefined *)0x0;
      do {
        do {
          if (*local_2b0 - lVar14 != 0) {
            _objc_enumerationMutation(*local_2b0 - lVar14,puVar3);
          }
          local_280 = *(cfstringStruct **)(local_2b8 + (long)local_4b8 * 8);
          local_2c8 = 0;
          local_2d0 = 0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_280,PTR_s_getResourceValue_forKey_error__026b2d98,&local_2d0,
                     *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260,0);
          _objc_storeStrong(&local_2c8,local_2d0);
          uVar10 = local_2c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_boolValue_026ca540);
          if ((uVar10 & 1) == 0) {
            pcVar5 = local_280;
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            pcVar11 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_4f0 = pcVar11;
            if (pcVar11 == (cfstringStruct *)0x0) {
              local_4f0 = &::cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_2d8 = local_4f0;
            (*(code *)PTR__objc_release_02578630)(pcVar11);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            local_c0 = &cf_html;
            local_b8 = &cf_htm;
            puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_c0,2);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            puVar6 = local_270;
            if (((ulong)puVar8 & 1) == 0) {
              local_268 = 3;
            }
            else {
              pcVar5 = local_280;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_280,PTR_s_URLByDeletingLastPathComponent_026af050);
              _objc_retainAutoreleasedReturnValue();
              pcVar11 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(pcVar11);
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              local_268 = 0;
            }
            _objc_storeStrong(&local_2d8,0);
          }
          else {
            local_268 = 3;
          }
          _objc_storeStrong(&local_2c8,0);
          local_4b8 = local_4b8 + 1;
        } while (local_4b8 < local_4b0);
        local_4b0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_b0,
                   0x10);
        local_4b8 = (undefined *)0x0;
      } while (local_4b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_2e0 = 0;
    _memset(auStack_328,0,0x40);
    puVar3 = local_270;
    (*(code *)PTR__objc_retain_02578638)();
    local_540 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_140,0x10);
    if (local_540 != (undefined *)0x0) {
      lVar14 = *local_318;
      local_548 = (undefined *)0x0;
      do {
        do {
          if (*local_318 - lVar14 != 0) {
            _objc_enumerationMutation(*local_318 - lVar14,puVar3);
          }
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_2e8 = *(cfstringStruct **)(local_320 + (long)local_548 * 8);
          puVar8 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          _arc4random_uniform(10000);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_stringWithFormat__0269cca8,&cf_WCR_PBG_HTML__lld__u);
          _objc_retainAutoreleasedReturnValue();
          local_330 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          puVar6 = local_330;
          _WCRefineProfileBgHTMLWorkDirectory();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_338 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar8);
          local_339 = 0;
          pcVar5 = local_2e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_isEqualToString__0269ccc8,local_248)
          ;
          if (((ulong)pcVar5 & 1) == 0) {
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_339 = (byte)puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          else {
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_5b8 = puVar8;
            if (puVar8 == (undefined *)0x0) {
              local_5b8 = *(undefined **)PTR____NSArray0___02578280;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_348 = local_5b8;
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _memset(auStack_390,0,0x40);
            puVar6 = local_348;
            (*(code *)PTR__objc_retain_02578638)();
            local_5e0 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,
                       auStack_1c0,0x10);
            if (local_5e0 != (undefined *)0x0) {
              lVar15 = *local_380;
              local_5e8 = (undefined *)0x0;
              do {
                do {
                  if (*local_380 - lVar15 != 0) {
                    _objc_enumerationMutation(*local_380 - lVar15,puVar6);
                  }
                  local_350 = *(undefined8 *)(local_388 + (long)local_5e8 * 8);
                  pcVar5 = local_2e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2e8,PTR_s_stringByAppendingPathComponent__026cab30,local_350);
                  _objc_retainAutoreleasedReturnValue();
                  local_399 = 0;
                  puVar8 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                  local_398 = pcVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  bVar1 = 0;
                  if (((ulong)puVar9 & 1) != 0) {
                    bVar1 = local_399;
                  }
                  (*(code *)PTR__objc_release_02578630)(puVar8);
                  if ((bVar1 & 1) == 0) {
                    puVar8 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSFileManager_026ce158,
                               PTR_s_defaultManager_026ca5f0);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar5 = local_398;
                    puVar9 = local_338;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_338,PTR_s_stringByAppendingPathComponent__026cab30,local_350);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar8,PTR_s_copyItemAtPath_toPath_error__026a1758,pcVar5,puVar9,0);
                    (*(code *)PTR__objc_release_02578630)(puVar9);
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                    local_339 = 1;
                    local_268 = 0;
                  }
                  else {
                    local_268 = 7;
                  }
                  _objc_storeStrong(&local_398,0);
                  local_5e8 = local_5e8 + 1;
                } while (local_5e8 < local_5e0);
                local_5e0 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,
                           auStack_1c0,0x10);
                local_5e8 = (undefined *)0x0;
              } while (local_5e0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _objc_storeStrong(&local_348,0);
          }
          local_3a8 = 0;
          local_3b0 = 0;
          local_3b8 = 0;
          local_3c0 = 0;
          _WCRefineProfileBgPreviewResolveDayNight(local_338,&local_3b8,&local_3c0);
          _objc_storeStrong(&local_3a8,local_3b8);
          _objc_storeStrong(&local_3b0,local_3c0);
          if (((local_339 & 1) == 0) || ((local_3a8 == 0 && (local_3b0 == 0)))) {
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            local_268 = 5;
          }
          else {
            puVar6 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_678 = puVar9;
            if (puVar9 == (undefined *)0x0) {
              local_3d0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              local_678 = local_3d0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_3c8 = local_678;
            if (puVar9 == (undefined *)0x0) {
              (*(code *)PTR__objc_release_02578630)(local_3d0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            puVar6 = local_3c8;
            local_210 = &cf_id;
            local_1e8 = local_330;
            local_208 = &cf_name;
            pcVar5 = local_2e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            pcVar11 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (pcVar11 == (cfstringStruct *)0x0) {
              local_698 = &cf__g_TTQ_u;
            }
            else {
              local_698 = local_2e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              local_3e0 = local_698;
            }
            puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_3e1 = pcVar11 != (cfstringStruct *)0x0;
            local_1e0 = local_698;
            local_200 = &cf_author;
            local_1d8 = &cf_WCR;
            local_1f8 = &cf_createdAt;
            puVar9 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = &cf_pinned;
            puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_1d0 = puVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_1c8 = puVar12;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1e8,&local_210,5);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_insertObject_atIndex__0269eac0,puVar13,0);
            (*(code *)PTR__objc_release_02578630)(puVar13);
            (*(code *)PTR__objc_release_02578630)(puVar12);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            if (local_3e1) {
              (*(code *)PTR__objc_release_02578630)(local_3e0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            puVar6 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            local_2e0 = local_2e0 + 1;
            if ((long)local_2e0 < 0x14) {
              local_268 = 0;
            }
            else {
              local_268 = 4;
            }
            _objc_storeStrong(&local_3c8,0);
          }
          _objc_storeStrong(&local_3b0);
          _objc_storeStrong(&local_3a8,0);
          _objc_storeStrong(&local_338,0);
          _objc_storeStrong(&local_330,0);
          if ((local_268 != 0) && (local_268 != 5)) goto LAB_01d09098;
          local_548 = local_548 + 1;
        } while (local_548 < local_540);
        local_540 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_140,
                   0x10);
        local_548 = (undefined *)0x0;
      } while (local_540 != (undefined *)0x0);
    }
    local_268 = 0;
LAB_01d09098:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_218 = local_2e0;
    local_268 = 1;
    _objc_storeStrong(&local_278,0);
    _objc_storeStrong(&local_270,0);
  }
  _objc_storeStrong(&local_248);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_238,0);
  _objc_storeStrong(&local_230,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_218;
}

