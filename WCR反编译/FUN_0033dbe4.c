// FUN_0033dbe4 @ 0033dbe4

long FUN_0033dbe4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_280;
  ulong local_278;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  long local_1a8;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  int local_144;
  ulong local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  if (local_138 == 0) {
    local_130 = 0;
    local_144 = 1;
  }
  else {
    _memset(auStack_190,0,0x40);
    uVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
    if (local_228 != 0) {
      lVar3 = *local_180;
      local_230 = 0;
      do {
        do {
          if (*local_180 - lVar3 != 0) {
            _objc_enumerationMutation(*local_180 - lVar3,uVar1);
          }
          local_150 = *(undefined8 *)(local_188 + local_230 * 8);
          lVar2 = local_138;
          FUN_0033e248(local_138,local_150);
          local_1a8 = lVar2;
          if (0 < lVar2) {
            local_144 = 1;
            local_130 = lVar2;
            goto LAB_0033ddec;
          }
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
                  );
        local_230 = 0;
      } while (local_228 != 0);
    }
    local_144 = 0;
LAB_0033ddec:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_144 == 0) {
      _memset(auStack_1f0,0,0x40);
      uVar1 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_278 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10)
      ;
      if (local_278 != 0) {
        lVar3 = *local_1e0;
        local_280 = 0;
        do {
          do {
            if (*local_1e0 - lVar3 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar3,uVar1);
            }
            local_1b0 = *(undefined8 *)(local_1e8 + local_280 * 8);
            lVar2 = local_138;
            FUN_0033e47c(local_138,local_1b0);
            if (0 < lVar2) {
              local_144 = 1;
              local_130 = lVar2;
              goto LAB_0033dfac;
            }
            local_280 = local_280 + 1;
          } while (local_280 < local_278);
          local_278 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                     0x10);
          local_280 = 0;
        } while (local_278 != 0);
      }
      local_144 = 0;
LAB_0033dfac:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_144 == 0) {
        local_130 = 0;
        local_144 = 1;
      }
    }
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

