// readBrowseIndexIfNeeded @ 010b9ba0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsMonitor::readBrowseIndexIfNeeded(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint local_454;
  undefined1 *local_438;
  undefined1 *local_430;
  uint local_35c;
  undefined1 *local_340;
  undefined1 *local_338;
  uint local_2e4;
  ulong local_2d0;
  ulong local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  ulong local_278;
  byte local_269;
  undefined1 *local_268;
  byte local_259;
  undefined1 *local_258;
  byte local_249;
  undefined1 *local_248;
  byte local_239;
  undefined1 *local_238;
  byte local_229;
  undefined1 *local_228;
  byte local_219;
  undefined1 *local_218;
  byte local_209;
  undefined1 *local_208;
  byte local_1f9;
  undefined1 *local_1f8;
  byte local_1e9;
  undefined1 *local_1e8;
  byte local_1d9;
  undefined1 *local_1d8;
  byte local_1c9;
  undefined1 *local_1c8;
  byte local_1b9;
  undefined1 *local_1b8;
  byte local_1a9;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  int local_14c;
  undefined1 *local_148;
  undefined1 *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_browseIndexRead_026ae6a0);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setBrowseIndexRead__026ae6a8,1);
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_browseIndexPath_026ae6b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_records);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_140;
    local_148 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_version);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar5 = local_148;
    local_2e4 = 1;
    if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_2e4 = (uint)puVar5 ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if ((local_2e4 & 1) == 0) {
      _memset(auStack_198,0,0x40);
      puVar5 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_338 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10)
      ;
      if (local_338 != (undefined1 *)0x0) {
        lVar8 = *local_188;
        local_340 = (undefined1 *)0x0;
        do {
          do {
            if (*local_188 - lVar8 != 0) {
              _objc_enumerationMutation(*local_188 - lVar8,puVar5);
            }
            local_158 = *(ulong *)(local_190 + (long)local_340 * 8);
            puVar6 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_148,PTR_s_objectForKeyedSubscript__0269d098,local_158);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = local_158;
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1a0 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
            puVar6 = local_1a0;
            local_1a9 = 0;
            local_1b9 = 0;
            local_1c9 = 0;
            local_1d9 = 0;
            local_1e9 = 0;
            local_1f9 = 0;
            local_209 = 0;
            local_219 = 0;
            local_229 = 0;
            local_239 = 0;
            local_249 = 0;
            local_259 = 0;
            local_269 = 0;
            local_35c = 1;
            if ((uVar10 & 1) != 0) {
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
              local_35c = 1;
              if (((ulong)puVar6 & 1) != 0) {
                puVar6 = local_1a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_username);
                _objc_retainAutoreleasedReturnValue();
                local_1a9 = 1;
                puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1a8 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                local_35c = 1;
                if (((ulong)puVar6 & 1) != 0) {
                  puVar6 = local_1a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_tid);
                  _objc_retainAutoreleasedReturnValue();
                  local_1b9 = 1;
                  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_1b8 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar4)
                  ;
                  local_35c = 1;
                  if (((ulong)puVar6 & 1) != 0) {
                    puVar6 = local_1a0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_createtime);
                    _objc_retainAutoreleasedReturnValue();
                    local_1c9 = 1;
                    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    local_1c8 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                    local_35c = 1;
                    if (((ulong)puVar6 & 1) != 0) {
                      puVar6 = local_1a0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentDesc);
                      _objc_retainAutoreleasedReturnValue();
                      local_1d9 = 1;
                      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      local_1d8 = puVar6;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                      local_35c = 1;
                      if (((ulong)puVar6 & 1) != 0) {
                        puVar6 = local_1a0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickname);
                        _objc_retainAutoreleasedReturnValue();
                        local_1e9 = 1;
                        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                        local_1e8 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                        local_35c = 1;
                        if (((ulong)puVar6 & 1) != 0) {
                          puVar6 = local_1a0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,
                                     &cf_contentObj);
                          _objc_retainAutoreleasedReturnValue();
                          local_1f9 = 1;
                          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                          local_1f8 = puVar6;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                          local_35c = 1;
                          if (((ulong)puVar6 & 1) != 0) {
                            puVar6 = local_1a0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,
                                       &cf_contentObj);
                            _objc_retainAutoreleasedReturnValue();
                            local_209 = 1;
                            local_208 = puVar6;
                            (*(code *)PTR__objc_msgSend_02578628)();
                            _objc_retainAutoreleasedReturnValue();
                            local_219 = 1;
                            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                            local_218 = puVar6;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                            local_35c = 1;
                            if (((ulong)puVar6 & 1) != 0) {
                              puVar6 = local_1a0;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,
                                         &cf_contentObj);
                              _objc_retainAutoreleasedReturnValue();
                              local_229 = 1;
                              local_228 = puVar6;
                              (*(code *)PTR__objc_msgSend_02578628)();
                              _objc_retainAutoreleasedReturnValue();
                              local_239 = 1;
                              puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                              local_238 = puVar6;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                              uVar10 = local_158;
                              local_35c = 1;
                              if (((ulong)puVar6 & 1) != 0) {
                                puVar6 = local_1a0;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,
                                           &cf_username);
                                _objc_retainAutoreleasedReturnValue();
                                local_249 = 1;
                                puVar7 = local_1a0;
                                local_248 = puVar6;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_tid
                                          );
                                _objc_retainAutoreleasedReturnValue();
                                local_259 = 1;
                                local_258 = puVar7;
                                FUN_010b8aa8();
                                _objc_retainAutoreleasedReturnValue();
                                local_269 = 1;
                                local_268 = puVar6;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (uVar10,PTR_s_isEqual__0269e9a8);
                                local_35c = (uint)uVar10 ^ 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ((local_269 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_268);
            }
            if ((local_259 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_258);
            }
            if ((local_249 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_248);
            }
            if ((local_239 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_238);
            }
            if ((local_229 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_228);
            }
            if ((local_219 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_218);
            }
            if ((local_209 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_208);
            }
            if ((local_1f9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1f8);
            }
            if ((local_1e9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1e8);
            }
            if ((local_1d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d8);
            }
            if ((local_1c9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1c8);
            }
            if ((local_1b9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1b8);
            }
            if ((local_1a9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1a8);
            }
            if ((local_35c & 1) == 0) {
              _memset(auStack_2b8,0,0x40);
              puVar6 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentObj);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)(puVar6);
              local_430 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,
                         auStack_128,0x10);
              if (local_430 != (undefined1 *)0x0) {
                lVar9 = *local_2a8;
                local_438 = (undefined1 *)0x0;
                do {
                  do {
                    if (*local_2a8 - lVar9 != 0) {
                      _objc_enumerationMutation(*local_2a8 - lVar9,puVar7);
                    }
                    uVar10 = *(ulong *)(local_2b0 + (long)local_438 * 8);
                    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                    local_278 = uVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
                    bVar2 = false;
                    bVar1 = false;
                    local_454 = 1;
                    if ((uVar10 & 1) != 0) {
                      local_2c0 = local_278;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
                      _objc_retainAutoreleasedReturnValue();
                      bVar2 = true;
                      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
                      uVar10 = local_2c0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2c0,PTR_s_isKindOfClass__0269cd68,puVar4);
                      local_454 = 1;
                      if ((uVar10 & 1) != 0) {
                        local_2d0 = local_278;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_localPaths)
                        ;
                        _objc_retainAutoreleasedReturnValue();
                        bVar1 = true;
                        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                        uVar10 = local_2d0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2d0,PTR_s_isKindOfClass__0269cd68,puVar4);
                        local_454 = (uint)uVar10 ^ 1;
                      }
                    }
                    if (bVar1) {
                      (*(code *)PTR__objc_release_02578630)(local_2d0);
                    }
                    if (bVar2) {
                      (*(code *)PTR__objc_release_02578630)(local_2c0);
                    }
                    if ((local_454 & 1) != 0) {
                      local_14c = 1;
                      goto LAB_010bab40;
                    }
                    local_438 = local_438 + 1;
                  } while (local_438 < local_430);
                  local_430 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,
                             auStack_128,0x10);
                  local_438 = (undefined1 *)0x0;
                } while (local_430 != (undefined1 *)0x0);
              }
              local_14c = 0;
LAB_010bab40:
              (*(code *)PTR__objc_release_02578630)(puVar7);
              if (local_14c == 0) {
                local_14c = 0;
              }
            }
            else {
              local_14c = 1;
            }
            _objc_storeStrong(&local_1a0,0);
            if (local_14c != 0) goto LAB_010babf8;
            local_340 = local_340 + 1;
          } while (local_340 < local_338);
          local_338 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                     0x10);
          local_340 = (undefined1 *)0x0;
        } while (local_338 != (undefined1 *)0x0);
      }
      local_14c = 0;
LAB_010babf8:
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_14c == 0) {
        puVar5 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_mutableCopy_0269d8a0);
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setBrowseRecords__026ae6b8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_14c = 0;
      }
    }
    else {
      local_14c = 1;
    }
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_140,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

