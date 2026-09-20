// importRepositoryZipURL: @ 01eeb058

/* Function Stack Size: 0x18 bytes */

long_long WCRefineToDoHTMLRepositoryViewController::importRepositoryZipURL_
                    (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct **ppcVar1;
  undefined *puVar2;
  cfstringStruct **ppcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  cfstringStruct *pcVar10;
  ID IVar11;
  long lVar12;
  long lVar13;
  cfstringStruct *local_2b0;
  undefined *local_278;
  undefined *local_270;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1a8;
  undefined8 local_1a0;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  cfstringStruct *local_150;
  undefined *local_148;
  long_long local_140;
  int local_138;
  undefined1 local_131;
  char *local_130;
  char *local_128;
  byte local_119;
  cfstringStruct **local_118;
  cfstringStruct **local_110;
  cfstringStruct **local_108;
  cfstringStruct *local_100;
  SEL local_f8;
  ID local_f0;
  long_long local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined1 auStack_b0 [128];
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppcVar1 = &local_100;
  local_100 = (cfstringStruct *)0x0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(ppcVar1,param_3);
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  _arc4random_uniform(0xffffffff);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_WCRHTMLRepo__u);
  _objc_retainAutoreleasedReturnValue();
  ppcVar3 = ppcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(ppcVar1,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_108 = ppcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(ppcVar1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  ppcVar3 = local_108;
  pcVar4 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_1e8 = &cf_repo_zip;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (ppcVar3,PTR_s_stringByAppendingPathComponent__026cab30,local_1e8);
  _objc_retainAutoreleasedReturnValue();
  local_110 = ppcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_100;
  puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_110);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_copyItemAtURL_toURL_error__026a22c8,pcVar4);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  ppcVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_108,PTR_s_stringByAppendingPathComponent__026cab30,&cf_extract);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_118 = ppcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_119 = 0;
  pcVar6 = "ZipArchive";
  _objc_getClass();
  local_128 = pcVar6;
  if (pcVar6 != (char *)0x0) {
    _objc_alloc_init();
    local_130 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipOpenFile__026ad0b0);
    if ((((ulong)pcVar6 & 1) != 0) &&
       (pcVar6 = local_130,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipFileTo_overWrite__026ad0b8
                 ), ((ulong)pcVar6 & 1) != 0)) {
      pcVar6 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_UnzipOpenFile__026ad0b0,local_110);
      local_131 = SUB81(pcVar6,0);
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar6 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_UnzipFileTo_overWrite__026ad0b8,local_118,1);
        local_119 = (byte)pcVar6;
        pcVar6 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipCloseFile_026ad0c0);
        if (((ulong)pcVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_UnzipCloseFile_026ad0c0);
        }
      }
    }
    _objc_storeStrong(&local_130,0);
  }
  if ((local_119 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_e8 = 0;
    local_138 = 1;
  }
  else {
    local_140 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_118);
    _objc_retainAutoreleasedReturnValue();
    local_30 = *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260;
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_enumeratorAtURL_includingPropert_026b0eb8,puVar5,puVar7,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_190,0,0x40);
    puVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_b0,0x10);
    if (local_270 != (undefined *)0x0) {
      lVar12 = *local_180;
      local_278 = (undefined *)0x0;
      do {
        do {
          if (*local_180 - lVar12 != 0) {
            _objc_enumerationMutation(*local_180 - lVar12,puVar2);
          }
          local_150 = *(cfstringStruct **)(local_188 + (long)local_278 * 8);
          local_198 = 0;
          local_1a0 = 0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_getResourceValue_forKey_error__026b2d98,&local_1a0,
                     *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260,0);
          _objc_storeStrong(&local_198,local_1a0);
          uVar9 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_boolValue_026ca540);
          if ((uVar9 & 1) == 0) {
            pcVar4 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            pcVar10 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_2b0 = pcVar10;
            if (pcVar10 == (cfstringStruct *)0x0) {
              local_2b0 = &::cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1a8 = local_2b0;
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            local_e0 = &cf_html;
            local_d8 = &cf_htm;
            local_d0 = &cf_txt;
            local_c8 = &cf_json;
            local_c0 = &cf_md;
            local_b8 = &cf_markdown;
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_e0,6);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (((ulong)puVar7 & 1) == 0) {
              lVar13 = 3;
              local_138 = 3;
            }
            else {
              IVar11 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_importRepositoryTextURL__026c7e88,local_150);
              if ((IVar11 & 1) != 0) {
                local_140 = local_140 + 1;
              }
              lVar13 = local_140 - 0x50;
              if ((long)local_140 < 0x50) {
                local_138 = 0;
              }
              else {
                lVar13 = 2;
                local_138 = 2;
              }
            }
            _objc_storeStrong(lVar13,&local_1a8,0);
          }
          else {
            local_138 = 3;
          }
          _objc_storeStrong(&local_198,0);
          if ((local_138 != 0) && (local_138 != 3)) goto LAB_01eeb9a4;
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_b0,
                   0x10);
        local_278 = (undefined *)0x0;
      } while (local_270 != (undefined *)0x0);
    }
    local_138 = 0;
LAB_01eeb9a4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_e8 = local_140;
    local_138 = 1;
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_e8;
}

