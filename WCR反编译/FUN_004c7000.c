// FUN_004c7000 @ 004c7000

void FUN_004c7000(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_188;
  ulong local_180;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  uint local_e0;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_d0;
  if ((uVar2 & 1) == 0) {
    _memset(auStack_128,0,0x40);
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != 0) {
      lVar3 = *local_118;
      local_188 = 0;
      do {
        do {
          if (*local_118 - lVar3 != 0) {
            _objc_enumerationMutation(*local_118 - lVar3,uVar1);
          }
          local_e8 = *(undefined8 *)(local_120 + local_188 * 8);
          uVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_findViewOfClass_inView__026a4010,local_c8,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar2;
          if (uVar2 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
          }
          local_e0 = (uint)(uVar2 != 0);
          _objc_storeStrong(&local_130,0);
          if (local_e0 != 0) goto LAB_004c7328;
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    local_e0 = 0;
LAB_004c7328:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_e0 == 0) {
      local_b0 = 0;
      local_e0 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_e0 = 1;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

