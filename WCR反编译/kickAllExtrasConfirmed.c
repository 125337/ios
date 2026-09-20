// kickAllExtrasConfirmed @ 0189fd20

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomDuplicateJoinViewController::kickAllExtrasConfirmed(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_150;
  ulong local_148;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  long local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_c8 = 0;
  local_c0 = puVar2;
  _memset(auStack_110,0,0x40);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar5 = *local_100;
    local_150 = 0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,IVar3);
        }
        local_d0 = *(undefined8 *)(local_108 + local_150 * 8);
        puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                   PTR_s_preferredKeepRoomForDuplicate_ke_0269edb0,local_d0,local_c0,0);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_b0;
        local_118 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_kickItem_keepRoom__026b74a8,local_d0,puVar1);
        if ((IVar4 & 1) != 0) {
          local_c8 = local_c8 + 1;
        }
        _objc_storeStrong(&local_118,0);
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scanDuplicates_026b7468);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Yt);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

