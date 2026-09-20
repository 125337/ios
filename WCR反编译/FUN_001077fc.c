// FUN_001077fc @ 001077fc

void FUN_001077fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_518;
  undefined *local_510;
  undefined1 *local_480;
  undefined1 *local_478;
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_370;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  undefined8 local_2f8;
  undefined *local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_290;
  undefined *local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  undefined8 local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined4 local_228;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 auStack_1f8 [128];
  undefined1 auStack_178 [128];
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_208 = 0;
  _objc_storeStrong(&local_208,param_1);
  local_210 = 0;
  _objc_storeStrong(&local_210,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_218 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatRoomDuplicateJoinEnabled_0269ed98);
  if (((ulong)puVar1 & 1) == 0) {
    local_228 = 1;
  }
  else {
    puVar2 = local_218;
    (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_chatRoomDuplicateJoinSelectedGro_0269eda0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_370 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_370 = *(undefined1 **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = local_370;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_count_0269cfe0);
    if ((puVar2 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) ||
       (puVar2 = local_230,
       (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_containsObject__0269cbb8,local_208),
       ((ulong)puVar2 & 1) == 0)) {
      local_228 = 1;
    }
    else {
      puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_isProtectedMember_inRoom__0269ed48,
                 local_210,local_208);
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_238 = puVar1;
        _memset(auStack_280,0,0x40);
        puVar2 = local_230;
        (*(code *)PTR__objc_retain_02578638)();
        local_3b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_a8,
                   0x10);
        if (local_3b0 != (undefined1 *)0x0) {
          lVar5 = *local_270;
          local_3b8 = (undefined1 *)0x0;
          do {
            do {
              if (*local_270 - lVar5 != 0) {
                _objc_enumerationMutation(*local_270 - lVar5,puVar2);
              }
              local_240 = *(undefined8 *)(local_278 + (long)local_3b8 * 8);
              puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_membersInRoom__0269ed78,
                         local_240);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar1);
              if (((ulong)puVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_addObject__0269d180,local_240)
                ;
              }
              local_3b8 = local_3b8 + 1;
            } while (local_3b8 < local_3b0);
            local_3b0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_a8
                       ,0x10);
            local_3b8 = (undefined1 *)0x0;
          } while (local_3b0 != (undefined1 *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_238;
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_containsObject__0269cbb8,local_208);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_addObject__0269d180,local_208);
        }
        puVar2 = local_238;
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_count_0269cfe0);
        if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar2) {
          local_f8 = &cf_user;
          local_d0 = local_210;
          local_f0 = &cf_name;
          puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                     PTR_s_displayNameForUser_inRoom__0269ecd0,local_210,local_208);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = &cf_rooms;
          local_c0 = local_238;
          local_e0 = &cf_roomNames;
          local_b8 = *(undefined8 *)PTR____NSArray0___02578280;
          local_d8 = &cf_roomSizes;
          local_b0 = *(undefined8 *)PTR____NSDictionary0___02578288;
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_c8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
          _objc_retainAutoreleasedReturnValue();
          local_288 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar3 = local_288;
          puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          puVar2 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_chatRoomDuplicateJoinKeepRule_0269eda8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_preferredKeepRoomForDuplicate_ke_0269edb0,puVar3,puVar2,local_208)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          local_290 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                     PTR_s_roomsToKickForDuplicate_keepRoom_0269edb8,local_288,puVar1);
          _objc_retainAutoreleasedReturnValue();
          local_298 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
          if (puVar3 == (undefined *)0x0) {
            local_228 = 1;
          }
          else {
            puVar2 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_218,PTR_s_chatRoomDuplicateJoinAutoKick_0269edc0);
            if (((ulong)puVar2 & 1) == 0) {
              puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              local_2a0 = puVar1;
              _memset(auStack_2e8,0,0x40);
              puVar2 = local_238;
              (*(code *)PTR__objc_retain_02578638)();
              local_478 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,
                         auStack_178,0x10);
              if (local_478 != (undefined1 *)0x0) {
                lVar5 = *local_2d8;
                local_480 = (undefined1 *)0x0;
                do {
                  do {
                    if (*local_2d8 - lVar5 != 0) {
                      _objc_enumerationMutation(*local_2d8 - lVar5,puVar2);
                    }
                    puVar1 = local_2a0;
                    local_2a8 = *(undefined8 *)(local_2e0 + (long)local_480 * 8);
                    puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                               PTR_s_displayNameForRoom__0269ece0,local_2a8);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                    local_480 = local_480 + 1;
                  } while (local_480 < local_478);
                  local_478 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,
                             auStack_178,0x10);
                  local_480 = (undefined1 *)0x0;
                } while (local_478 != (undefined1 *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                         PTR_s_displayNameForUser_inRoom__0269ecd0,local_210,local_208);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_2a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a0,PTR_s_componentsJoinedByString__0269d140,&cf_0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_YR_)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_2f0 = puVar1;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,
                         local_2f0,&cf_filehelper);
              local_228 = 1;
              _objc_storeStrong(&local_2f0);
              _objc_storeStrong(&local_2a0,0);
            }
            else {
              _memset(auStack_338,0,0x40);
              puVar1 = local_298;
              (*(code *)PTR__objc_retain_02578638)();
              local_510 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,
                         auStack_1f8,0x10);
              if (local_510 != (undefined *)0x0) {
                lVar5 = *local_328;
                local_518 = (undefined *)0x0;
                do {
                  do {
                    if (*local_328 - lVar5 != 0) {
                      _objc_enumerationMutation(*local_328 - lVar5,puVar1);
                    }
                    local_2f8 = *(undefined8 *)(local_330 + (long)local_518 * 8);
                    puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                               PTR_s_currentUserCanManageRoom__0269ecc0,local_2f8);
                    puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
                    if (((ulong)puVar4 & 1) != 0) {
                      DAT_028c84a0 = 1;
                      local_200 = local_210;
                      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                 PTR_s_arrayWithObjects_count__0269cc70,&local_200,1);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar3,PTR_s_kickUsers_fromRoom_reason_keywor_0269ed18,puVar4,
                                 local_2f8,&cf_YR_,&cf___,0,0);
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                      DAT_028c84a0 = 0;
                    }
                    local_518 = local_518 + 1;
                  } while (local_518 < local_510);
                  local_510 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,
                             auStack_1f8,0x10);
                  local_518 = (undefined *)0x0;
                } while (local_510 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar1);
              local_228 = 0;
            }
          }
          _objc_storeStrong(&local_298);
          _objc_storeStrong(&local_290,0);
          _objc_storeStrong(&local_288,0);
        }
        else {
          local_228 = 1;
        }
        _objc_storeStrong(&local_238,0);
      }
      else {
        local_228 = 1;
      }
    }
    _objc_storeStrong(&local_230,0);
  }
  _objc_storeStrong(&local_218);
  _objc_storeStrong(&local_210,0);
  _objc_storeStrong(&local_208,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

