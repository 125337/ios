// FUN_014e0fcc @ 014e0fcc

uint FUN_014e0fcc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  ulong local_318;
  ulong local_310;
  ulong local_2d8;
  ulong local_2d0;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined8 local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  uint local_1b4;
  char *local_1a0;
  char *local_198 [4];
  char *local_178;
  char *local_170;
  char *local_168;
  undefined *local_160;
  int local_154;
  long local_150;
  long local_148;
  uint local_13c;
  undefined8 local_138;
  long *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  _objc_storeStrong(&local_148,param_1);
  lVar6 = local_148;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_150 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if ((lVar6 == 0) ||
     (puVar2 = PTR_WCRefineMessageBlockSupport_026ce0f8,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_150),
     ((ulong)puVar2 & 1) == 0)) {
    local_13c = 0;
    local_154 = 1;
  }
  else {
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_13c = 0;
      local_154 = 1;
    }
    else {
      pcVar3 = "CContactMgr";
      _objc_getClass();
      FUN_014e23b8();
      _objc_retainAutoreleasedReturnValue();
      local_170 = (char *)0x0;
      local_168 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_getContactByName__0269d178,local_150);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_170;
        local_170 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_178 = (char *)0x0;
      pcVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_valueForKey__0269d128,&cf_m_ChatRoomData);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_178;
      local_178 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_198[0] = (char *)0x0;
      pcVar3 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_valueForKey__0269d128,&cf_m_dicData);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_1a0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,local_160);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_198[0];
        local_198[0] = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      _objc_storeStrong(&local_1a0,0);
      if (local_198[0] == (char *)0x0) {
        pcVar4 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_178,PTR_s_valueForKey__0269d128,&cf_m_dicNewData);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_198[0];
        local_198[0] = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      local_1b4 = 0;
      local_130 = &DAT_028e3728;
      local_138 = 0;
      _objc_storeStrong(&local_138,&PTR___NSConcreteGlobalBlock_02586198);
      if (*local_130 + 1 != 0) {
        _dispatch_once(*local_130 + 1,local_130,local_138);
      }
      _objc_storeStrong(&local_138,0);
      _memset(auStack_200,0,0x40);
      uVar1 = DAT_028e3720;
      (*(code *)PTR__objc_retain_02578638)();
      local_2d0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10);
      if (local_2d0 != 0) {
        lVar6 = *local_1f0;
        local_2d8 = 0;
        do {
          do {
            if (*local_1f0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1f0 - lVar6,uVar1);
            }
            local_1c0 = *(undefined8 *)(local_1f8 + local_2d8 * 8);
            pcVar3 = local_198[0];
            FUN_014e48f4(local_198[0],local_1c0);
            local_1b4 = (uint)pcVar3;
            if (1000000000 < local_1b4) {
              local_154 = 1;
              local_13c = local_1b4;
              goto LAB_014e15f4;
            }
            local_1b4 = 0;
            local_2d8 = local_2d8 + 1;
          } while (local_2d8 < local_2d0);
          local_2d0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,
                     0x10);
          local_2d8 = 0;
        } while (local_2d0 != 0);
      }
      local_154 = 0;
LAB_014e15f4:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_154 == 0) {
        _memset(auStack_248,0,0x40);
        uVar1 = DAT_028e3720;
        (*(code *)PTR__objc_retain_02578638)();
        local_310 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_128,
                   0x10);
        if (local_310 != 0) {
          lVar6 = *local_238;
          local_318 = 0;
          do {
            do {
              if (*local_238 - lVar6 != 0) {
                _objc_enumerationMutation(*local_238 - lVar6,uVar1);
              }
              local_208 = *(undefined8 *)(local_240 + local_318 * 8);
              pcVar3 = local_178;
              FUN_014e48f4(local_178,local_208);
              local_1b4 = (uint)pcVar3;
              if (1000000000 < local_1b4) {
                local_154 = 1;
                local_13c = local_1b4;
                goto LAB_014e1778;
              }
              local_1b4 = 0;
              local_318 = local_318 + 1;
            } while (local_318 < local_310);
            local_310 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_128
                       ,0x10);
            local_318 = 0;
          } while (local_310 != 0);
        }
        local_154 = 0;
LAB_014e1778:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_154 == 0) {
          pcVar3 = local_170;
          FUN_014e48f4(local_170,&cf_m_uiChatRoomJoinTime);
          local_1b4 = (uint)pcVar3;
          if (local_1b4 < 0x3b9aca01) {
            local_13c = 0;
            local_154 = 1;
          }
          else {
            local_154 = 1;
            local_13c = local_1b4;
          }
        }
      }
      _objc_storeStrong(local_198);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_168,0);
    }
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_13c;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

