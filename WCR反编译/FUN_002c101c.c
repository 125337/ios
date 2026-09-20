// FUN_002c101c @ 002c101c

byte FUN_002c101c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_3a0;
  ulong local_398;
  ulong local_358;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  byte local_1f1;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  double local_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  double local_198;
  double local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  int local_110;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_d8;
  local_d8 = 0;
  local_d0 = param_1;
  uStack_c8 = param_2;
  local_c0 = param_3;
  uStack_b8 = param_4;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  if (local_d8 != 0) {
    uStack_f8 = uStack_c8;
    local_100 = local_d0;
    uStack_e8 = uStack_b8;
    local_f0 = local_c0;
    _CGRectIsEmpty(local_d0,uStack_c8,local_c0,uStack_b8);
    if ((uVar1 & 1) == 0) {
      uVar3 = local_d8;
      FUN_002ae960(local_d8,&cf_UITabBarButton);
      _objc_retainAutoreleasedReturnValue();
      local_118 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
      if (uVar3 == 0) {
        uVar5 = local_d8;
        FUN_002ae960(local_d8,&cf_MMTabBarItemView);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_118;
        local_118 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
      if (uVar3 == 0) {
        local_a9 = 0;
        local_110 = 1;
      }
      else {
        local_128 = 1;
        uVar3 = local_d8;
        FUN_002adfd4();
        local_358 = uVar3;
        if (uVar3 <= local_128) {
          local_358 = local_128;
        }
        local_138 = local_358;
        local_120 = local_358;
        uStack_158 = uStack_c8;
        local_160 = local_d0;
        uStack_148 = uStack_b8;
        local_150 = local_c0;
        dVar6 = local_d0;
        local_130 = uVar3;
        _CGRectGetWidth(local_d0,uStack_c8,local_c0,uStack_b8);
        local_140 = (double)NEON_ucvtf(local_120);
        local_140 = dVar6 / local_140;
        uStack_188 = uStack_c8;
        local_190 = local_d0;
        uStack_178 = uStack_b8;
        local_180 = local_c0;
        dVar6 = local_d0;
        _CGRectGetMinX(local_d0,uStack_c8,local_c0,uStack_b8);
        uStack_1b8 = uStack_c8;
        local_1c0 = local_d0;
        uStack_1a8 = uStack_b8;
        local_1b0 = local_c0;
        dVar7 = local_d0;
        local_168 = dVar6;
        _CGRectGetMaxX(local_d0,uStack_c8,local_c0,uStack_b8);
        uStack_1e8 = uStack_c8;
        local_1f0 = local_d0;
        uStack_1d8 = uStack_b8;
        local_1e0 = local_c0;
        dVar6 = local_d0;
        uVar10 = local_c0;
        uVar11 = uStack_b8;
        local_198 = dVar7;
        _CGRectGetMinY(local_d0,uStack_c8);
        local_1f1 = 0;
        local_1c8 = dVar6;
        _memset(auStack_240,0,0x40);
        uVar3 = local_118;
        (*(code *)PTR__objc_retain_02578638)();
        local_398 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,0x10
                  );
        if (local_398 != 0) {
          lVar4 = *local_230;
          local_3a0 = 0;
          do {
            do {
              if (*local_230 - lVar4 != 0) {
                _objc_enumerationMutation(*local_230 - lVar4,uVar3);
              }
              uVar5 = *(ulong *)(local_238 + local_3a0 * 8);
              local_200 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isHidden_026ca768);
              if (((uVar5 & 1) == 0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_alpha_026ca4d8),
                 DAT_02323d38 < dVar6)) {
                local_1f1 = 1;
                dVar9 = DAT_02323d38;
                (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_frame_026ca640);
                dVar7 = dVar6;
                _CGRectGetWidth(dVar6,dVar9,uVar10,uVar11);
                if (1.0 < ABS(dVar7 - local_140)) {
                  local_a9 = 1;
                  local_110 = 1;
                }
                else {
                  dVar7 = dVar6;
                  _CGRectGetHeight(dVar6,dVar9,uVar10,uVar11);
                  dVar8 = local_d0;
                  _CGRectGetHeight(local_d0,uStack_c8,local_c0,uStack_b8);
                  if (1.0 < ABS(dVar7 - dVar8)) {
                    local_a9 = 1;
                    local_110 = 1;
                  }
                  else {
                    dVar7 = dVar6;
                    _CGRectGetMinY(dVar6,dVar9,uVar10,uVar11);
                    if (1.0 < ABS(dVar7 - local_1c8)) {
                      local_a9 = 1;
                      local_110 = 1;
                    }
                    else {
                      dVar7 = dVar6;
                      _CGRectGetMinX(dVar6,dVar9,uVar10,uVar11);
                      if (local_168 - 1.0 <= dVar7) {
                        _CGRectGetMaxX(dVar6,dVar9,uVar10);
                        uVar10 = 0x3ff0000000000000;
                        if (dVar6 <= local_198 + 1.0) goto LAB_002c1690;
                      }
                      local_a9 = 1;
                      local_110 = 1;
                    }
                  }
                }
                goto LAB_002c1700;
              }
LAB_002c1690:
              local_3a0 = local_3a0 + 1;
            } while (local_3a0 < local_398);
            local_398 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,
                       0x10);
            local_3a0 = 0;
          } while (local_398 != 0);
        }
        local_110 = 0;
LAB_002c1700:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_110 == 0) {
          local_a9 = (local_1f1 ^ 1) & 1;
          local_110 = 1;
        }
      }
      _objc_storeStrong(&local_118,0);
      goto LAB_002c1760;
    }
  }
  local_a9 = 1;
  local_110 = 1;
LAB_002c1760:
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

