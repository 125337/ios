// FUN_000fe51c @ 000fe51c

double FUN_000fe51c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_4e0;
  double local_4d8;
  ulong local_448;
  ulong local_440;
  double local_3d8;
  double local_3d0;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  byte local_1f1;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  ulong local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined4 local_d4;
  long local_d0;
  ulong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  _objc_storeStrong(&local_c8,param_5);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_6);
  if (local_c8 == 0) {
    local_b0 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_safeAreaInsets_026ca828);
    dVar5 = param_1;
    local_100 = param_1;
    local_f8 = param_2;
    local_f0 = param_3;
    local_e8 = param_4;
    local_e0 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_safeAreaInsets_026ca828);
    dVar7 = param_2;
    local_138 = param_1;
    local_130 = param_3;
    local_128 = param_2;
    local_120 = dVar5;
    local_118 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
    local_160 = param_2;
    local_158 = dVar7;
    local_150 = param_3;
    local_148 = param_1;
    _CGRectGetHeight(param_2,dVar7,param_3);
    local_190 = (param_2 - (param_2 * 3.0) / 5.0) - local_b8 / 2.0;
    local_180 = local_e0 + 8.0;
    local_198 = ((param_2 - local_118) - local_b8) - 8.0;
    local_3d0 = local_198;
    if (local_190 < local_198) {
      local_3d0 = local_190;
    }
    local_1a0 = local_3d0;
    local_188 = local_3d0;
    local_3d8 = local_180;
    if (local_180 < local_3d0) {
      local_3d8 = local_3d0;
    }
    local_1a8 = local_3d8;
    dVar7 = local_b8;
    local_178 = local_198;
    local_170 = local_180;
    local_140 = param_2;
    for (local_1b0 = 0; local_168 = local_3d8, local_1b0 < 6; local_1b0 = local_1b0 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
      local_1f0 = local_3d8;
      local_1e8 = local_3d0;
      local_1e0 = dVar7;
      local_1d8 = param_1;
      _CGRectGetWidth(local_3d8,local_3d0,dVar7,param_1);
      local_3d8 = local_3d8 - local_c0;
      dVar8 = local_168;
      dVar9 = local_c0;
      dVar5 = local_b8;
      FUN_000fd7cc();
      local_1f1 = 0;
      local_1d0 = local_3d8;
      dStack_1c8 = dVar8;
      local_1c0 = dVar9;
      dStack_1b8 = dVar5;
      _memset(auStack_240,0,0x40);
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_440 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar7 = dVar8;
      param_1 = local_3d8;
      if (local_440 != 0) {
        lVar3 = *local_230;
        local_448 = 0;
        do {
          do {
            dVar6 = dVar5;
            dVar10 = dVar9;
            dVar7 = dVar8;
            param_1 = local_3d8;
            if (*local_230 - lVar3 != 0) {
              _objc_enumerationMutation(*local_230 - lVar3,uVar2);
              dVar6 = dVar5;
              dVar10 = dVar9;
              dVar7 = dVar8;
              param_1 = local_3d8;
            }
            uVar4 = *(ulong *)(local_238 + local_448 * 8);
            dVar5 = dVar6;
            dVar9 = dVar10;
            dVar8 = dVar7;
            local_3d8 = param_1;
            local_200 = uVar4;
            if ((uVar4 - local_d0 != 0) &&
               (FUN_000fee70(uVar4 - local_d0), dVar5 = dVar6, dVar9 = dVar10, dVar8 = dVar7,
               local_3d8 = param_1, (uVar4 & 1) != 0)) {
              uVar4 = local_200;
              (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_frame_026ca640);
              uVar1 = (uint)uVar4;
              dVar5 = dVar6;
              dVar8 = dVar7;
              local_3d8 = param_1;
              _CGRectGetHeight(dVar6,dVar10);
              if ((dVar5 < 1.0) ||
                 (dVar5 = dVar6, dVar8 = dVar7, local_3d8 = param_1, _CGRectGetWidth(dVar6,dVar10),
                 dVar5 < 1.0)) {
                dVar9 = 1.0;
              }
              else {
                dVar5 = local_1d0;
                dVar9 = dStack_1c8;
                dVar8 = local_1c0;
                local_3d8 = dStack_1b8;
                _CGRectInset();
                _CGRectIntersectsRect();
                if ((uVar1 & 1) != 0) {
                  _CGRectGetMaxY(dVar6,dVar10);
                  local_168 = dVar6 + 8.0;
                  local_1f1 = 1;
                  local_d4 = 5;
                  goto LAB_000febe8;
                }
              }
            }
            local_448 = local_448 + 1;
          } while (local_448 < local_440);
          local_440 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,
                     0x10);
          local_448 = 0;
          dVar7 = dVar8;
          param_1 = local_3d8;
        } while (local_440 != 0);
      }
      local_d4 = 0;
LAB_000febe8:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_1f1 & 1) == 0) break;
      if (local_178 <= local_168) {
        local_4d8 = local_178;
      }
      else {
        local_4d8 = local_168;
      }
      if (local_4d8 <= local_170) {
        local_4e0 = local_170;
      }
      else {
        local_4e0 = local_4d8;
      }
      local_3d8 = local_4e0;
      local_3d0 = local_4d8;
    }
    local_b0 = local_168;
  }
  local_d4 = 1;
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

