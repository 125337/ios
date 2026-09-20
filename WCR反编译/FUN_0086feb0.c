// FUN_0086feb0 @ 0086feb0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_0086feb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  ulong local_118 [3];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  pcVar1 = DAT_028cd7d8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_6;
  local_d0 = param_5;
  local_c8 = param_1;
  uStack_c0 = param_2;
  local_b8 = param_3;
  uStack_b0 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  uStack_f8 = uStack_c0;
  local_100 = local_c8;
  uStack_e8 = uStack_b0;
  local_f0 = local_b8;
  (*pcVar1)(local_c8,uStack_c0,local_b8,uStack_b0,param_5,local_d8);
  local_e0 = param_5;
  if ((param_5 != 0) && ((DAT_028cd86c & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_118[0] = param_5;
    FUN_0088d7a8(param_5);
    (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_setUserInteractionEnabled__026caad8,1);
    _memset(auStack_160,0,0x40);
    uVar2 = local_118[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != 0) {
      lVar3 = *local_150;
      local_1b0 = 0;
      do {
        do {
          if (*local_150 - lVar3 != 0) {
            _objc_enumerationMutation(*local_150 - lVar3,uVar2);
          }
          local_120 = *(undefined8 *)(local_158 + local_1b0 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_setUserInteractionEnabled__026caad8,1);
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(local_118,0);
  }
  uVar2 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

