// discoverDouTuBackupPaths @ 010949a4

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::discoverDouTuBackupPaths(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *local_4a8;
  undefined *local_4a0;
  undefined *local_478;
  uint local_44c;
  undefined *local_430;
  undefined *local_428;
  undefined *local_3f0;
  undefined *local_3e8;
  cfstringStruct *local_3a8;
  cfstringStruct *local_380;
  undefined *local_370;
  ulong local_368;
  undefined4 local_360;
  byte local_359;
  ulong local_358;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  ulong local_310;
  undefined *local_308;
  ulong local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  ulong local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  ulong local_270;
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  SEL local_240;
  ID local_238;
  undefined1 auStack_230 [128];
  undefined1 auStack_1b0 [128];
  undefined1 auStack_130 [128];
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_240 = param_2;
  local_238 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_248 = pcVar1;
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  local_380 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_380 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_250 = local_380;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_250;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_250,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Documents);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = (cfstringStruct *)0x9;
  local_40 = pcVar1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_3a8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_3a8 = &::cf___;
  }
  local_38 = local_3a8;
  pcVar4 = local_250;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_250,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Library_Preferences);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  local_258 = puVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_emoticon_sqlite;
  local_a8 = &cf_emotion_sqlite;
  local_a0 = &cf_emotions_sqlite;
  local_98 = &cf_doutu_sqlite;
  local_90 = &cf_DouTu_sqlite;
  local_88 = &cf_fav_sqlite;
  local_80 = &cf_DTEmotion_sqlite;
  local_78 = &cf_doutu_db;
  local_70 = &cf_emoticon_db;
  local_68 = &cf_doutu_sqlite3;
  local_60 = &cf_emotion_db;
  local_58 = &cf_eVh__;
  local_50 = &cf_doutu_txt;
  local_48 = &cf_emoticon_txt;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_260 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0,0xe
            );
  _objc_retainAutoreleasedReturnValue();
  local_268 = puVar6;
  _memset(auStack_2b0,0,0x40);
  puVar5 = local_258;
  (*(code *)PTR__objc_retain_02578638)();
  local_3e8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_130,0x10);
  if (local_3e8 != (undefined *)0x0) {
    lVar11 = *local_2a0;
    local_3f0 = (undefined *)0x0;
    do {
      do {
        if (*local_2a0 - lVar11 != 0) {
          _objc_enumerationMutation(*local_2a0 - lVar11,puVar5);
        }
        uVar12 = *(ulong *)(local_2a8 + (long)local_3f0 * 8);
        local_270 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_length_0269cca0);
        if ((uVar12 != 0) &&
           (puVar6 = local_260,
           (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_containsObject__0269cbb8,local_270)
           , ((ulong)puVar6 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_addObject__0269d180,local_270);
          _memset(auStack_2f8,0,0x40);
          puVar6 = local_268;
          (*(code *)PTR__objc_retain_02578638)();
          local_428 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_1b0,
                     0x10);
          if (local_428 != (undefined *)0x0) {
            lVar13 = *local_2e8;
            local_430 = (undefined *)0x0;
            do {
              do {
                if (*local_2e8 - lVar13 != 0) {
                  _objc_enumerationMutation(*local_2e8 - lVar13,puVar6);
                }
                local_2b8 = *(ulong *)(local_2f0 + (long)local_430 * 8);
                uVar12 = local_270;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_270,PTR_s_stringByAppendingPathComponent__026cab30,local_2b8);
                _objc_retainAutoreleasedReturnValue();
                local_300 = uVar12;
                FUN_01092c58();
                if (((uVar12 & 1) == 0) ||
                   (pcVar1 = local_248,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_248,PTR_s_containsObject__0269cbb8,local_300),
                   ((ulong)pcVar1 & 1) != 0)) {
                  puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_44c = 0;
                  if (((ulong)puVar8 & 1) != 0) {
                    uVar12 = local_2b8;
                    FUN_01095704();
                    local_44c = 0;
                    if ((uVar12 & 1) != 0) {
                      pcVar1 = local_248;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_containsObject__0269cbb8,local_300);
                      local_44c = (uint)pcVar1 ^ 1;
                    }
                  }
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                  if ((local_44c & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_248,PTR_s_addObject__0269d180,local_300);
                  }
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_248,PTR_s_addObject__0269d180,local_300);
                }
                _objc_storeStrong(&local_300,0);
                local_430 = local_430 + 1;
              } while (local_430 < local_428);
              local_428 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,
                         auStack_1b0,0x10);
              local_430 = (undefined *)0x0;
            } while (local_428 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_478 = puVar7;
          if (puVar7 == (undefined *)0x0) {
            local_478 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_308 = local_478;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _memset(auStack_350,0,0x40);
          puVar6 = local_308;
          (*(code *)PTR__objc_retain_02578638)();
          local_4a0 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_230,
                     0x10);
          if (local_4a0 != (undefined *)0x0) {
            lVar13 = *local_340;
            local_4a8 = (undefined *)0x0;
            do {
              do {
                if (*local_340 - lVar13 != 0) {
                  _objc_enumerationMutation(*local_340 - lVar13,puVar6);
                }
                uVar12 = *(ulong *)(local_348 + (long)local_4a8 * 8);
                local_310 = uVar12;
                FUN_0107d2f4();
                if ((uVar12 & 1) == 0) {
                  uVar12 = local_270;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_270,PTR_s_stringByAppendingPathComponent__026cab30,local_310);
                  _objc_retainAutoreleasedReturnValue();
                  local_359 = 0;
                  puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                  local_358 = uVar12;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                  if (((ulong)puVar8 & 1) == 0) {
                    local_360 = 7;
                  }
                  else if ((local_359 & 1) == 0) {
                    uVar12 = local_310;
                    (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_pathExtension_0269e090);
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar12;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_368 = uVar9;
                    (*(code *)PTR__objc_release_02578630)(uVar12);
                    uVar12 = local_368;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_368,PTR_s_isEqualToString__0269ccc8,&cf_zip);
                    if (((uVar12 & 1) == 0) ||
                       (uVar12 = local_310, FUN_01095898(), (uVar12 & 1) == 0)) {
                      uVar12 = local_310;
                      FUN_01095704();
                      if (((uVar12 & 1) == 0) ||
                         (pcVar1 = local_248,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_248,PTR_s_containsObject__0269cbb8,local_358),
                         ((ulong)pcVar1 & 1) != 0)) {
                        uVar12 = local_358;
                        FUN_01092c58();
                        if ((((uVar12 & 1) != 0) &&
                            (uVar12 = local_310, FUN_01095898(), (uVar12 & 1) != 0)) &&
                           (pcVar1 = local_248,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_248,PTR_s_containsObject__0269cbb8,local_358),
                           ((ulong)pcVar1 & 1) == 0)) {
                          puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSFileManager_026ce158,
                                     PTR_s_defaultManager_026ca5f0);
                          _objc_retainAutoreleasedReturnValue();
                          puVar8 = puVar7;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          _objc_retainAutoreleasedReturnValue();
                          puVar10 = puVar8;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          _objc_retainAutoreleasedReturnValue();
                          local_370 = puVar10;
                          (*(code *)PTR__objc_release_02578630)(puVar8);
                          (*(code *)PTR__objc_release_02578630)(puVar7);
                          puVar7 = local_370;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_370,PTR_s_unsignedLongLongValue_0269d6b8);
                          if (puVar7 < (undefined *)0x2000001) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_248,PTR_s_addObject__0269d180,local_358);
                          }
                          _objc_storeStrong(&local_370,0);
                        }
                        local_360 = 0;
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_248,PTR_s_addObject__0269d180,local_358);
                        local_360 = 7;
                      }
                    }
                    else {
                      pcVar1 = local_248;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_containsObject__0269cbb8,local_358);
                      if (((ulong)pcVar1 & 1) == 0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_248,PTR_s_addObject__0269d180,local_358);
                      }
                      local_360 = 7;
                    }
                    _objc_storeStrong(&local_368,0);
                  }
                  else {
                    uVar12 = local_310;
                    FUN_01095898();
                    if ((uVar12 & 1) != 0) {
                      FUN_01092608(local_358,local_248,0);
                      FUN_01090784(local_358,local_248,0);
                    }
                    local_360 = 7;
                  }
                  _objc_storeStrong(&local_358,0);
                }
                local_4a8 = local_4a8 + 1;
              } while (local_4a8 < local_4a0);
              local_4a0 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,
                         auStack_230,0x10);
              local_4a8 = (undefined *)0x0;
            } while (local_4a0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _objc_storeStrong(&local_308,0);
        }
        local_3f0 = local_3f0 + 1;
      } while (local_3f0 < local_3e8);
      local_3e8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_130,0x10
                );
      local_3f0 = (undefined *)0x0;
    } while (local_3e8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  pcVar1 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_360 = 1;
  _objc_storeStrong(&local_268);
  _objc_storeStrong(&local_260,0);
  _objc_storeStrong(&local_258,0);
  _objc_storeStrong(&local_250,0);
  _objc_storeStrong(&local_248,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

