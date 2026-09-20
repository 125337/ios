// FUN_00ee3fa8 @ 00ee3fa8

void FUN_00ee3fa8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  ulong local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = param_2;
  if (local_b0 == 0) {
    local_bc = 1;
  }
  else {
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_110,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_148 != 0) {
      lVar3 = *local_100;
      local_150 = 0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,uVar1);
          }
          lVar4 = *(long *)(local_108 + local_150 * 8);
          local_d0 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_tag_026cab98);
          if (lVar4 - local_b8 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeFromSuperview_026ca800);
          }
          else {
            FUN_00ee3fa8(lVar4 - local_b8,local_d0,local_b8);
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

