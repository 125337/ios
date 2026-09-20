// FUN_00280ba0 @ 00280ba0

void FUN_00280ba0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_d0;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    uVar1 = local_b8;
    FUN_00280f8c();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = 1;
    local_b0 = uVar1;
  }
  else {
    local_d8 = 0;
    local_e0 = 0;
    _memset(auStack_128,0,0x40);
    uVar1 = local_b8;
    FUN_002786a0(local_b8,0);
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != 0) {
      lVar3 = *local_118;
      local_180 = 0;
      do {
        do {
          if (*local_118 - lVar3 != 0) {
            _objc_enumerationMutation(*local_118 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_120 + local_180 * 8);
          local_e8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if (((uVar2 & 1) != 0) && (uVar2 = local_e8, FUN_00272348(), local_e0 < uVar2)) {
            local_e0 = uVar2;
            _objc_storeStrong(&local_d8,local_e8);
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_d0 = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

