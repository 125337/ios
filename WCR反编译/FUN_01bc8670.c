// FUN_01bc8670 @ 01bc8670

undefined8 FUN_01bc8670(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  FUN_01bc8564();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    uVar2 = local_b8;
    FUN_01be3454(0,local_b8,&cf_contentObj);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    FUN_01be3454();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    bVar1 = true;
    if ((uVar3 != 0) && (bVar1 = true, uVar3 != 1)) {
      bVar1 = uVar3 == 2;
    }
    local_b0 = 4;
    if (bVar1) {
      local_b0 = 1;
    }
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
    if (local_138 != 0) {
      lVar4 = *local_f8;
      local_140 = 0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_100 + local_140 * 8);
          local_c8 = uVar5;
          FUN_01bc8988();
          if ((uVar5 & 1) != 0) {
            local_b0 = 3;
            bVar1 = true;
            goto LAB_01bc8820;
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    bVar1 = false;
LAB_01bc8820:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (!bVar1) {
      local_b0 = 2;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

