// fillPeopleSnapshot:requestGenderRefresh: @ 014e2a50

/* Function Stack Size: 0x1c bytes */

void __thiscall
WCRefineSessionStatsEngine::fillPeopleSnapshot_requestGenderRefresh_
          (WCRefineSessionStatsEngine *this,ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  ulong uVar7;
  ID IVar8;
  undefined *puVar9;
  ID IVar10;
  ID IVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 in_d0;
  undefined *local_218;
  undefined *local_210;
  byte local_199;
  char *local_198;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  ulong local_100;
  char *local_f8;
  undefined *local_f0;
  int local_e8;
  byte local_e1;
  ulong local_e0;
  byte local_d1;
  ulong local_d0;
  byte local_c1;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c1 = (byte)param_4;
  local_d1 = 0;
  local_e1 = 0;
  bVar1 = true;
  if (local_c0 != 0) {
    uVar13 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isGroup_026af768);
    bVar1 = true;
    if ((uVar13 & 1) != 0) {
      uVar13 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = uVar13;
      FUN_014dfa54();
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = uVar13;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar13 == 0;
    }
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  if (bVar1) {
    local_e8 = 1;
  }
  else {
    uVar13 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_membersInRoom__0269ed78);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar13);
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_014e23b8();
    _objc_retainAutoreleasedReturnValue();
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_f8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_128 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_130 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    local_138 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar4;
    _memset(auStack_188,0,0x40);
    puVar2 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_210 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
    if (local_210 != (undefined *)0x0) {
      lVar12 = *local_178;
      local_218 = (undefined *)0x0;
      do {
        do {
          if (*local_178 - lVar12 != 0) {
            _objc_enumerationMutation(*local_178 - lVar12,puVar2);
          }
          uVar13 = *(ulong *)(local_180 + (long)local_218 * 8);
          local_148 = uVar13;
          FUN_014dfa54();
          _objc_retainAutoreleasedReturnValue();
          local_190 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_length_0269cca0);
          if (uVar13 == 0) {
            local_e8 = 3;
          }
          else {
            local_100 = local_100 + 1;
            puVar5 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
            if ((puVar5 < &MACH_HEADER.cputype) &&
               (uVar13 = local_190,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_190,PTR_s_isEqualToString__0269ccc8,local_140), (uVar13 & 1) == 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_190);
            }
            local_198 = (char *)0x0;
            pcVar3 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178)
            ;
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar6 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_getContactByName__0269d178,local_190);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_198;
              local_198 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            local_199 = 0;
            pcVar3 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_respondsToSelector__026ca818,PTR_s_isMyContact_0269ef80);
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar3 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_isMyContact_0269ef80);
              local_199 = (byte)pcVar3;
            }
            if ((local_199 & 1) != 0) {
              local_108 = local_108 + 1;
            }
            FUN_014e35d8(local_198,&local_110,&local_118,&local_120,local_128,local_130,0);
            lVar14 = local_100 - 800;
            if (local_100 < 800) {
              local_e8 = 0;
            }
            else {
              lVar14 = 2;
              local_e8 = 2;
            }
            _objc_storeStrong(lVar14,&local_198,0);
          }
          _objc_storeStrong(&local_190,0);
          if ((local_e8 != 0) && (local_e8 != 3)) goto LAB_014e304c;
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                   0x10);
        local_218 = (undefined *)0x0;
      } while (local_210 != (undefined *)0x0);
    }
    local_e8 = 0;
LAB_014e304c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setPeopleCount__026af7a8,local_100);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFriendCount__026a2cf0,local_108);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setMaleCount__026af7b0,local_110);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFemaleCount__026af7b8,local_118);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setUnknownSexCount__026af7c0,local_120);
    puVar5 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setAvatarUsrs__026af7c8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar2 = local_128;
    FUN_014e3aa4(local_128,local_130);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setRegionRows__026af7d0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar13 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    FUN_014e0fcc();
    (*(code *)PTR__objc_release_02578630)(uVar13);
    if ((uint)uVar7 < 0x3b9aca01) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setGroupJoinTimeIsOfficial__026af7d8,0);
      IVar8 = local_b0;
      uVar13 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_manualGroupJoinTimeForRoom__026af798);
      FUN_014e2868();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setGroupJoinTimeText__026af7e0);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(uVar13);
    }
    else {
      uVar13 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setGroupJoinTimeIsOfficial__026af7d8,1);
      in_d0 = NEON_ucvtf(uVar7 & 0xffffffff);
      FUN_014e2868();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setGroupJoinTimeText__026af7e0);
      (*(code *)PTR__objc_release_02578630)(uVar13);
    }
    puVar2 = PTR_WCRefineConfig_026cdf58;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_clampedSessionStatsTimeRange__026af710,puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_b0,PTR_s_windowStartForTimeRange_now__026af740,puVar2);
    IVar8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_b0,PTR_s_windowEndForTimeRange_now__026af748,puVar2);
    FUN_014e41d8();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    IVar10 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    IVar11 = IVar10;
    FUN_014e3f08();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setVisitCount__026af7f0,IVar11);
    (*(code *)PTR__objc_release_02578630)(IVar10);
    (*(code *)PTR__objc_release_02578630)(uVar13);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    IVar8 = local_b0;
    if ((local_c1 & 1) != 0) {
      uVar13 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_wcr_requestGroupGenderRefreshFor_026af7f8);
      (*(code *)PTR__objc_release_02578630)(uVar13);
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    local_e8 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

