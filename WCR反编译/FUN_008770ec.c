// FUN_008770ec @ 008770ec

byte FUN_008770ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_268;
  ulong local_260;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  int local_150;
  ulong local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  uVar2 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
  if ((uVar2 == 0) ||
     (uVar2 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_129 = 0;
    local_150 = 1;
  }
  else {
    _memset(auStack_198,0,0x40);
    uVar2 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_220 != 0) {
      lVar4 = *local_188;
      local_228 = 0;
      do {
        do {
          if (*local_188 - lVar4 != 0) {
            _objc_enumerationMutation(*local_188 - lVar4,uVar2);
          }
          local_158 = *(ulong *)(local_190 + local_228 * 8);
          _memset(auStack_1e0,0,0x40);
          uVar1 = local_140;
          (*(code *)PTR__objc_retain_02578638)();
          local_260 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                     0x10);
          if (local_260 != 0) {
            lVar5 = *local_1d0;
            local_268 = 0;
            do {
              do {
                if (*local_1d0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1d0 - lVar5,uVar1);
                }
                local_1a0 = *(undefined8 *)(local_1d8 + local_268 * 8);
                uVar3 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_containsString__0269d0b0,local_1a0);
                if ((uVar3 & 1) != 0) {
                  local_129 = 1;
                  local_150 = 1;
                  goto LAB_0087743c;
                }
                local_268 = local_268 + 1;
              } while (local_268 < local_260);
              local_260 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                         auStack_128,0x10);
              local_268 = 0;
            } while (local_260 != 0);
          }
          local_150 = 0;
LAB_0087743c:
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if (local_150 != 0) goto LAB_008774d0;
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_228 = 0;
      } while (local_220 != 0);
    }
    local_150 = 0;
LAB_008774d0:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_150 == 0) {
      local_129 = 0;
      local_150 = 1;
    }
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

