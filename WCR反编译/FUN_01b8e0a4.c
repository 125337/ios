// FUN_01b8e0a4 @ 01b8e0a4

void FUN_01b8e0a4(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  undefined4 local_b8;
  byte local_b1;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b1 = param_2;
  if (local_b0 == 0) {
    local_b8 = 1;
  }
  else {
    if ((param_2 & 1) == 0) {
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_startAutoPlay_026c0258);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_startAutoPlay_026c0258);
      }
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_playVideo_026c0260);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_playVideo_026c0260);
      }
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_play_0269f2b0);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_play_0269f2b0);
      }
    }
    else {
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_stopPlayer_026a0568);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stopPlayer_026a0568);
      }
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_pause_0269f2d8);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pause_0269f2d8);
      }
    }
    _memset(auStack_100,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_130 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_130 != 0) {
      lVar2 = *local_f0;
      local_138 = 0;
      do {
        do {
          if (*local_f0 - lVar2 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar2,uVar1);
          }
          local_c0 = *(undefined8 *)(local_f8 + local_138 * 8);
          FUN_01b8e0a4(local_c0,local_b1 & 1);
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
        local_130 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_138 = 0;
      } while (local_130 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_b8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

