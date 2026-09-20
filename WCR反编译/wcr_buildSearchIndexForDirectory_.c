// wcr_buildSearchIndexForDirectory: @ 015b6c84

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::wcr_buildSearchIndexForDirectory_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  cfstringStruct *local_260;
  cfstringStruct *local_250;
  cfstringStruct *local_240;
  cfstringStruct *local_220;
  undefined *local_1e0;
  undefined *local_1d8;
  cfstringStruct *local_1b0;
  undefined *local_1a8;
  byte local_199;
  long local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  cfstringStruct *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined4 local_12c;
  long local_128;
  SEL local_120;
  ID local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_128 = 0;
  local_120 = param_2;
  local_118 = param_1;
  _objc_storeStrong(&local_128,param_3);
  lVar11 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
  if (lVar11 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_12c = 1;
    local_110 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_138 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_138;
    local_140 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_enumeratorAtPath__026ad0c8,local_128);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar1;
    _memset(auStack_190,0,0x40);
    puVar1 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
    if (local_1d8 != (undefined *)0x0) {
      lVar11 = *local_180;
      local_1e0 = (undefined *)0x0;
      do {
        do {
          if (*local_180 - lVar11 != 0) {
            _objc_enumerationMutation(*local_180 - lVar11,puVar1);
          }
          local_150 = *(cfstringStruct **)(local_188 + (long)local_1e0 * 8);
          lVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_stringByAppendingPathComponent__026cab30,local_150);
          _objc_retainAutoreleasedReturnValue();
          local_199 = 0;
          IVar4 = local_118;
          local_198 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_wcr_relativePathHasHiddenCompone_026b0d00,local_150);
          if ((IVar4 & 1) == 0) {
            puVar2 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_198,&local_199);
            IVar4 = local_118;
            if ((((ulong)puVar2 & 1) == 0) || ((local_199 & 1) != 0)) {
              local_12c = 3;
            }
            else {
              lVar3 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isSupportedAudioExtension__026a9d50)
              ;
              (*(code *)PTR__objc_release_02578630)(lVar3);
              if ((IVar4 & 1) == 0) {
                local_12c = 3;
              }
              else {
                puVar2 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_attributesOfItemAtPath_error__0269db08,local_198,0);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = local_150;
                local_1a8 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_lastPathComponent_026ca780);
                _objc_retainAutoreleasedReturnValue();
                local_220 = pcVar5;
                if (pcVar5 == (cfstringStruct *)0x0) {
                  local_220 = &::cf___;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_1b0 = local_220;
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                puVar2 = local_140;
                local_108 = &cf_rel;
                if (local_150 == (cfstringStruct *)0x0) {
                  local_240 = &::cf___;
                }
                else {
                  local_240 = local_150;
                }
                local_d8 = local_240;
                local_100 = &cf_name;
                local_d0 = local_1b0;
                local_f8 = &cf_nameLower;
                pcVar5 = local_1b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_lowercaseString_0269d9c0);
                _objc_retainAutoreleasedReturnValue();
                local_250 = pcVar5;
                if (pcVar5 == (cfstringStruct *)0x0) {
                  local_250 = &::cf___;
                }
                local_c8 = local_250;
                local_f0 = &cf_relLower;
                pcVar6 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_lowercaseString_0269d9c0);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_260 = pcVar6;
                if (pcVar6 == (cfstringStruct *)0x0) {
                  local_260 = &::cf___;
                }
                local_c0 = local_260;
                local_e8 = &cf_mtime;
                puVar7 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_fileModificationDate_026b0c18)
                ;
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_e0 = &cf_size;
                puVar9 = local_1a8;
                local_b8 = puVar8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_fileSize_026a1640);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar10,PTR_s_numberWithUnsignedLongLong__0269d7f8,puVar9);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_b0 = puVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_108,6);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar9);
                (*(code *)PTR__objc_release_02578630)(puVar10);
                (*(code *)PTR__objc_release_02578630)(puVar8);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_release_02578630)(pcVar6);
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                _objc_storeStrong(&local_1b0);
                _objc_storeStrong(&local_1a8,0);
                local_12c = 0;
              }
            }
          }
          else {
            puVar2 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_198,&local_199);
            if ((((ulong)puVar2 & 1) != 0) && ((local_199 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_skipDescendants_026b0be8);
            }
            local_12c = 3;
          }
          _objc_storeStrong(&local_198,0);
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                   0x10);
        local_1e0 = (undefined *)0x0;
      } while (local_1d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
    local_12c = 1;
    local_110 = puVar1;
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_110;
}

