// FUN_004d2538 @ 004d2538

byte FUN_004d2538(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  int local_c8;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
     uVar2 < 2)) {
    local_a9 = 0;
    local_c8 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar3 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_108 + local_158 * 8);
          local_d0 = uVar4;
          FUN_004d2854();
          if ((uVar4 & 1) == 0) {
            local_a9 = 0;
            local_c8 = 1;
            goto LAB_004d27b8;
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_c8 = 0;
LAB_004d27b8:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_c8 == 0) {
      local_a9 = 1;
      local_c8 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

