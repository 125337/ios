// FUN_01aaf218 @ 01aaf218

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01aaf218(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint local_2bc;
  ulong local_2a0;
  ulong local_298;
  ulong local_260;
  ulong local_258;
  ulong local_240;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  ulong local_150;
  long local_148;
  long local_140;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  lVar6 = param_1 + 0x20;
  local_140 = param_1;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_148 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_release_02578630)(lVar6);
  uVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_150 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _memset(auStack_198,0,0x40);
  uVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_240 = uVar7;
  if (uVar7 == 0) {
    local_240 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(uVar7);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_258 = local_240;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_240,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_258 != 0) {
    lVar6 = *local_188;
    local_260 = 0;
    do {
      do {
        if (*local_188 - lVar6 != 0) {
          _objc_enumerationMutation(*local_188 - lVar6,local_240);
        }
        local_158 = *(undefined8 *)(local_190 + local_260 * 8);
        uVar3 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,local_158);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_removeObject__0269d678,local_158);
        }
        local_260 = local_260 + 1;
      } while (local_260 < local_258);
      local_258 = local_240;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_240,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                 0x10);
      local_260 = 0;
    } while (local_258 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_240);
  _memset(auStack_1e0,0,0x40);
  uVar3 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_298 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10);
  if (local_298 != 0) {
    lVar6 = *local_1d0;
    local_2a0 = 0;
    do {
      do {
        if (*local_1d0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar6,uVar3);
        }
        uVar7 = *(ulong *)(local_1d8 + local_2a0 * 8);
        local_1a0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_2bc = 0;
        if ((uVar4 & 1) == 0) {
          uVar4 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2bc = (uint)uVar5 ^ 1;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        (*(code *)PTR__objc_release_02578630)(uVar7);
        if ((local_2bc & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_1a0);
        }
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < local_298);
      local_298 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10)
      ;
      local_2a0 = 0;
    } while (local_298 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar6);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

