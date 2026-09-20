// FUN_00105420 @ 00105420

void FUN_00105420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *local_510;
  undefined *local_508;
  undefined *local_380;
  undefined *local_378;
  undefined *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  code *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined **local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined8 local_270;
  undefined *local_268;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined *local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined **local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined4 local_16c;
  undefined *local_168 [3];
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_atUserListFromWrap__0269ec88,local_140);
  _objc_retainAutoreleasedReturnValue();
  local_168[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
  if (puVar3 == (undefined *)0x0) {
    local_16c = 1;
  }
  else {
    puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,
               PTR_s_commandRemainderByStrippingMenti_0269eca0,local_148);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    puVar4 = local_150;
    local_178 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_chatRoomClearHitKeywords_0269eca8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_normalizedKeywordsFromText__0269ecb0);
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,
               PTR_s_commandRemainder_matchesKeywords_0269ecb8,local_178,local_180);
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_chatRoomQuickKickEnabled_0269ece8);
      uVar1 = local_130;
      puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      if (((ulong)puVar3 & 1) == 0) {
        local_16c = 1;
      }
      else {
        puVar3 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_chatRoomQuickKickAllGroups_0269ecf0);
        puVar4 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_chatRoomQuickKickSelectedGroups_0269ecf8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_room_allowedByAllGroups_selected_0269ed00,uVar1,
                   (ulong)puVar3 & 0xffffffff);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
        if (((ulong)puVar2 & 1) == 0) {
          local_16c = 1;
        }
        else {
          puVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_chatRoomQuickKickKeywords_0269ed08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_normalizedKeywordsFromText__0269ecb0);
          _objc_retainAutoreleasedReturnValue();
          local_210 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                     PTR_s_commandRemainder_matchesKeywords_0269ecb8,local_178,local_210);
          if (((ulong)puVar2 & 1) == 0) {
            local_16c = 1;
          }
          else {
            puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                       PTR_s_currentUserCanManageRoom__0269ecc0,local_130);
            puVar2 = local_168[0];
            if (((ulong)puVar3 & 1) == 0) {
              local_16c = 1;
            }
            else {
              ppuVar5 = &local_260;
              local_260 = PTR___NSConcreteStackBlock_02578660;
              local_258 = 0xc2000000;
              local_254 = 0;
              local_250 = FUN_00106cb0;
              local_248 = &DAT_0257a258;
              (*(code *)PTR__objc_retain_02578638)();
              uVar1 = local_130;
              local_240 = puVar2;
              (*(code *)PTR__objc_retain_02578638)();
              puVar2 = local_178;
              local_238 = uVar1;
              (*(code *)PTR__objc_retain_02578638)();
              puVar3 = local_150;
              local_230 = puVar2;
              (*(code *)PTR__objc_retain_02578638)();
              uVar1 = local_140;
              local_228 = puVar3;
              (*(code *)PTR__objc_retain_02578638)();
              local_220 = uVar1;
              _objc_retainBlock();
              puVar2 = local_150;
              local_218 = ppuVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_chatRoomQuickKickConfirm_0269ed20);
              if (((ulong)puVar2 & 1) == 0) {
                (*(code *)local_218[2])();
                local_16c = 0;
              }
              else {
                puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                _objc_retainAutoreleasedReturnValue();
                local_268 = puVar2;
                _memset(auStack_2b0,0,0x40);
                puVar2 = local_168[0];
                (*(code *)PTR__objc_retain_02578638)();
                local_508 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,
                           auStack_128,0x10);
                if (local_508 != (undefined *)0x0) {
                  lVar6 = *local_2a0;
                  local_510 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_2a0 - lVar6 != 0) {
                        _objc_enumerationMutation(*local_2a0 - lVar6,puVar2);
                      }
                      puVar3 = local_268;
                      local_270 = *(undefined8 *)(local_2a8 + (long)local_510 * 8);
                      puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                                 PTR_s_displayNameForUser_inRoom__0269ecd0,local_270,local_130);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                      local_510 = local_510 + 1;
                    } while (local_510 < local_508);
                    local_508 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,
                               auStack_128,0x10);
                    local_510 = (undefined *)0x0;
                  } while (local_508 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar2);
                puVar2 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = local_268;
                local_2e0 = PTR___NSConcreteStackBlock_02578660;
                local_2d8 = 0xc2000000;
                local_2d4 = 0;
                local_2d0 = FUN_00106e24;
                local_2c8 = &DAT_02579e20;
                (*(code *)PTR__objc_retain_02578638)();
                ppuVar5 = local_218;
                local_2c0 = puVar3;
                (*(code *)PTR__objc_retain_02578638)();
                local_2b8 = ppuVar5;
                _dispatch_async(puVar2,&local_2e0);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                local_16c = 1;
                _objc_storeStrong(&local_2b8);
                _objc_storeStrong(&local_2c0,0);
                _objc_storeStrong(&local_268,0);
              }
              _objc_storeStrong(&local_218);
              _objc_storeStrong(&local_220,0);
              _objc_storeStrong(&local_228,0);
              _objc_storeStrong(&local_230,0);
              _objc_storeStrong(&local_238,0);
              _objc_storeStrong(&local_240,0);
            }
          }
          _objc_storeStrong(&local_210,0);
        }
      }
    }
    else {
      puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserCanManageRoom__0269ecc0,
                 local_130);
      if (((ulong)puVar2 & 1) == 0) {
        local_16c = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_188 = puVar2;
        _memset(auStack_1d0,0,0x40);
        puVar2 = local_168[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_378 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                   0x10);
        if (local_378 != (undefined *)0x0) {
          lVar6 = *local_1c0;
          local_380 = (undefined *)0x0;
          do {
            do {
              if (*local_1c0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_1c0 - lVar6,puVar2);
              }
              local_190 = *(undefined8 *)(local_1c8 + (long)local_380 * 8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                         PTR_s_resetAutoKickHitsForRoom_user__0269ecc8,local_130,local_190);
              puVar3 = local_188;
              puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                         PTR_s_displayNameForUser_inRoom__0269ecd0,local_190,local_130);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              local_380 = local_380 + 1;
            } while (local_380 < local_378);
            local_378 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8
                       ,0x10);
            local_380 = (undefined *)0x0;
          } while (local_378 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar3 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,PTR_s_componentsJoinedByString__0269d140,&cf_0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR___dispatch_main_q_02578680;
        local_1d8 = puVar3;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_1d8;
        local_200 = PTR___NSConcreteStackBlock_02578660;
        local_1f8 = 0xc2000000;
        local_1f4 = 0;
        local_1f0 = FUN_00106be0;
        local_1e8 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_1e0 = puVar3;
        _dispatch_async(puVar2,&local_200);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar3 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_chatRoomKickNotifyFilehelper_0269ecd8)
        ;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_displayNameForRoom__0269ece0,
                     local_130);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf___t);
          _objc_retainAutoreleasedReturnValue();
          local_208 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_208,
                     &cf_filehelper);
          _objc_storeStrong(&local_208,0);
        }
        local_16c = 1;
        _objc_storeStrong(&local_1e0);
        _objc_storeStrong(&local_1d8,0);
        _objc_storeStrong(&local_188,0);
      }
    }
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(local_168);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

