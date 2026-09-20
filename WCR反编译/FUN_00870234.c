// FUN_00870234 @ 00870234

void FUN_00870234(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028cd7e0)(param_1,param_2);
  uVar1 = local_b0;
  if ((DAT_028cd86c & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = uVar1;
    FUN_0088d7a8(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setUserInteractionEnabled__026caad8,1);
    _memset(auStack_118,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar2 = *local_108;
      local_148 = 0;
      do {
        do {
          if (*local_108 - lVar2 != 0) {
            _objc_enumerationMutation(*local_108 - lVar2,uVar1);
          }
          local_d8 = *(undefined8 *)(local_110 + local_148 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_setUserInteractionEnabled__026caad8,1);
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

