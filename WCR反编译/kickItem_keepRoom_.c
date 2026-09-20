// kickItem:keepRoom: @ 018a0018

/* Function Stack Size: 0x20 bytes */

bool WCRefineChatRoomDuplicateJoinViewController::kickItem_keepRoom_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_180;
  undefined *local_178;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  byte local_f1;
  undefined *local_f0;
  undefined4 local_e4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  SEL local_c8;
  ID local_c0;
  byte local_b1;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  _objc_storeStrong(&local_d0,param_3);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_4);
  puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_user);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_trimmedString__0269ec98);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_b1 = 0;
    local_e4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,
               PTR_s_roomsToKickForDuplicate_keepRoom_0269edb8,local_d0,local_d8);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    local_f0 = puVar2;
    _memset(auStack_140,0,0x40);
    puVar2 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_178 != (undefined *)0x0) {
      lVar5 = *local_130;
      local_180 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,puVar2);
          }
          local_100 = *(undefined8 *)(local_138 + (long)local_180 * 8);
          puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                     PTR_s_currentUserCanManageRoom__0269ecc0,local_100);
          puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          if (((ulong)puVar3 & 1) != 0) {
            local_b0 = local_e0;
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_b0,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_kickUsers_fromRoom_reason_keywor_0269ed18,puVar3,local_100,
                       &cf_YR_,&::cf___,0,0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (((ulong)puVar4 & 1) != 0) {
              local_f1 = 1;
            }
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_180 = (undefined *)0x0;
      } while (local_178 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_f1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgS_v_eCgPbSOb);
    }
    local_b1 = local_f1 & 1;
    local_e4 = 1;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

