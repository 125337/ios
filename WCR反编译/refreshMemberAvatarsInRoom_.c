// refreshMemberAvatarsInRoom: @ 00ed6924

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineChatRoomKickHelper::refreshMemberAvatarsInRoom_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  unsigned_long_long local_100;
  ID local_f8;
  undefined *local_f0;
  ID local_e8;
  ID local_e0;
  undefined4 local_d4;
  ID local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  unsigned_long_long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_c8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b8;
  local_d0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isChatRoomID__0269ec68,IVar1);
  if ((IVar2 & 1) == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_wcr_headImageMgr_026ab6a8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar1;
    if (IVar1 == 0) {
      local_b0 = 0;
      local_d4 = 1;
    }
    else {
      IVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_wcr_headImageCacherFromMgr__026ab6b0,IVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      local_e8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,local_d0);
      IVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_membersInRoom__0269ed78,local_d0);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
      if (IVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_unionSet__026a2cb0,local_f8);
      }
      local_100 = 0;
      _memset(auStack_148,0,0x40);
      puVar3 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      if (local_168 != (undefined *)0x0) {
        lVar4 = *local_138;
        local_170 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar4 != 0) {
              _objc_enumerationMutation(*local_138 - lVar4,puVar3);
            }
            local_108 = *(undefined8 *)(local_140 + (long)local_170 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_wcr_discardHeadCacheForUser_head_026ab6b8,local_108,local_e0,
                       local_e8);
            IVar1 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_wcr_pushHeadImageUpdateForUser_h_026ab6c0,local_108,local_e0);
            local_100 = local_100 + IVar1;
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_170 = (undefined *)0x0;
        } while (local_168 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_b0 = local_100;
      local_d4 = 1;
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

