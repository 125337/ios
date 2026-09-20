// activityRowsForSession: @ 014dfe50

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsEngine::activityRowsForSession_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ID IVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  dword *pdVar12;
  undefined *local_398;
  undefined *local_320;
  undefined *local_318;
  ulong local_2d8;
  ulong local_2d0;
  undefined *local_280;
  undefined4 local_274;
  ulong local_270;
  undefined *local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined *local_220;
  undefined1 *local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  int local_1b8;
  byte local_1b1;
  ulong local_1b0;
  byte local_1a1;
  ulong local_1a0;
  ulong local_198;
  SEL local_190;
  ID local_188;
  undefined1 *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_198 = 0;
  local_190 = param_2;
  local_188 = param_1;
  _objc_storeStrong(&local_198,param_3);
  uVar2 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_isGroup_026af768);
  local_1a1 = 0;
  local_1b1 = 0;
  bVar1 = true;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    local_1a1 = 1;
    local_1a0 = uVar2;
    FUN_014dfa54();
    _objc_retainAutoreleasedReturnValue();
    local_1b1 = 1;
    local_1b0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar2 == 0;
  }
  if ((local_1b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  if ((local_1a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a0);
  }
  puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  if (bVar1) {
    puVar3 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = 1;
    local_180 = puVar3;
  }
  else {
    uVar2 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_membersInRoom__0269ed78);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar11 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_1c0;
    puVar5 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_1c8 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_unionSet__026a2cb0,local_1c0);
    }
    _memset(auStack_210,0,0x40);
    uVar2 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_speakerOrder_026af778);
    _objc_retainAutoreleasedReturnValue();
    local_2d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2d0 != 0) {
      lVar9 = *local_200;
      local_2d8 = 0;
      do {
        do {
          if (*local_200 - lVar9 != 0) {
            _objc_enumerationMutation(*local_200 - lVar9,uVar2);
          }
          uVar10 = *(ulong *)(local_208 + local_2d8 * 8);
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1d0 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((uVar10 & 1) != 0) &&
             (uVar10 = local_1d0,
             (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0), uVar10 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,local_1d0);
          }
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10
                  );
        local_2d8 = 0;
      } while (local_2d0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_218 = puVar4;
    _memset(auStack_260,0,0x40);
    puVar4 = local_1c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_318 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,0x10);
    if (local_318 != (undefined *)0x0) {
      lVar9 = *local_250;
      local_320 = (undefined *)0x0;
      do {
        do {
          if (*local_250 - lVar9 != 0) {
            _objc_enumerationMutation(*local_250 - lVar9,puVar4);
          }
          puVar11 = *(undefined **)(local_258 + (long)local_320 * 8);
          local_220 = puVar11;
          FUN_014dfa54();
          _objc_retainAutoreleasedReturnValue();
          local_268 = puVar11;
          (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_length_0269cca0);
          if (puVar11 == (undefined *)0x0) {
            local_1b8 = 5;
          }
          else {
            uVar2 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_speakerCounts_026af780);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar10);
            (*(code *)PTR__objc_release_02578630)(uVar2);
            uVar2 = local_198;
            local_270 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_speakerLatest_026af788);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar10);
            (*(code *)PTR__objc_release_02578630)(uVar2);
            puVar5 = local_268;
            puVar11 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
            uVar2 = local_198;
            local_274 = (int)uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_usr_026af770);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar11,PTR_s_displayNameForUser_inRoom__0269ecd0,puVar5);
            _objc_retainAutoreleasedReturnValue();
            local_280 = puVar11;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            puVar3 = local_218;
            local_178 = &cf_usr;
            local_150 = local_268;
            local_170 = &cf_name;
            puVar11 = local_280;
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0);
            if (puVar11 == (undefined *)0x0) {
              local_398 = local_268;
            }
            else {
              local_398 = local_280;
            }
            local_148 = local_398;
            local_168 = &cf_count;
            puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,local_270);
            _objc_retainAutoreleasedReturnValue();
            local_160 = &cf_last;
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_140 = puVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                       local_274);
            _objc_retainAutoreleasedReturnValue();
            local_158 = &cf_ago;
            IVar7 = local_188;
            local_138 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_displayAgo__026af790,local_274);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_130 = IVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_150,&local_178,5);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_release_02578630)(IVar7);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar11);
            puVar3 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0);
            pdVar12 = (dword *)(puVar3 + -800);
            if (puVar3 < &section_000002e8.reloff) {
              local_1b8 = 0;
            }
            else {
              pdVar12 = &MACH_HEADER.cputype;
              local_1b8 = 4;
            }
            _objc_storeStrong(pdVar12,&local_280,0);
          }
          _objc_storeStrong(&local_268,0);
          if ((local_1b8 != 0) && (local_1b8 != 5)) goto LAB_014e07ec;
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,
                   0x10);
        local_320 = (undefined *)0x0;
      } while (local_318 != (undefined *)0x0);
    }
    local_1b8 = 0;
LAB_014e07ec:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_218,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02585ff8);
    puVar3 = local_218;
    (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_copy_0269d150);
    local_1b8 = 1;
    local_180 = puVar3;
    _objc_storeStrong(&local_218);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_1c0,0);
  }
  _objc_storeStrong(&local_198,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_180;
}

