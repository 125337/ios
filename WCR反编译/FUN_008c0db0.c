// FUN_008c0db0 @ 008c0db0

long FUN_008c0db0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong local_268;
  ulong local_260;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  ulong local_148;
  long local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  local_140 = 0;
  uVar2 = local_138;
  FUN_008c0948();
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar2;
  _memset(auStack_1a0,0,0x40);
  uVar2 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_220 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_220 != 0) {
    lVar3 = *local_190;
    local_228 = 0;
    do {
      do {
        if (*local_190 - lVar3 != 0) {
          _objc_enumerationMutation(*local_190 - lVar3,uVar2);
        }
        local_160 = *(undefined8 *)(local_198 + local_228 * 8);
        _memset(auStack_1e8,0,0x40);
        uVar1 = local_130;
        (*(code *)PTR__objc_retain_02578638)();
        local_260 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        if (local_260 != 0) {
          lVar4 = *local_1d8;
          local_268 = 0;
          do {
            do {
              if (*local_1d8 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1d8 - lVar4,uVar1);
              }
              uVar5 = *(ulong *)(local_1e0 + local_268 * 8);
              local_1a8 = uVar5;
              FUN_008c1298(uVar5,local_160);
              if ((uVar5 & 1) != 0) {
                local_140 = local_140 + 1;
              }
              local_268 = local_268 + 1;
            } while (local_268 < local_260);
            local_260 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128
                       ,0x10);
            local_268 = 0;
          } while (local_260 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_228 = 0;
    } while (local_220 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar3 = local_140;
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

