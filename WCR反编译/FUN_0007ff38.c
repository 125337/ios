// FUN_0007ff38 @ 0007ff38

byte FUN_0007ff38(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  int local_d4;
  long local_d0;
  ulong local_c8;
  byte local_b9;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = param_2;
  if ((local_c8 == 0) || (param_2 < 0)) {
    local_b9 = 0;
    local_d4 = 1;
  }
  else {
    local_b0 = &DAT_028c7f68;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_02579ad0);
    if (*local_b0 + 1 != 0) {
      _dispatch_once(*local_b0 + 1,local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    if (((DAT_028c7f60 == 0) ||
        (uVar1 = local_c8,
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isKindOfClass__0269cd68,DAT_028c7f60),
        (uVar1 & 1) == 0)) || (uVar1 = local_c8, FUN_00080668(), (uVar1 & 1) == 0)) {
      if (local_d0 == 0) {
        local_b9 = 0;
        local_d4 = 1;
      }
      else {
        _memset(auStack_130,0,0x40);
        uVar1 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_168 != 0) {
          lVar2 = *local_120;
          local_170 = 0;
          do {
            do {
              if (*local_120 - lVar2 != 0) {
                _objc_enumerationMutation(*local_120 - lVar2,uVar1);
              }
              uVar3 = *(ulong *)(local_128 + local_170 * 8);
              local_f0 = uVar3;
              FUN_0007ff38(uVar3,local_d0 + -1);
              if ((uVar3 & 1) != 0) {
                local_b9 = 1;
                local_d4 = 1;
                goto LAB_00080268;
              }
              local_170 = local_170 + 1;
            } while (local_170 < local_168);
            local_168 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                       0x10);
            local_170 = 0;
          } while (local_168 != 0);
        }
        local_d4 = 0;
LAB_00080268:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_d4 == 0) {
          local_b9 = 0;
          local_d4 = 1;
        }
      }
    }
    else {
      local_b9 = 1;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

