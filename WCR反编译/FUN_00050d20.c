// FUN_00050d20 @ 00050d20

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00050d20(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint local_1d0;
  ulong local_1a0;
  ulong local_198;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  int local_e4;
  long local_e0 [3];
  long local_c8;
  ulong local_c0;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar4 = local_b8;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_c8;
  local_e0[0] = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_a9 = 0;
    local_e4 = 1;
  }
  else {
    _memset(auStack_130,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar4 = *local_120;
      local_1a0 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_128 + local_1a0 * 8);
          local_f0 = uVar5;
          FUN_0004fa34();
          _objc_retainAutoreleasedReturnValue();
          local_138 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
          if (uVar5 == 0) {
            local_e4 = 3;
          }
          else {
            uVar5 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_isEqualToString__0269ccc8,local_c8);
            local_1d0 = 1;
            if ((uVar5 & 1) == 0) {
              uVar5 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1d0 = (uint)uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar5);
            }
            if ((local_1d0 & 1) == 0) {
              local_e4 = 0;
            }
            else {
              local_a9 = 1;
              local_e4 = 1;
            }
          }
          _objc_storeStrong(&local_138,0);
          if ((local_e4 != 0) && (local_e4 != 3)) goto LAB_00051164;
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    local_e4 = 0;
LAB_00051164:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_e4 == 0) {
      local_a9 = 0;
      local_e4 = 1;
    }
  }
  _objc_storeStrong(local_e0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

