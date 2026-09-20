// compactedDouyinNoteImageURLs:lives:outLives: @ 010353f0

/* Function Stack Size: 0x28 bytes */

ID WCRefineLinkParser::compactedDouyinNoteImageURLs_lives_outLives_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong local_430;
  ulong local_428;
  cfstringStruct *local_400;
  undefined *local_3d0;
  undefined *local_3c8;
  cfstringStruct *local_360;
  cfstringStruct *local_350;
  uint local_304;
  ulong local_2f8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  long local_270;
  long local_268;
  undefined *local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined8 local_218;
  undefined1 *local_210;
  byte local_201;
  cfstringStruct *local_200;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  byte local_1d9;
  ulong local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined *local_180;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined *local_168;
  int local_15c;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  SEL local_140;
  cfstringStruct *local_138;
  undefined1 *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_4);
  local_158 = 0;
  _objc_storeStrong(&local_158,param_5);
  uVar3 = local_148;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
     uVar3 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_removeAllObjects_0269d508);
    puVar4 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_15c = 1;
    local_130 = puVar4;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_168 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_170 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_178 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_188 = 0;
    local_190 = 0;
    local_198 = 0;
    local_1a0 = 0;
    local_180 = puVar2;
    for (local_1a8 = 0; uVar3 = local_1a8, uVar7 = local_148,
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0), uVar3 < uVar7;
        local_1a8 = local_1a8 + 1) {
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectAtIndexedSubscript__0269cc78,local_1a8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_1b0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        local_2f8 = 0;
      }
      else {
        local_2f8 = local_1b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = local_2f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_length_0269cca0);
      if (local_2f8 == 0) {
        local_15c = 4;
      }
      else {
        pcVar6 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_preferCleanMediaURL__026add40,local_1b8);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
        if ((pcVar6 == (cfstringStruct *)0x0) ||
           (pcVar6 = local_1c0,
           (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_hasPrefix__0269d320,&cf_http),
           ((ulong)pcVar6 & 1) == 0)) {
          local_198 = local_198 + 1;
          local_15c = 4;
        }
        else {
          pcVar6 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_douyinImageJunkMark__026adee8,local_1c0);
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
          if (pcVar6 == (cfstringStruct *)0x0) {
            pcVar6 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_douyinImageURLLooksLikePhotoAsse_026adf20,local_1c0);
            if (((ulong)pcVar6 & 1) == 0) {
              local_190 = local_190 + 1;
              local_15c = 4;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              uVar7 = local_150;
              local_1d0 = &::cf___;
              puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
              uVar3 = local_1a8;
              local_1d9 = 0;
              local_304 = 0;
              if ((uVar7 & 1) != 0) {
                uVar7 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
                local_304 = 0;
                if (uVar3 < uVar7) {
                  uVar3 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,local_1a8);
                  _objc_retainAutoreleasedReturnValue();
                  local_1d9 = 1;
                  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_1d8 = uVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
                  local_304 = (uint)uVar3;
                }
              }
              if ((local_1d9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1d8);
              }
              pcVar6 = local_138;
              if ((local_304 & 1) != 0) {
                uVar3 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,local_1a8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_preferCleanMediaURL__026add40);
                _objc_retainAutoreleasedReturnValue();
                local_350 = pcVar6;
                if (pcVar6 == (cfstringStruct *)0x0) {
                  local_350 = &::cf___;
                }
                _objc_storeStrong(&local_1d0,local_350);
                (*(code *)PTR__objc_release_02578630)(pcVar6);
                (*(code *)PTR__objc_release_02578630)(uVar3);
              }
              pcVar6 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_douyinImageIdentityKey__026adf28,local_1c0);
              _objc_retainAutoreleasedReturnValue();
              local_360 = pcVar6;
              if (pcVar6 == (cfstringStruct *)0x0) {
                local_360 = local_1c0;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1e8 = local_360;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar6 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_cleanMediaScoreForURL__026add48,local_1c0);
              puVar2 = local_180;
              local_1f0 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_objectForKeyedSubscript__0269d098,local_1e8);
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = local_1f0;
              local_1f8 = puVar2;
              if (puVar2 == (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_1e8)
                ;
                puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                           local_1f0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_1e8);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_1c0,local_1e8
                          );
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_178,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d0,local_1e8
                          );
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_integerValue_026ca750);
                if ((long)puVar2 < (long)pcVar6) {
                  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                             local_1f0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_180,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_1e8)
                  ;
                  (*(code *)PTR__objc_release_02578630)(puVar2);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_1c0,
                             local_1e8);
                  pcVar6 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
                  if (pcVar6 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_178,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d0,
                               local_1e8);
                  }
                }
                else {
                  pcVar6 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
                  local_201 = 0;
                  bVar1 = false;
                  if (pcVar6 != (cfstringStruct *)0x0) {
                    pcVar6 = local_178;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_178,PTR_s_objectForKeyedSubscript__0269d098,local_1e8);
                    _objc_retainAutoreleasedReturnValue();
                    local_201 = 1;
                    local_200 = pcVar6;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    bVar1 = pcVar6 == (cfstringStruct *)0x0;
                  }
                  if ((local_201 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_200);
                  }
                  if (bVar1) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_178,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d0,
                               local_1e8);
                  }
                }
              }
              _objc_storeStrong(&local_1f8);
              _objc_storeStrong(&local_1e8,0);
              _objc_storeStrong(&local_1d0,0);
              local_15c = 0;
            }
          }
          else {
            local_188 = local_188 + 1;
            if (local_1a0 == 0) {
              _objc_storeStrong(&local_1a0,local_1c8);
            }
            local_15c = 4;
          }
          _objc_storeStrong(&local_1c8,0);
        }
        _objc_storeStrong(&local_1c0,0);
      }
      _objc_storeStrong(&local_1b8);
      _objc_storeStrong(&local_1b0,0);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_removeAllObjects_0269d508);
    _memset(auStack_258,0,0x40);
    puVar2 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_3c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10);
    if (local_3c8 != (undefined *)0x0) {
      lVar9 = *local_248;
      local_3d0 = (undefined *)0x0;
      do {
        do {
          if (*local_248 - lVar9 != 0) {
            _objc_enumerationMutation(*local_248 - lVar9,puVar2);
          }
          local_218 = *(undefined8 *)(local_250 + (long)local_3d0 * 8);
          puVar5 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_objectForKeyedSubscript__0269d098,local_218);
          _objc_retainAutoreleasedReturnValue();
          local_260 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
          if (puVar5 == (undefined *)0x0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
            local_15c = 6;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_260);
            uVar3 = local_158;
            if (local_158 != 0) {
              pcVar6 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_178,PTR_s_objectForKeyedSubscript__0269d098,local_218);
              _objc_retainAutoreleasedReturnValue();
              local_400 = pcVar6;
              if (pcVar6 == (cfstringStruct *)0x0) {
                local_400 = &::cf___;
              }
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_addObject__0269d180,local_400);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
            }
            puVar8 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0);
            puVar4 = puVar8 + -0x23;
            if (puVar8 < (undefined1 *)((long)&segment_command_00000020.cmd + 3)) {
              local_15c = 0;
            }
            else {
              puVar4 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
              local_15c = 5;
            }
          }
          _objc_storeStrong(puVar4,&local_260,0);
          if ((local_15c != 0) && (local_15c != 6)) goto LAB_010360f4;
          local_3d0 = local_3d0 + 1;
        } while (local_3d0 < local_3c8);
        local_3c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                   0x10);
        local_3d0 = (undefined *)0x0;
      } while (local_3c8 != (undefined *)0x0);
    }
    local_15c = 0;
LAB_010360f4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
    if (uVar3 != 0) {
      local_268 = 0;
      _memset(auStack_2b0,0,0x40);
      uVar3 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_428 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,0x10)
      ;
      if (local_428 != 0) {
        lVar9 = *local_2a0;
        local_430 = 0;
        do {
          do {
            if (*local_2a0 - lVar9 != 0) {
              _objc_enumerationMutation(*local_2a0 - lVar9,uVar3);
            }
            lVar10 = *(long *)(local_2a8 + local_430 * 8);
            local_270 = lVar10;
            (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0);
            if (lVar10 != 0) {
              local_268 = local_268 + 1;
            }
            local_430 = local_430 + 1;
          } while (local_430 < local_428);
          local_428 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,
                     0x10);
          local_430 = 0;
        } while (local_428 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    puVar4 = local_210;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar4;
    local_15c = 1;
    _objc_storeStrong(&local_210);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

