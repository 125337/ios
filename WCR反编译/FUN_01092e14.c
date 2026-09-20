// FUN_01092e14 @ 01092e14

void FUN_01092e14(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  segment_command *psVar13;
  segment_command *psVar14;
  long lVar15;
  int local_2dc;
  undefined *local_260;
  undefined *local_258;
  undefined *local_210;
  long local_208;
  undefined *local_200;
  segment_command *local_1f8;
  long local_1f0;
  int local_1e4;
  long local_1e0;
  segment_command *local_1d8;
  int local_1cc;
  long local_1c8;
  undefined *local_1c0;
  cfstringStruct *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  long local_1a0;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  long local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  code *local_100;
  code *local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar4 = local_b0;
  FUN_01092c58();
  if (((uVar4 & 1) == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    pcVar5 = "sqlite3_open";
    FUN_0109a528();
    pcVar6 = "sqlite3_prepare_v2";
    local_c8 = (code *)pcVar5;
    FUN_0109a528();
    pcVar5 = "sqlite3_step";
    local_d0 = (code *)pcVar6;
    FUN_0109a528();
    pcVar6 = "sqlite3_finalize";
    local_d8 = (code *)pcVar5;
    FUN_0109a528();
    pcVar5 = "sqlite3_close";
    local_e0 = (code *)pcVar6;
    FUN_0109a528();
    pcVar6 = "sqlite3_column_text";
    local_e8 = (code *)pcVar5;
    FUN_0109a528();
    pcVar5 = "sqlite3_column_count";
    local_f0 = (code *)pcVar6;
    FUN_0109a528();
    pcVar6 = "sqlite3_column_name";
    local_f8 = (code *)pcVar5;
    FUN_0109a528();
    uVar4 = local_b0;
    pcVar2 = local_c8;
    local_100 = (code *)pcVar6;
    if (((((local_c8 == (code *)0x0) || (local_d0 == (code *)0x0)) || (local_d8 == (code *)0x0)) ||
        ((local_e0 == (code *)0x0 || (local_e8 == (code *)0x0)))) || (local_f0 == (code *)0x0)) {
      local_bc = 1;
    }
    else {
      local_108 = 0;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_fileSystemRepresentation_026a95c0);
      iVar3 = (int)uVar4;
      (*pcVar2)();
      if ((iVar3 == 0) && (local_108 != 0)) {
        local_110 = 0;
        lVar15 = local_108;
        (*local_d0)(local_108,
                    "SELECT name FROM sqlite_master WHERE type=\'table\' AND name NOT LIKE \'sqlite_%\'"
                    ,0xffffffff,&local_110,0);
        if ((int)lVar15 == 0) {
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar7;
          while (lVar15 = local_110, (*local_d8)(), (int)lVar15 == 100) {
            lVar15 = local_110;
            (*local_f0)(local_110,0);
            local_120 = lVar15;
            if (lVar15 != 0) {
              puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,
                         lVar15);
              _objc_retainAutoreleasedReturnValue();
              local_128 = puVar7;
              FUN_0109a5d0();
              if (((ulong)puVar7 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_addObject__0269d180,local_128)
                ;
              }
              _objc_storeStrong(&local_128,0);
            }
          }
          (*local_e0)(local_110);
          _memset(auStack_170,0,0x40);
          puVar7 = local_118;
          (*(code *)PTR__objc_retain_02578638)();
          local_258 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,
                     0x10);
          if (local_258 != (undefined *)0x0) {
            lVar15 = *local_160;
            local_260 = (undefined *)0x0;
            do {
              do {
                if (*local_160 - lVar15 != 0) {
                  _objc_enumerationMutation(*local_160 - lVar15,puVar7);
                }
                local_130 = *(undefined8 *)(local_168 + (long)local_260 * 8);
                puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_PRAGMAtable_info____);
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = local_d0;
                lVar9 = local_108;
                local_180 = 0;
                local_178 = puVar8;
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_UTF8String_026a2e68);
                (*pcVar2)(lVar9,puVar8,0xffffffff,&local_180,0);
                if ((int)lVar9 == 0) {
                  local_188 = 0;
                  local_190 = 0;
                  local_198 = 0;
                  while (lVar9 = local_180, (*local_d8)(), (int)lVar9 == 100) {
                    lVar9 = local_180;
                    (*local_f0)(local_180,1);
                    local_1a0 = lVar9;
                    if (lVar9 != 0) {
                      puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,
                                 PTR_s_stringWithUTF8String__0269fd30,lVar9);
                      _objc_retainAutoreleasedReturnValue();
                      local_1a8 = puVar8;
                      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_lowercaseString_0269d9c0);
                      _objc_retainAutoreleasedReturnValue();
                      local_1b0 = puVar8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar8,PTR_s_isEqualToString__0269ccc8,&cf_md5);
                      if ((((ulong)puVar8 & 1) == 0) &&
                         (puVar8 = local_1b0,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_1b0,PTR_s_hasSuffix__0269d018,&cf_md5),
                         ((ulong)puVar8 & 1) == 0)) {
                        puVar8 = local_1b0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_url);
                        if ((((ulong)puVar8 & 1) == 0) &&
                           (puVar8 = local_1b0,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_1b0,PTR_s_hasSuffix__0269d018,&cf_url),
                           ((ulong)puVar8 & 1) == 0)) {
                          if ((local_198 == 0) &&
                             ((((((puVar8 = local_1b0,
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_sort),
                                  ((ulong)puVar8 & 1) != 0 ||
                                  (puVar8 = local_1b0,
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_order),
                                  ((ulong)puVar8 & 1) != 0)) ||
                                 (puVar8 = local_1b0,
                                 (*(code *)PTR__objc_msgSend_02578628)
                                           (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_idx),
                                 ((ulong)puVar8 & 1) != 0)) ||
                                (((puVar8 = local_1b0,
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_index),
                                  ((ulong)puVar8 & 1) != 0 ||
                                  (puVar8 = local_1b0,
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_position)
                                  , ((ulong)puVar8 & 1) != 0)) ||
                                 ((puVar8 = local_1b0,
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_seq),
                                  ((ulong)puVar8 & 1) != 0 ||
                                  ((puVar8 = local_1b0,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_1b0,PTR_s_isEqualToString__0269ccc8,&cf_rank),
                                   ((ulong)puVar8 & 1) != 0 ||
                                   (puVar8 = local_1b0,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_1b0,PTR_s_hasSuffix__0269d018,&cf_order),
                                   ((ulong)puVar8 & 1) != 0)))))))) ||
                               (puVar8 = local_1b0,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_1b0,PTR_s_hasSuffix__0269d018,&cf_sort),
                               ((ulong)puVar8 & 1) != 0)) ||
                              ((puVar8 = local_1b0,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_1b0,PTR_s_hasSuffix__0269d018,&cf_idx),
                               ((ulong)puVar8 & 1) != 0 ||
                               (puVar8 = local_1b0,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_1b0,PTR_s_hasSuffix__0269d018,&cf_index),
                               ((ulong)puVar8 & 1) != 0)))))) {
                            _objc_storeStrong(&local_198,local_1a8);
                          }
                        }
                        else {
                          _objc_storeStrong(&local_190,local_1a8);
                        }
                      }
                      else {
                        _objc_storeStrong(&local_188,local_1a8);
                      }
                      _objc_storeStrong(&local_1b0);
                      _objc_storeStrong(&local_1a8,0);
                    }
                  }
                  (*local_e0)(local_180);
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1b8 = &cf_ORDERBYrowid;
                  uVar4 = local_198;
                  FUN_0109a5d0();
                  if ((uVar4 & 1) != 0) {
                    pcVar10 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf_ORDERBY____ASC_rowidASC);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar1 = local_1b8;
                    local_1b8 = pcVar10;
                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                  }
                  local_1c0 = (undefined *)0x0;
                  uVar4 = local_188;
                  FUN_0109a5d0();
                  if (((uVar4 & 1) == 0) || (uVar4 = local_190, FUN_0109a5d0(), (uVar4 & 1) == 0)) {
                    uVar4 = local_188;
                    FUN_0109a5d0();
                    if ((uVar4 & 1) == 0) {
                      puVar11 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,
                                 PTR_s_stringWithFormat__0269cca8,&cf_SELECT_FROM____);
                      _objc_retainAutoreleasedReturnValue();
                      puVar8 = local_1c0;
                      local_1c0 = puVar11;
                      (*(code *)PTR__objc_release_02578630)(puVar8);
                    }
                    else {
                      puVar11 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,
                                 PTR_s_stringWithFormat__0269cca8,&cf_SELECT__FROM____);
                      _objc_retainAutoreleasedReturnValue();
                      puVar8 = local_1c0;
                      local_1c0 = puVar11;
                      (*(code *)PTR__objc_release_02578630)(puVar8);
                    }
                  }
                  else {
                    puVar11 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf_SELECT_____FROM____);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = local_1c0;
                    local_1c0 = puVar11;
                    (*(code *)PTR__objc_release_02578630)(puVar8);
                  }
                  pcVar2 = local_d0;
                  lVar9 = local_108;
                  puVar8 = local_1c0;
                  local_1c8 = 0;
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_UTF8String_026a2e68);
                  (*pcVar2)(lVar9,puVar8,0xffffffff,&local_1c8,0);
                  if ((int)lVar9 == 0) {
                    if (local_f8 == (code *)0x0) {
                      local_2dc = 2;
                    }
                    else {
                      lVar9 = local_1c8;
                      (*local_f8)();
                      local_2dc = (int)lVar9;
                    }
                    local_1cc = local_2dc;
                    while (lVar9 = local_1c8, (*local_d8)(), (int)lVar9 == 100) {
                      local_1d8 = (segment_command *)0x0;
                      local_1e0 = 0;
                      for (local_1e4 = 0; local_1e4 < local_1cc; local_1e4 = local_1e4 + 1) {
                        lVar9 = local_1c8;
                        (*local_f0)(local_1c8,local_1e4);
                        local_1f0 = lVar9;
                        if (lVar9 != 0) {
                          psVar14 = (segment_command *)PTR__OBJC_CLASS___NSString_026cdfe8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSString_026cdfe8,
                                     PTR_s_stringWithUTF8String__0269fd30,lVar9);
                          _objc_retainAutoreleasedReturnValue();
                          local_200 = (undefined *)0x0;
                          local_1f8 = psVar14;
                          if ((local_100 != (code *)0x0) &&
                             (lVar9 = local_1c8, (*local_100)(local_1c8,local_1e4),
                             local_208 = lVar9, lVar9 != 0)) {
                            puVar11 = PTR__OBJC_CLASS___NSString_026cdfe8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSString_026cdfe8,
                                       PTR_s_stringWithUTF8String__0269fd30,lVar9);
                            _objc_retainAutoreleasedReturnValue();
                            puVar12 = puVar11;
                            (*(code *)PTR__objc_msgSend_02578628)();
                            _objc_retainAutoreleasedReturnValue();
                            puVar8 = local_200;
                            local_200 = puVar12;
                            (*(code *)PTR__objc_release_02578630)(puVar8);
                            (*(code *)PTR__objc_release_02578630)(puVar11);
                          }
                          psVar14 = local_1f8;
                          FUN_0107bd28();
                          if ((((ulong)psVar14 & 1) == 0) || (local_1d8 != (segment_command *)0x0))
                          {
                            if ((local_200 == (undefined *)0x0) ||
                               ((puVar8 = local_200,
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_200,PTR_s_containsString__0269d0b0,&cf_md5),
                                ((ulong)puVar8 & 1) == 0 ||
                                (psVar14 = local_1f8, FUN_0107bd28(), ((ulong)psVar14 & 1) == 0))))
                            {
                              psVar14 = local_1f8;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_1f8,PTR_s_hasPrefix__0269d320,&cf_http___);
                              if (((((ulong)psVar14 & 1) == 0) &&
                                  (psVar14 = local_1f8,
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_1f8,PTR_s_hasPrefix__0269d320,&cf_https___),
                                  ((ulong)psVar14 & 1) == 0)) || (local_1e0 != 0)) {
                                if ((local_200 != (undefined *)0x0) &&
                                   (puVar8 = local_200,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_200,PTR_s_containsString__0269d0b0,&cf_url),
                                   ((ulong)puVar8 & 1) != 0)) {
                                  psVar14 = local_1f8;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_1f8,PTR_s_length_0269cca0);
                                  if ((segment_command *)((long)&MACH_HEADER.magic + 3) < psVar14 &&
                                      &psVar14[-1].flags != (dword *)0x0) {
                                    _objc_storeStrong(&psVar14[-1].flags,&local_1e0,local_1f8);
                                  }
                                }
                              }
                              else {
                                _objc_storeStrong(&local_1e0,local_1f8);
                              }
                            }
                            else {
                              psVar13 = local_1f8;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_1f8,PTR_s_lowercaseString_0269d9c0);
                              _objc_retainAutoreleasedReturnValue();
                              psVar14 = local_1d8;
                              local_1d8 = psVar13;
                              (*(code *)PTR__objc_release_02578630)(psVar14);
                            }
                          }
                          else {
                            psVar13 = local_1f8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_1f8,PTR_s_lowercaseString_0269d9c0);
                            _objc_retainAutoreleasedReturnValue();
                            psVar14 = local_1d8;
                            local_1d8 = psVar13;
                            (*(code *)PTR__objc_release_02578630)(psVar14);
                          }
                          _objc_storeStrong(&local_200);
                          _objc_storeStrong(&local_1f8,0);
                        }
                      }
                      psVar14 = local_1d8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
                      if (psVar14 == &segment_command_00000020) {
                        puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,
                                   PTR_s_dictionary_0269d240);
                        _objc_retainAutoreleasedReturnValue();
                        local_210 = puVar8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar8,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d8,
                                   &cf_md5);
                        lVar9 = local_1e0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
                        if (lVar9 != 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_210,PTR_s_setObject_forKeyedSubscript__0269d248,local_1e0
                                     ,&cf_url);
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_b8,PTR_s_addObject__0269d180,local_210);
                        _objc_storeStrong(&local_210,0);
                      }
                      _objc_storeStrong(&local_1e0);
                      _objc_storeStrong(&local_1d8,0);
                    }
                    (*local_e0)(local_1c8);
                    local_bc = 0;
                  }
                  else {
                    local_bc = 5;
                  }
                  _objc_storeStrong(&local_1c0);
                  _objc_storeStrong(&local_1b8,0);
                  _objc_storeStrong(&local_198,0);
                  _objc_storeStrong(&local_190,0);
                  _objc_storeStrong(&local_188,0);
                }
                else {
                  local_bc = 5;
                }
                _objc_storeStrong(&local_178,0);
                local_260 = local_260 + 1;
              } while (local_260 < local_258);
              local_258 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,
                         auStack_a8,0x10);
              local_260 = (undefined *)0x0;
            } while (local_258 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*local_e8)(local_108);
          _objc_storeStrong(&local_118,0);
          local_bc = 0;
        }
        else {
          (*local_e8)(local_108);
          local_bc = 1;
        }
      }
      else {
        if ((local_108 != 0) && (local_e8 != (code *)0x0)) {
          (*local_e8)(local_108);
        }
        local_bc = 1;
      }
    }
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

