// FUN_0158921c @ 0158921c

byte FUN_0158921c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  cfstringStruct *local_e8;
  undefined1 local_d9;
  cfstringStruct *local_d8;
  int local_cc;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar1 = local_c0;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar1;
  if ((local_b8 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0), uVar1 == 0)) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    pcVar2 = &cf_isChatRoomDismissed;
    _NSSelectorFromString();
    uVar1 = local_b8;
    local_d8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_d8);
      local_d9 = (undefined1)uVar1;
      if ((uVar1 & 1) != 0) {
        local_a9 = 0;
        local_cc = 1;
        goto LAB_01589594;
      }
    }
    pcVar2 = &cf_IsUserInChatRoom_;
    _NSSelectorFromString();
    uVar1 = local_b8;
    local_e8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_b8;
      FUN_01534040();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar1;
      _memset(auStack_138,0,0x40);
      uVar1 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_168 != 0) {
        lVar4 = *local_128;
        local_170 = 0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,uVar1);
            }
            uVar3 = local_c8;
            uVar5 = *(undefined8 *)(local_130 + local_170 * 8);
            local_f8 = uVar5;
            FUN_01528c84();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if ((uVar3 & 1) != 0) {
              local_a9 = 1;
              local_cc = 1;
              goto LAB_01589548;
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      local_cc = 0;
LAB_01589548:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_cc == 0) {
        local_a9 = 0;
        local_cc = 1;
      }
      _objc_storeStrong(&local_f0,0);
    }
    else {
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_e8,local_c8);
      local_a9 = (byte)uVar1 & 1;
      local_cc = 1;
    }
  }
LAB_01589594:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

