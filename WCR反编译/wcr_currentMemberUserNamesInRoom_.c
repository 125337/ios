// wcr_currentMemberUserNamesInRoom: @ 00ed349c

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::wcr_currentMemberUserNamesInRoom_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_270;
  ulong local_268;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
  undefined4 local_154;
  ID local_150;
  undefined8 local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  IVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_trimmedString__0269ec98,local_148);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_138;
  local_150 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isChatRoomID__0269ec68,IVar1);
  if ((IVar2 & 1) == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_154 = 1;
    local_130 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    _memset(auStack_1a8,0,0x40);
    IVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_membersInRoom__0269ed78,local_150);
    _objc_retainAutoreleasedReturnValue();
    local_218 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_218 != 0) {
      lVar4 = *local_198;
      local_220 = 0;
      do {
        do {
          if (*local_198 - lVar4 != 0) {
            _objc_enumerationMutation(*local_198 - lVar4,IVar1);
          }
          local_168 = *(undefined8 *)(local_1a0 + local_220 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_wcr_addMemberUserName_into__026ab640,local_168,local_160);
          local_220 = local_220 + 1;
        } while (local_220 < local_218);
        local_218 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_220 = 0;
      } while (local_218 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _memset(auStack_1f0,0,0x40);
    IVar1 = local_138;
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_wcr_contactForName__026ab630,local_150);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_chatRoomDataMemberUserNames__026ab648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_268 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10);
    if (local_268 != 0) {
      lVar4 = *local_1e0;
      local_270 = 0;
      do {
        do {
          if (*local_1e0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1e0 - lVar4,IVar1);
          }
          local_1b0 = *(undefined8 *)(local_1e8 + local_270 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_wcr_addMemberUserName_into__026ab640,local_1b0,local_160);
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                   0x10);
        local_270 = 0;
      } while (local_268 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_154 = 1;
    local_130 = puVar3;
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

