// refreshGroupGenderDisplayForContact: @ 015330b8

/* Function Stack Size: 0x18 bytes */

bool WCRefineTopBarProfileCardPresenter::refreshGroupGenderDisplayForContact_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  dispatch_time_t dVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong local_278;
  ulong local_270;
  uint local_21c;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  ulong local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  ulong local_1c8;
  ulong local_1c0 [2];
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  ulong local_148;
  ulong local_140;
  byte local_131;
  char *local_118;
  undefined *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  byte local_d9;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  if (local_c8 == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    uVar1 = local_c8;
    FUN_01533df4(local_c8,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      uVar2 = local_c8;
      FUN_01533eb8(local_c8,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_d8;
      local_d8 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf__chatroom);
    local_21c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_c8;
      FUN_01533f64(local_c8,PTR_s_isChatroom_0269e248,0);
      local_21c = (uint)uVar1;
    }
    local_d9 = (byte)local_21c & 1;
    if (((local_21c & 1) == 0) ||
       (uVar1 = local_d8,
       (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_hasSuffix__0269d018,&cf__chatroom_),
       (uVar1 & 1) != 0)) {
      local_a9 = 0;
      local_cc = 1;
    }
    else {
      pcVar3 = "CGroupMgr";
      _objc_getClass();
      local_e8 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_a9 = 0;
        local_cc = 1;
      }
      else {
        local_f0 = (char *)0x0;
        pcVar3 = "MMContext";
        _objc_getClass();
        local_f8 = pcVar3;
        if ((pcVar3 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
           ((ulong)pcVar3 & 1) != 0)) {
          pcVar3 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_currentContext_0269d5f8);
          _objc_retainAutoreleasedReturnValue();
          local_100 = pcVar3;
          if ((pcVar3 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
             ((ulong)pcVar3 & 1) != 0)) {
            pcVar4 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_getService__0269d170,local_e8);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_f0;
            local_f0 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          _objc_storeStrong(&local_100,0);
        }
        if (local_f0 == (char *)0x0) {
          pcVar3 = "MMServiceCenter";
          _objc_getClass();
          FUN_01533df4();
          _objc_retainAutoreleasedReturnValue();
          local_108 = pcVar3;
          if ((pcVar3 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
             ((ulong)pcVar3 & 1) != 0)) {
            pcVar4 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_getService__0269d170,local_e8);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_f0;
            local_f0 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          _objc_storeStrong(&local_108,0);
        }
        local_110 = PTR_s_GetChatRoomMemberDetail__026b03f8;
        if ((local_f0 == (char *)0x0) ||
           (pcVar3 = local_f0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_f0,PTR_s_respondsToSelector__026ca818,
                      PTR_s_GetChatRoomMemberDetail__026b03f8), ((ulong)pcVar3 & 1) == 0)) {
          local_a9 = 0;
          local_cc = 1;
        }
        else {
          pcVar3 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_valueForKey__0269d128,&cf_m_dicGetChatRoomMemberDetailCache);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          local_118 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          if ((((ulong)pcVar3 & 1) != 0) &&
             (uVar1 = local_d8,
             (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0), uVar1 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_removeObjectForKey__0269d700,local_d8);
          }
          _objc_storeStrong(&local_118,0);
          pcVar3 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_110,local_c8);
          local_131 = (byte)pcVar3;
          uVar1 = local_c8;
          FUN_01534040();
          _objc_retainAutoreleasedReturnValue();
          local_140 = uVar1;
          FUN_0152b7ec();
          _objc_retainAutoreleasedReturnValue();
          local_150 = PTR_s_getContactsFromServer_withScene__026b0400;
          pcVar6 = &cf_getContactByName_;
          local_148 = uVar1;
          _NSSelectorFromString();
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          uVar1 = local_140;
          local_158 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
          _objc_retainAutoreleasedReturnValue();
          local_160 = puVar5;
          if ((local_148 != 0) &&
             (uVar1 = local_148,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_148,PTR_s_respondsToSelector__026ca818,local_158), (uVar1 & 1) != 0))
          {
            _memset(auStack_1a8,0,0x40);
            uVar1 = local_140;
            (*(code *)PTR__objc_retain_02578638)();
            local_270 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                       0x10);
            if (local_270 != 0) {
              lVar10 = *local_198;
              local_278 = 0;
              do {
                do {
                  if (*local_198 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_198 - lVar10,uVar1);
                  }
                  local_168 = *(undefined8 *)(local_1a0 + local_278 * 8);
                  uVar2 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,local_158,local_168);
                  _objc_retainAutoreleasedReturnValue();
                  local_1b0 = uVar2;
                  if ((uVar2 != 0) &&
                     ((*(code *)PTR__objc_msgSend_02578628)
                                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isValid_026a5838),
                     (uVar2 & 1) != 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_addObject__0269d180,local_1b0);
                  }
                  _objc_storeStrong(&local_1b0,0);
                  local_278 = local_278 + 1;
                } while (local_278 < local_270);
                local_270 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,
                           auStack_a8,0x10);
                local_278 = 0;
              } while (local_270 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          if (((local_148 != 0) &&
              (puVar5 = local_160,
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0),
              puVar5 != (undefined *)0x0)) &&
             (uVar1 = local_148,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_148,PTR_s_respondsToSelector__026ca818,local_150), (uVar1 & 1) != 0))
          {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,local_150,local_160,0);
          }
          uVar1 = local_c8;
          FUN_0152eb20();
          _objc_retainAutoreleasedReturnValue();
          local_1c0[0] = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
          if (uVar1 != 0) {
            FUN_0152ecd8(uVar1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar1);
            dVar7 = _dispatch_time(0,1600000000);
            puVar9 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            puVar8 = puVar9;
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_1c0[0];
            puVar5 = PTR___NSConcreteStackBlock_02578660;
            local_1e8 = PTR___NSConcreteStackBlock_02578660;
            local_1e0 = 0xc2000000;
            local_1dc = 0;
            local_1d8 = FUN_01534954;
            local_1d0 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_1c8 = uVar1;
            _dispatch_after(dVar7,puVar8,&local_1e8);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            dVar7 = _dispatch_time(0,4000000000);
            _objc_retainAutoreleaseReturnValue(puVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_1c0[0];
            local_210 = puVar5;
            local_208 = 0xc2000000;
            local_204 = 0;
            local_200 = FUN_015349e4;
            local_1f8 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_1f0 = uVar1;
            _dispatch_after(dVar7,puVar9,&local_210);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            _objc_storeStrong(&local_1f0);
            _objc_storeStrong(&local_1c8,0);
          }
          local_a9 = local_131 & 1;
          local_cc = 1;
          _objc_storeStrong(local_1c0);
          _objc_storeStrong(&local_160,0);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
        }
        _objc_storeStrong(&local_f0,0);
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

