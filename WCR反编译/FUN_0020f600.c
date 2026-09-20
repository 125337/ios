// FUN_0020f600 @ 0020f600

void FUN_0020f600(undefined8 param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_4);
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (uVar3 == 0) {
    local_b0 = 0;
    local_c8 = 1;
  }
  else {
    local_d0 = 0;
    dVar5 = -1.0;
    local_d8 = -1.0;
    _memset(auStack_120,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a0 != 0) {
      lVar4 = *local_110;
      local_1a8 = 0;
      do {
        do {
          dVar6 = param_3;
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar2);
            dVar6 = param_3;
          }
          local_e0 = *(undefined8 *)(local_118 + local_1a8 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
          param_3 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
          dVar5 = dVar6 * dVar5;
          param_2 = local_d8;
          if (local_d8 < dVar5) {
            local_d8 = dVar5;
            _objc_storeStrong(&local_d0,local_e0);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_c8 = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

