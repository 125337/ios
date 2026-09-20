// FUN_00164568 @ 00164568

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00164568(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  byte local_208;
  ulong local_1a8;
  ulong local_1a0;
  char *local_140;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  char *local_e0;
  byte local_d1;
  undefined4 local_d0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  local_c0 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (local_c0 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    local_d1 = 0;
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0015f0b8();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,
                   PTR_s_removeChatRoomTopMsgLocalWithUse_0269f600), ((ulong)pcVar2 & 1) == 0)) {
      _memset(auStack_128,0,0x40);
      uVar1 = local_b8;
      FUN_0015e890();
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1a0 != 0) {
        lVar3 = *local_118;
        local_1a8 = 0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_120 + local_1a8 * 8);
            local_e8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_msgSvrID_0269f678);
            if ((((uVar4 & 1) != 0) &&
                (uVar4 = local_e8,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_topId_0269f790),
                (uVar4 & 1) != 0)) &&
               (uVar4 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_msgSvrID_0269f678),
               local_130 = uVar4, uVar4 == local_c0)) {
              uVar4 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_topId_0269f790);
              local_134 = (undefined4)uVar4;
              pcVar2 = "CGroupMgr";
              _objc_getClass();
              FUN_0015f0b8();
              _objc_retainAutoreleasedReturnValue();
              local_140 = pcVar2;
              if ((pcVar2 == (char *)0x0) ||
                 ((*(code *)PTR__objc_msgSend_02578628)
                            (pcVar2,PTR_s_respondsToSelector__026ca818,
                             PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8),
                 ((ulong)pcVar2 & 1) == 0)) {
                if ((local_e0 != (char *)0x0) &&
                   (pcVar2 = local_e0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_e0,PTR_s_respondsToSelector__026ca818,
                              PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8),
                   ((ulong)pcVar2 & 1) != 0)) {
                  pcVar2 = local_e0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0,PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8,local_b8,
                             local_134);
                  local_d1 = (byte)pcVar2;
                }
              }
              else {
                pcVar2 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8,local_b8,
                           local_134);
                local_d1 = (byte)pcVar2;
              }
              local_d0 = 2;
              _objc_storeStrong(&local_140,0);
              goto LAB_00164a64;
            }
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 < local_1a0);
          local_1a0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1a8 = 0;
        } while (local_1a0 != 0);
      }
      local_d0 = 0;
LAB_00164a64:
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      pcVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_removeChatRoomTopMsgLocalWithUse_0269f600,local_b8,local_c0);
      local_d1 = (byte)pcVar2;
    }
    uVar1 = local_b8;
    FUN_00164bf4(local_b8,local_c0);
    local_208 = 1;
    if ((local_d1 & 1) == 0) {
      local_208 = (byte)uVar1;
    }
    local_a9 = local_208 & 1;
    local_d0 = 1;
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

