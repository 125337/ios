// commonGroupCounts @ 014e6564

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineSessionStatsEngine::commonGroupCounts
          (WCRefineSessionStatsEngine *this,ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  double in_d0;
  undefined *local_3d8;
  undefined *local_3d0;
  undefined1 *local_390;
  undefined1 *local_388;
  char *local_338;
  char *local_330;
  ulong local_2f8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  ulong local_2b0;
  undefined *local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  undefined8 local_260;
  int local_254;
  long local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  long local_1f0;
  undefined1 *local_1e8;
  undefined *local_1e0;
  char *local_1d8;
  undefined *local_1d0;
  double local_1c8;
  SEL local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_1c0 = param_2;
  local_1b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_1b0 = DAT_028e36e0;
  if ((DAT_028e36e0 == (undefined *)0x0) || (45.0 <= in_d0 - DAT_028e36e8)) {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_1c8 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = "CContactMgr";
    local_1d0 = puVar6;
    _objc_getClass();
    FUN_014e23b8();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    local_1d8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_1e0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar2;
    _memset(auStack_230,0,0x40);
    pcVar1 = local_1d8;
    FUN_014e6fbc();
    _objc_retainAutoreleasedReturnValue();
    local_330 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_330 != (char *)0x0) {
      lVar7 = *local_220;
      local_338 = (char *)0x0;
      do {
        do {
          if (*local_220 - lVar7 != 0) {
            _objc_enumerationMutation(*local_220 - lVar7,pcVar1);
          }
          lVar8 = *(long *)(local_228 + (long)local_338 * 8);
          local_238 = 0;
          local_1f0 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = local_238;
          local_238 = lVar8;
          (*(code *)PTR__objc_release_02578630)(lVar10);
          lVar8 = local_238;
          FUN_014dfa54();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = local_238;
          local_238 = lVar8;
          (*(code *)PTR__objc_release_02578630)(lVar10);
          lVar10 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0);
          if ((lVar10 == 0) ||
             (puVar6 = PTR_WCRefineMessageBlockSupport_026ce0f8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,
                        local_238), ((ulong)puVar6 & 1) == 0)) {
            puVar9 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            local_254 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_addObject__0269d180,local_238);
            puVar3 = local_1e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
            puVar9 = puVar3 + -400;
            if (puVar3 < &section_00000158.reloff) {
              local_254 = 0;
            }
            else {
              puVar9 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
              local_254 = 2;
            }
          }
          _objc_storeStrong(puVar9,&local_238,0);
          if ((local_254 != 0) && (local_254 != 3)) goto LAB_014e6998;
          local_338 = local_338 + 1;
        } while (local_338 < local_330);
        local_330 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,
                   0x10);
        local_338 = (char *)0x0;
      } while (local_330 != (char *)0x0);
    }
    local_254 = 0;
LAB_014e6998:
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _memset(auStack_2a0,0,0x40);
    puVar9 = local_1e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_388 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_128,0x10);
    if (local_388 != (undefined1 *)0x0) {
      lVar7 = *local_290;
      local_390 = (undefined1 *)0x0;
      do {
        do {
          if (*local_290 - lVar7 != 0) {
            _objc_enumerationMutation(*local_290 - lVar7,puVar9);
          }
          local_260 = *(undefined8 *)(local_298 + (long)local_390 * 8);
          puVar6 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_membersInRoom__0269ed78,local_260
                    );
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
          local_2a8 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((((ulong)puVar6 & 1) == 0) ||
             (puVar6 = local_2a8,
             (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_count_0269cfe0),
             puVar6 == (undefined *)0x0)) {
            local_254 = 6;
          }
          else {
            puVar6 = local_1e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
            if ((puVar6 == (undefined *)0x0) ||
               (puVar6 = local_2a8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_2a8,PTR_s_containsObject__0269cbb8,local_1e0),
               ((ulong)puVar6 & 1) != 0)) {
              _memset(auStack_2f0,0,0x40);
              puVar6 = local_2a8;
              (*(code *)PTR__objc_retain_02578638)();
              local_3d0 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,
                         auStack_1a8,0x10);
              if (local_3d0 != (undefined *)0x0) {
                lVar10 = *local_2e0;
                local_3d8 = (undefined *)0x0;
                do {
                  do {
                    if (*local_2e0 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_2e0 - lVar10,puVar6);
                    }
                    uVar11 = *(ulong *)(local_2e8 + (long)local_3d8 * 8);
                    local_2b0 = uVar11;
                    FUN_014dfa54();
                    _objc_retainAutoreleasedReturnValue();
                    local_2f8 = uVar11;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_length_0269cca0);
                    if ((uVar11 == 0) ||
                       (uVar11 = local_2f8,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_2f8,PTR_s_isEqualToString__0269ccc8,local_1e0),
                       (uVar11 & 1) != 0)) {
                      local_254 = 8;
                    }
                    else {
                      puVar2 = PTR_WCRefineMessageBlockSupport_026ce0f8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineMessageBlockSupport_026ce0f8,
                                 PTR_s_isChatRoomID__0269ec68,local_2f8);
                      if ((((ulong)puVar2 & 1) == 0) &&
                         (uVar11 = local_2f8, FUN_014e76b8(), (uVar11 & 1) == 0)) {
                        uVar11 = local_2f8;
                        FUN_014e78c0();
                        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                        if ((uVar11 & 1) == 0) {
                          puVar4 = local_1d0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,local_2f8);
                          _objc_retainAutoreleasedReturnValue();
                          puVar5 = puVar4;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar2,PTR_s_numberWithUnsignedInteger__0269e4d0,puVar5 + 1);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                                     local_2f8);
                          (*(code *)PTR__objc_release_02578630)(puVar2);
                          (*(code *)PTR__objc_release_02578630)(puVar4);
                          local_254 = 0;
                        }
                        else {
                          local_254 = 8;
                        }
                      }
                      else {
                        local_254 = 8;
                      }
                    }
                    _objc_storeStrong(&local_2f8,0);
                    local_3d8 = local_3d8 + 1;
                  } while (local_3d8 < local_3d0);
                  local_3d0 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,
                             auStack_1a8,0x10);
                  local_3d8 = (undefined *)0x0;
                } while (local_3d0 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar6);
              local_254 = 0;
            }
            else {
              local_254 = 6;
            }
          }
          _objc_storeStrong(&local_2a8,0);
          local_390 = local_390 + 1;
        } while (local_390 < local_388);
        local_388 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_128,
                   0x10);
        local_390 = (undefined1 *)0x0;
      } while (local_388 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar9);
    puVar2 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_copy_0269d150);
    puVar6 = DAT_028e36e0;
    DAT_028e36e0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    DAT_028e36e8 = local_1c8;
    puVar6 = DAT_028e36e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_254 = 1;
    local_1b0 = puVar6;
    _objc_storeStrong(&local_1e8);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1d0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_1b0;
}

