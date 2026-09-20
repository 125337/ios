// FUN_0021e0c4 @ 0021e0c4

void FUN_0021e0c4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined *local_e0;
  undefined *local_c8;
  int local_bc;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = (undefined *)0x0;
    local_bc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    local_c8 = puVar1;
    _memset(auStack_120,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != 0) {
      lVar3 = *local_110;
      local_150 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar2);
          }
          puVar4 = *(undefined **)(local_118 + local_150 * 8);
          local_e0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_class_0269cd60);
          puVar1 = local_e0;
          if (puVar4 == local_c8) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar1;
            local_bc = 1;
            goto LAB_0021e31c;
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    local_bc = 0;
LAB_0021e31c:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_bc == 0) {
      local_b0 = (undefined *)0x0;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

