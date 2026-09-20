// membersInvitedByCurrentUserIncludingLocalHistoryInRoom: @ 00ed4738

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::membersInvitedByCurrentUserIncludingLocalHistoryInRoom_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined *local_480;
  undefined *local_478;
  undefined *local_438;
  undefined *local_430;
  undefined *local_418;
  uint local_408;
  uint local_404;
  undefined *local_3d8;
  undefined *local_3d0;
  undefined *local_348;
  undefined1 auStack_340 [8];
  long local_338;
  long *local_330;
  undefined8 local_300;
  undefined *local_2f8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  undefined8 local_2b0;
  byte local_2a1;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  undefined8 local_248;
  undefined *local_228;
  int local_220;
  int local_21c;
  undefined4 local_218;
  undefined4 local_214;
  int local_210;
  uint local_20c;
  cfstringStruct *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  int local_1dc;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  SEL local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = (undefined *)param_1;
  _objc_storeStrong(&local_1c8,param_3);
  puVar2 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_trimmedString__0269ec98,local_1c8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_1b8;
  local_1d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_currentUserWxid_0269ec70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_1b8;
  local_1d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_isChatRoomID__0269ec68,local_1d0);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_1d8, (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1dc = 1;
    local_1b0 = puVar2;
  }
  else {
    puVar2 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_wcr_currentMemberUserNamesInRoom_026ab650,local_1d0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_1e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    puVar3 = local_1b8;
    local_1f0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_membersInvitedByCurrentUserInRoo_026ab660,local_1d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_orderedSetWithArray__026a4b80);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar2 = local_1b8;
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1dc = 1;
      local_1b0 = puVar2;
    }
    else {
      pcVar4 = "CMessageMgr";
      _objc_getClass("CMessageMgr");
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_wcr_service__026ab620,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = &cf_GetMsg_FromID_Limit_LeftCount_;
      local_200 = puVar2;
      _NSSelectorFromString();
      local_208 = pcVar5;
      if ((local_200 == (undefined *)0x0) ||
         (puVar2 = local_200,
         (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_respondsToSelector__026ca818,pcVar5),
         ((ulong)puVar2 & 1) == 0)) {
        puVar2 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = puVar2;
      }
      else {
        local_20c = 0;
        local_210 = 1;
        local_214 = 200;
        local_218 = 8;
        local_21c = 0;
        do {
          if (local_210 == 0 || 7 < local_21c) break;
          _objc_autoreleasePoolPush();
          local_21c = local_21c + 1;
          local_220 = 0;
          local_228 = (undefined *)0x0;
          puVar1 = local_200;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_200,local_208,local_1d0,local_20c,200,&local_220);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_228;
          local_228 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_228;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((((ulong)puVar2 & 1) == 0) ||
             (puVar2 = local_228,
             (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_count_0269cfe0),
             puVar2 == (undefined *)0x0)) {
            local_1dc = 3;
          }
          else {
            _memset(auStack_288,0,0x40);
            puVar2 = local_228;
            (*(code *)PTR__objc_retain_02578638)();
            local_3d0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8
                       ,0x10);
            if (local_3d0 != (undefined *)0x0) {
              lVar7 = *local_278;
              local_3d8 = (undefined *)0x0;
              do {
                do {
                  if (*local_278 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_278 - lVar7,puVar2);
                  }
                  local_248 = *(undefined8 *)(local_280 + (long)local_3d8 * 8);
                  puVar1 = local_1b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_wcr_objectValue_key__026ab638,local_248,
                             &cf_m_uiMessageType);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  local_290 = puVar3;
                  if ((puVar3 == &DAT_00002710) || (puVar3 == &UNK_00002712)) {
                    puVar1 = local_1b8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1b8,PTR_s_plainTextFromWrap__0269ec80,local_248);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = local_1b8;
                    local_298 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1b8,PTR_s_wcr_stringValue_key__026ab628,local_248,
                               &cf_m_nsContent);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = local_298;
                    local_2a0 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_298,PTR_s_containsString__0269d0b0,&cf__O);
                    if (((ulong)puVar1 & 1) == 0) {
                      puVar1 = local_2a0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2a0,PTR_s_containsString__0269d0b0,&cf__O);
                      local_404 = 0;
                      if (((ulong)puVar1 & 1) != 0) goto LAB_00ed4e2c;
                    }
                    else {
LAB_00ed4e2c:
                      puVar1 = local_298;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_298,PTR_s_containsString__0269d0b0,&cf_ReQ);
                      local_408 = 1;
                      if (((ulong)puVar1 & 1) == 0) {
                        puVar1 = local_2a0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2a0,PTR_s_containsString__0269d0b0,&cf_ReQ);
                        local_408 = (uint)puVar1;
                      }
                      local_404 = local_408;
                    }
                    local_2a1 = (byte)local_404 & 1;
                    if ((local_404 & 1) == 0) {
                      local_1dc = 6;
                    }
                    else {
                      _memset(auStack_2f0,0,0x40);
                      puVar1 = local_1b8;
                      puVar3 = local_2a0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
                      if (puVar3 == (undefined *)0x0) {
                        local_418 = local_298;
                      }
                      else {
                        local_418 = local_2a0;
                      }
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar1,PTR_s_wcr_inviteeUserNamesFromSysmsgCo_026ab668,local_418);
                      _objc_retainAutoreleasedReturnValue();
                      local_430 = puVar1;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      if (local_430 != (undefined *)0x0) {
                        lVar8 = *local_2e0;
                        local_438 = (undefined *)0x0;
                        do {
                          do {
                            if (*local_2e0 - lVar8 != 0) {
                              _objc_enumerationMutation(*local_2e0 - lVar8,puVar1);
                            }
                            local_2b0 = *(undefined8 *)(local_2e8 + (long)local_438 * 8);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_1b8,PTR_s_wcr_appendInviteesFromHistoryVal_026ab670,
                                       local_2b0,local_1d8,local_1f0,local_1f8);
                            local_438 = local_438 + 1;
                          } while (local_438 < local_430);
                          local_430 = puVar1;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                     auStack_2f0,auStack_128,0x10);
                          local_438 = (undefined *)0x0;
                        } while (local_430 != (undefined *)0x0);
                      }
                      (*(code *)PTR__objc_release_02578630)(puVar1);
                      puVar1 = local_1b8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1b8,PTR_s_wcr_objectValue_key__026ab638,local_248,
                                 &cf_m_arrMembers);
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                      local_2f8 = puVar1;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
                      if (((ulong)puVar1 & 1) == 0) {
                        local_1dc = 6;
                      }
                      else {
                        _memset(auStack_340,0,0x40);
                        puVar1 = local_2f8;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_478 = puVar1;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_340,auStack_1a8,0x10);
                        if (local_478 != (undefined *)0x0) {
                          lVar8 = *local_330;
                          local_480 = (undefined *)0x0;
                          do {
                            do {
                              if (*local_330 - lVar8 != 0) {
                                _objc_enumerationMutation(*local_330 - lVar8,puVar1);
                              }
                              local_300 = *(undefined8 *)(local_338 + (long)local_480 * 8);
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_1b8,PTR_s_wcr_appendInviteesFromHistoryVal_026ab670,
                                         local_300,local_1d8,local_1f0,local_1f8);
                              local_480 = local_480 + 1;
                            } while (local_480 < local_478);
                            local_478 = puVar1;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                       auStack_340,auStack_1a8,0x10);
                            local_480 = (undefined *)0x0;
                          } while (local_478 != (undefined *)0x0);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar1);
                        local_1dc = 0;
                      }
                      _objc_storeStrong(&local_2f8,0);
                    }
                    _objc_storeStrong(&local_2a0);
                    _objc_storeStrong(&local_298,0);
                  }
                  local_3d8 = local_3d8 + 1;
                } while (local_3d8 < local_3d0);
                local_3d0 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,
                           auStack_a8,0x10);
                local_3d8 = (undefined *)0x0;
              } while (local_3d0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_1b8;
            local_348 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_wcr_objectValue_key__026ab638,puVar2,&cf_m_uiMesLocalID);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            uVar6 = (uint)puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            if ((uVar6 < 2) || ((local_20c != 0 && (local_20c <= uVar6)))) {
              local_1dc = 3;
            }
            else {
              local_20c = uVar6 - 1;
              local_210 = local_220;
              local_1dc = 0;
            }
            _objc_storeStrong(&local_348,0);
          }
          _objc_storeStrong(&local_228,0);
          _objc_autoreleasePoolPop();
        } while (local_1dc == 0);
        puVar2 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = puVar2;
      }
      local_1dc = 1;
      _objc_storeStrong(&local_200,0);
    }
    _objc_storeStrong(&local_1f8);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1e8,0);
  }
  _objc_storeStrong(&local_1d8);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_1b0;
}

