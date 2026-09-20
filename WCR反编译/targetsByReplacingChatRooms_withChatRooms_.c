// targetsByReplacingChatRooms:withChatRooms: @ 014b9234

/* Function Stack Size: 0x20 bytes */

ID WCRefineScheduledTask::targetsByReplacingChatRooms_withChatRooms_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  undefined *local_278;
  ulong local_250;
  ulong local_248;
  ulong local_210;
  ulong local_208;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  undefined *local_150;
  ulong local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar1;
  _memset(auStack_198,0,0x40);
  uVar2 = local_140;
  FUN_014b56f0();
  _objc_retainAutoreleasedReturnValue();
  local_208 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_208 != 0) {
    lVar4 = *local_188;
    local_210 = 0;
    do {
      do {
        if (*local_188 - lVar4 != 0) {
          _objc_enumerationMutation(*local_188 - lVar4,uVar2);
        }
        local_158 = *(undefined8 *)(local_190 + local_210 * 8);
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_isChatRoomUsername__026af4a0,local_158);
        if ((IVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_158);
        }
        local_210 = local_210 + 1;
      } while (local_210 < local_208);
      local_208 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_210 = 0;
    } while (local_208 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_1e0,0,0x40);
  uVar2 = local_148;
  FUN_014b56f0();
  _objc_retainAutoreleasedReturnValue();
  local_248 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_248 != 0) {
    lVar4 = *local_1d0;
    local_250 = 0;
    do {
      do {
        if (*local_1d0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar4,uVar2);
        }
        local_1a0 = *(undefined8 *)(local_1d8 + local_250 * 8);
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_isChatRoomUsername__026af4a0,local_1a0);
        if ((IVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1a0);
        }
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10)
      ;
      local_250 = 0;
    } while (local_248 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_278 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_278 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_278;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

