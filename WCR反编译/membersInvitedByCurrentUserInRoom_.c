// membersInvitedByCurrentUserInRoom: @ 00ed4074

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::membersInvitedByCurrentUserInRoom_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  ID local_d8;
  ID local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_currentUserWxid_0269ec70);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_b8;
  local_d8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isChatRoomID__0269ec68,local_d0);
  if (((IVar1 & 1) == 0) ||
     (IVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
     IVar1 == 0)) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_b0 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar3;
    _memset(auStack_130,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_wcr_currentMemberUserNamesInRoom_026ab650,local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_160 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_160 != 0) {
      lVar5 = *local_120;
      local_168 = 0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,IVar1);
          }
          local_f0 = *(undefined8 *)(local_128 + local_168 * 8);
          IVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
          if ((IVar2 == 0) ||
             (IVar2 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_138,PTR_s_isEqualToString__0269ccc8,local_d8), (IVar2 & 1) != 0)) {
            local_dc = 3;
          }
          else {
            IVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_inviterWxidForUser_inRoom__026ab658,local_138,local_d0);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar2);
            if ((IVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_138);
            }
            local_dc = 0;
          }
          _objc_storeStrong(&local_138,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
    local_dc = 1;
    local_b0 = puVar3;
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

