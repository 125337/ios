// FUN_01f47bc4 @ 01f47bc4

void FUN_01f47bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  byte local_ed;
  undefined4 local_ec;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_1;
  local_c8 = param_5;
  local_c0 = param_6;
  local_b8 = param_3;
  local_b0 = param_4;
  _objc_storeStrong(&local_d8);
  lVar4 = local_d8;
  local_e8 = param_1;
  local_e0 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_ec = 1;
  }
  else {
    local_ed = 0;
    _memset(auStack_138,0,0x40);
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_178 != 0) {
      lVar4 = *local_128;
      local_180 = 0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,uVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + local_180 * 8);
          lVar2 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_rangeOfString__0269d838,local_f8);
          if (lVar2 != 0x7fffffffffffffff) {
            local_ed = 1;
            local_ec = 2;
            goto LAB_01f47dc0;
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    local_ec = 0;
LAB_01f47dc0:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_ed & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,local_b8,local_b0
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_ec = 0;
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

