// FUN_00787390 @ 00787390

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00787390(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong local_268;
  ulong local_260;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  byte local_e5;
  ulong local_d8;
  uint local_cc;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_6);
  local_c8 = param_7;
  if ((local_b8 == 0) || (param_7 + -10 != 0 && 9 < param_7)) {
    local_b0 = 0;
    local_cc = 1;
    goto LAB_007879a0;
  }
  uVar1 = local_b8;
  FUN_00787b90(param_7 + -10,local_b8,local_c0,param_7);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar1;
  if (uVar1 == 0) {
    local_e5 = local_b8 == local_c0;
    _memset(auStack_130,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_260 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_260 != 0) {
      lVar2 = *local_120;
      local_268 = 0;
      do {
        do {
          if (*local_120 - lVar2 != 0) {
            _objc_enumerationMutation(*local_120 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_128 + local_268 * 8);
          local_f0 = uVar3;
          FUN_00787390(uVar3,local_c0,local_c8 + 1);
          _objc_retainAutoreleasedReturnValue();
          local_138 = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar3;
          }
          local_cc = (uint)(uVar3 != 0);
          _objc_storeStrong(&local_138,0);
          if (local_cc != 0) goto LAB_007876a0;
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_268 = 0;
      } while (local_260 != 0);
    }
    local_cc = 0;
LAB_007876a0:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_cc == 0) {
      if (((local_e5 & 1) == 0) &&
         (uVar3 = local_b8, FUN_00786650(local_b8,local_c0,1), uVar1 = local_b8, (uVar3 & 1) != 0))
      {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_convertRect_toView__0269ded8,local_c0);
        dVar4 = param_4;
        uVar7 = param_3;
        uVar8 = param_2;
        dVar6 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bounds_026ca548);
        _CGRectGetWidth();
        dVar5 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bounds_026ca548);
        _CGRectGetHeight(dVar5,uVar7,uVar8,dVar6);
        dVar6 = param_1;
        _CGRectGetWidth(param_1,param_2,param_3,param_4);
        _CGRectGetHeight(param_1,param_2,param_3,param_4);
        if ((dVar4 * dVar5 <= 0.0) ||
           ((dVar6 * param_1 < dVar4 * dVar5 * DAT_023242c0 ||
            (uVar1 = local_b8, FUN_00787124(), (uVar1 & 1) == 0)))) {
          uVar1 = local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar1;
          local_cc = 1;
          goto LAB_00787980;
        }
      }
      local_b0 = 0;
      local_cc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = uVar1;
  }
LAB_00787980:
  _objc_storeStrong(&local_d8,0);
LAB_007879a0:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

