// pendingTargetUserNames @ 00edf664

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatRoomMuteHelper::pendingTargetUserNames(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong local_2a8;
  ulong local_2a0;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 *local_230;
  undefined1 *local_218;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined4 local_1ac;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_140 = param_2;
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatRoomMuteManageIncludeGroups_026ab760);
  _objc_retainAutoreleasedReturnValue();
  local_218 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    local_218 = *(undefined1 **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_218;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_chatRoomMuteManageExcludeGroups_026ab768);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    local_230 = *(undefined1 **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = local_230;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_chatRoomMuteManageRule_026ab770);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar1;
    _memset(auStack_1a8,0,0x40);
    puVar2 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_258 != (undefined1 *)0x0) {
      lVar5 = *local_198;
      local_260 = (undefined1 *)0x0;
      do {
        do {
          if (*local_198 - lVar5 != 0) {
            _objc_enumerationMutation(*local_198 - lVar5,puVar2);
          }
          local_168 = *(undefined8 *)(local_1a0 + (long)local_260 * 8);
          IVar4 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_isChatRoomUserName__0269eff8,local_168);
          if ((IVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_168);
          }
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_260 = (undefined1 *)0x0;
      } while (local_258 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
    local_1ac = 1;
    local_130 = puVar1;
    _objc_storeStrong(&local_160,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1b8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar3;
    _memset(auStack_208,0,0x40);
    IVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_allChatRoomUserNames_026ab778);
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2a0 != 0) {
      lVar5 = *local_1f8;
      local_2a8 = 0;
      do {
        do {
          if (*local_1f8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar5,IVar4);
          }
          local_1c8 = *(undefined8 *)(local_200 + local_2a8 * 8);
          puVar1 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_containsObject__0269cbb8,local_1c8);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_1c8);
          }
          local_2a8 = local_2a8 + 1;
        } while (local_2a8 < local_2a0);
        local_2a0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2a8 = 0;
      } while (local_2a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar1 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_copy_0269d150);
    local_1ac = 1;
    local_130 = puVar1;
    _objc_storeStrong(&local_1c0);
    _objc_storeStrong(&local_1b8,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

