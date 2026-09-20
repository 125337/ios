// userNames:needingAction: @ 00edfc2c

/* Function Stack Size: 0x20 bytes */

ID WCRefineChatRoomMuteHelper::userNames_needingAction_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  ulong local_148;
  byte local_12d;
  ID local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  long_long local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  _memset(auStack_120,0,0x40);
  if (local_c0 == 0) {
    local_148 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_148 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar5 = *local_110;
    local_168 = 0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,local_148);
        }
        local_e0 = *(undefined8 *)(local_118 + local_168 * 8);
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_trimmedString__0269ec98,local_e0);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_b0;
        local_128 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isChatRoomUserName__0269eff8,IVar3);
        if (((IVar4 & 1) != 0) &&
           (puVar1 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_128),
           ((ulong)puVar1 & 1) == 0)) {
          local_12d = 0;
          if (local_c8 == 0) {
            IVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_isMutedUserName__026ab780,local_128);
            local_12d = ((byte)IVar3 ^ 1) & 1;
          }
          else if (local_c8 == 1) {
            IVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_isMutedUserName__026ab780,local_128);
            local_12d = (byte)IVar3;
          }
          else if (local_c8 == 2) {
            IVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_isFoldedUserName__026ab788,local_128);
            local_12d = ((byte)IVar3 ^ 1) & 1;
          }
          else if (local_c8 == 3) {
            IVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_isFoldedUserName__026ab788,local_128);
            local_12d = (byte)IVar3;
          }
          if ((local_12d & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_128);
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_128);
          }
        }
        _objc_storeStrong(&local_128,0);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                 0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_148);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

