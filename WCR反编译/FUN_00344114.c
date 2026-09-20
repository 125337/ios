// FUN_00344114 @ 00344114

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_00344114(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double local_368;
  double local_360;
  double local_330;
  double local_320;
  double local_310;
  ulong local_2a8;
  ulong local_2a0;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  byte local_d1;
  double local_d0;
  double local_c8;
  undefined4 local_bc;
  ulong local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  if (local_b8 == 0) {
    local_b0 = 0.0;
  }
  else {
    local_c8 = 1.7976931348623157e+308;
    local_320 = 2.2250738585072014e-308;
    local_d0 = 2.2250738585072014e-308;
    local_d1 = 0;
    _memset(auStack_120,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2a0 != 0) {
      lVar4 = *local_110;
      local_2a8 = 0;
      do {
        do {
          dVar6 = local_320;
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar3);
            dVar6 = local_320;
          }
          uVar5 = *(ulong *)(local_118 + local_2a8 * 8);
          local_e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isHidden_026ca768);
          local_320 = dVar6;
          if (((uVar5 & 1) == 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_alpha_026ca4d8),
             local_320 = dVar6, param_2 = DAT_02323d38, DAT_02323d38 <= dVar6)) {
            dVar7 = DAT_02323d38;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
            local_320 = dVar6;
            uVar8 = param_3;
            uVar9 = param_4;
            _CGRectGetWidth(dVar6,dVar7);
            if ((local_320 < 1.0) ||
               (local_320 = dVar6, uVar8 = param_3, uVar9 = param_4, _CGRectGetHeight(dVar6,dVar7),
               dVar2 = local_c8, local_320 < 1.0)) {
              param_4 = uVar9;
              param_3 = uVar8;
              param_2 = 1.0;
            }
            else {
              local_310 = dVar6;
              _CGRectGetMinX(dVar6,dVar7,param_3,param_4);
              dVar1 = local_d0;
              if (dVar2 < local_310) {
                local_310 = dVar2;
              }
              local_c8 = local_310;
              _CGRectGetMaxX(dVar6,dVar7);
              local_320 = dVar6;
              if (dVar6 <= dVar1) {
                local_320 = dVar1;
              }
              local_d0 = local_320;
              local_d1 = 1;
              param_2 = dVar6;
            }
          }
          local_2a8 = local_2a8 + 1;
        } while (local_2a8 < local_2a0);
        local_2a0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_2a8 = 0;
      } while (local_2a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_360 = local_320;
    if (((local_d1 & 1) == 0) || (local_360 = local_d0, param_2 = local_c8, local_d0 <= local_c8)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
      _CGRectGetWidth(local_360,param_2,param_3,param_4);
      if (local_360 < 56.0) {
        local_360 = 56.0;
      }
      if (96.0 <= local_360) {
        local_368 = 96.0;
      }
      else {
        local_368 = local_360;
      }
      local_b0 = local_368;
    }
    else {
      local_330 = local_d0 - local_c8;
      if (local_330 < 56.0) {
        local_330 = 56.0;
      }
      local_b0 = local_330;
    }
  }
  local_bc = 1;
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

