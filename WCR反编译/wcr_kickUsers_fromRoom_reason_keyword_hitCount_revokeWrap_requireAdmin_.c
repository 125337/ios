// wcr_kickUsers:fromRoom:reason:keyword:hitCount:revokeWrap:requireAdmin: @ 00edacb4

/* Function Stack Size: 0x44 bytes */

bool WCRefineChatRoomKickHelper::
     wcr_kickUsers_fromRoom_reason_keyword_hitCount_revokeWrap_requireAdmin_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7
               ,ID param_8,bool param_9)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  undefined *local_348;
  undefined *local_340;
  ulong local_2d8;
  ulong local_2d0;
  undefined *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  undefined *local_220 [2];
  long local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_1f0;
  byte local_1e1;
  cfstringStruct *local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  byte local_185;
  undefined4 local_184;
  cfstringStruct *local_180;
  byte local_171;
  long local_170;
  long_long local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  ulong local_148;
  SEL local_140;
  cfstringStruct *local_138;
  byte local_129;
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
  local_160 = 0;
  _objc_storeStrong(&local_160,param_6);
  local_170 = 0;
  local_168 = param_7;
  _objc_storeStrong(&local_170,param_8);
  local_171 = (byte)param_9;
  pcVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_trimmedString__0269ec98,local_150);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_138;
  local_180 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isChatRoomID__0269ec68,pcVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (uVar3 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
     uVar3 == 0)) {
    local_129 = 0;
    local_184 = 1;
  }
  else {
    pcVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_currentUserCanManageRoom__0269ecc0,local_180);
    local_185 = (byte)pcVar1;
    if (((local_171 & 1) == 0) || (((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_wcr_rateLimitAllowsKickInRoom__026ab718,local_180);
      if (((ulong)pcVar1 & 1) == 0) {
        local_129 = 0;
        local_184 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_190 = puVar4;
        _memset(auStack_1d8,0,0x40);
        uVar3 = local_148;
        (*(code *)PTR__objc_retain_02578638)();
        local_2d0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10
                  );
        if (local_2d0 != 0) {
          lVar8 = *local_1c8;
          local_2d8 = 0;
          do {
            do {
              if (*local_1c8 - lVar8 != 0) {
                _objc_enumerationMutation(*local_1c8 - lVar8,uVar3);
              }
              local_198 = *(undefined8 *)(local_1d0 + local_2d8 * 8);
              pcVar1 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_trimmedString__0269ec98,local_198);
              _objc_retainAutoreleasedReturnValue();
              local_1e0 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
              if ((pcVar1 == (cfstringStruct *)0x0) ||
                 (pcVar1 = local_138,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_138,PTR_s_isProtectedMember_inRoom__0269ed48,local_1e0,local_180),
                 ((ulong)pcVar1 & 1) != 0)) {
                local_184 = 3;
              }
              else {
                puVar4 = local_190;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_190,PTR_s_containsObject__0269cbb8,local_1e0);
                if (((ulong)puVar4 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_190,PTR_s_addObject__0269d180,local_1e0);
                }
                local_184 = 0;
              }
              _objc_storeStrong(&local_1e0,0);
              local_2d8 = local_2d8 + 1;
            } while (local_2d8 < local_2d0);
            local_2d0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                       0x10);
            local_2d8 = 0;
          } while (local_2d0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar4 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0);
        pcVar1 = local_138;
        if (puVar4 == (undefined *)0x0) {
          local_129 = 0;
          local_184 = 1;
        }
        else {
          local_1e1 = 0;
          pcVar5 = "CGroupMgr";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_wcr_service__026ab620,pcVar5);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = &cf_DeleteGroupMember_withMemberList_scene_;
          local_1f0 = pcVar1;
          _NSSelectorFromString();
          local_208 = pcVar2;
          if ((local_1f0 != (cfstringStruct *)0x0) &&
             (pcVar1 = local_1f0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1f0,PTR_s_respondsToSelector__026ca818,pcVar2),
             ((ulong)pcVar1 & 1) != 0)) {
            local_210 = (long)(int)(uint)((local_185 & 1) == 0);
            pcVar1 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,local_208,local_180,local_190,local_210)
            ;
            local_1e1 = (byte)pcVar1;
          }
          _objc_storeStrong(&local_1f0,0);
          if ((local_1e1 & 1) == 0) {
            local_129 = 0;
            local_184 = 1;
          }
          else {
            puVar4 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_220[0] = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_chatRoomQuickKickRevokeCommand_0269ed10);
            if (((ulong)puVar4 & 1) == 0) {
              _objc_storeStrong(&local_170,0);
            }
            _memset(auStack_268,0,0x40);
            puVar4 = local_190;
            (*(code *)PTR__objc_retain_02578638)();
            local_340 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                       auStack_128,0x10);
            if (local_340 != (undefined *)0x0) {
              lVar8 = *local_258;
              local_348 = (undefined *)0x0;
              do {
                do {
                  if (*local_258 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_258 - lVar8,puVar4);
                  }
                  local_228 = *(undefined8 *)(local_260 + (long)local_348 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_resetAutoKickHitsForRoom_user__0269ecc8,local_180,
                             local_228);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_appendKickLogRoom_user_reason_ke_026ab720,local_180,
                             local_228,local_158,local_160);
                  puVar6 = local_220[0];
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_220[0],PTR_s_chatRoomKickNotifyEnabled_026ab728);
                  pcVar1 = local_138;
                  if (((ulong)puVar6 & 1) != 0) {
                    puVar6 = local_220[0];
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_220[0],PTR_s_chatRoomKickNotifyFormat_026ab730);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar1,PTR_s_wcr_renderNotify_roomId_user_key_026ab738,puVar6,
                               local_180,local_228,local_160,local_168);
                    _objc_retainAutoreleasedReturnValue();
                    local_270 = pcVar1;
                    (*(code *)PTR__objc_release_02578630)(puVar6);
                    pcVar1 = local_270;
                    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_length_0269cca0);
                    if (pcVar1 != (cfstringStruct *)0x0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineHelper_026ce000,
                                 PTR_s_sendMsg_toContactUsrName__0269d3f0,local_270,local_180);
                    }
                    _objc_storeStrong(&local_270,0);
                  }
                  puVar6 = local_220[0];
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_220[0],PTR_s_chatRoomKickNotifyFilehelper_0269ecd8);
                  if (((ulong)puVar6 & 1) != 0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_278 = &::cf___;
                    pcVar1 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_138,PTR_s_trimmedString__0269ec98,local_160);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar2 = pcVar1;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                    if (pcVar2 == (cfstringStruct *)0x0) {
                      pcVar1 = local_138;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_138,PTR_s_trimmedString__0269ec98,local_158);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = pcVar1;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar1);
                      if (pcVar2 == (cfstringStruct *)0x0) {
                        _objc_storeStrong(0,&local_278,&cf_SN);
                      }
                      else {
                        pcVar2 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_138,PTR_s_trimmedString__0269ec98,local_158);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar1 = local_278;
                        local_278 = pcVar2;
                        (*(code *)PTR__objc_release_02578630)(pcVar1);
                      }
                    }
                    else {
                      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,
                                 PTR_s_stringWithFormat__0269cca8,&cf_sQ_);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar1 = local_278;
                      local_278 = pcVar2;
                      (*(code *)PTR__objc_release_02578630)(pcVar1);
                    }
                    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    pcVar1 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_138,PTR_s_trimmedString__0269ec98,local_158);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar2 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_138,PTR_s_displayNameForUser_inRoom__0269ecd0,local_228,
                               local_180);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_138,PTR_s_displayNameForRoom__0269ece0,local_180);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar6,PTR_s_stringWithFormat__0269cca8,&cf___t);
                    _objc_retainAutoreleasedReturnValue();
                    local_280 = puVar6;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,
                               local_280,&cf_filehelper);
                    _objc_storeStrong(&local_280);
                    _objc_storeStrong(&local_278,0);
                  }
                  local_348 = local_348 + 1;
                } while (local_348 < local_340);
                local_340 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                           auStack_128,0x10);
                local_348 = (undefined *)0x0;
              } while (local_340 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if ((local_170 != 0) &&
               (puVar4 = local_220[0],
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_220[0],PTR_s_chatRoomQuickKickRevokeCommand_0269ed10),
               ((ulong)puVar4 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_wcr_revokeWrap_roomId__026ab740,local_170,local_180);
            }
            local_129 = 1;
            local_184 = 1;
            _objc_storeStrong(local_220,0);
          }
        }
        _objc_storeStrong(&local_190,0);
      }
    }
    else {
      local_129 = 0;
      local_184 = 1;
    }
  }
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_129 & 1;
}

