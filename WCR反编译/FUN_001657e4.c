// FUN_001657e4 @ 001657e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_001657e4(undefined8 param_1,int param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  byte local_1f0;
  ulong local_188;
  ulong local_180;
  char *local_138;
  char *local_130;
  byte local_125;
  int local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_d0;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  local_bc = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    local_d8 = 0;
    _memset(auStack_120,0,0x40);
    uVar1 = local_b8;
    FUN_0015e890();
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != 0) {
      lVar3 = *local_110;
      local_188 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_118 + local_188 * 8);
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_topId_0269f790);
          if ((uVar4 & 1) != 0) {
            uVar4 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_topId_0269f790);
            local_124 = (int)uVar4;
            if (local_124 == local_bc) {
              uVar4 = local_e0;
              FUN_0015ecd4(0);
              local_d0 = 2;
              local_d8 = uVar4;
              goto LAB_00165a90;
            }
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    local_d0 = 0;
LAB_00165a90:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_125 = 0;
    pcVar2 = "CGroupMgr";
    _objc_getClass();
    FUN_0015f0b8();
    _objc_retainAutoreleasedReturnValue();
    local_130 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,
                   PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8), ((ulong)pcVar2 & 1) == 0)) {
      pcVar2 = "CContactMgr";
      _objc_getClass();
      FUN_0015f0b8();
      _objc_retainAutoreleasedReturnValue();
      local_138 = pcVar2;
      if ((pcVar2 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,
                     PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8), ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8,local_b8,local_bc);
        local_125 = (byte)pcVar2;
      }
      _objc_storeStrong(&local_138,0);
    }
    else {
      pcVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8,local_b8,local_bc);
      local_125 = (byte)pcVar2;
    }
    if (local_d8 == 0) {
      local_1f0 = 0;
    }
    else {
      uVar1 = local_b8;
      FUN_00164bf4(local_b8,local_d8);
      local_1f0 = (byte)uVar1;
    }
    local_a9 = 1;
    if ((local_125 & 1) == 0) {
      local_a9 = local_1f0 & 1;
    }
    local_d0 = 1;
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

