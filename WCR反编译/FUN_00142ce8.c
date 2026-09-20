// FUN_00142ce8 @ 00142ce8

void FUN_00142ce8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  ulong local_478;
  ulong local_470;
  double local_3f8;
  uint local_358;
  ulong local_2f0;
  long local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  ulong local_2b0;
  long local_2a8;
  double local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  double local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  double local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  long local_218;
  ulong local_210;
  long local_208;
  ulong local_200;
  long local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined1 auStack_178 [96];
  double local_118;
  ulong local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  ulong local_d8;
  ulong local_d0 [3];
  byte local_b5;
  int local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong uVar5;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  if (local_b0 == 0) {
    local_b4 = 1;
    goto LAB_001438cc;
  }
  uVar4 = local_b0;
  FUN_00143940(local_b0,&cf_InputToolViewBar,6);
  local_358 = 1;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_b0;
    FUN_00143940(local_b0,&cf_MMInputToolView,8);
    local_358 = (uint)uVar4;
  }
  local_b5 = (byte)local_358 & 1;
  if ((local_358 & 1) == 0) {
    local_b4 = 1;
    goto LAB_001438cc;
  }
  uVar4 = local_b0;
  FUN_00143b84();
  _objc_retainAutoreleasedReturnValue();
  local_d0[0] = uVar4;
  if (uVar4 == 0) {
    local_b4 = 1;
  }
  else {
    FUN_001441d8();
    local_d8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_bounds_026ca548);
    local_100 = param_1;
    local_f8 = param_2;
    local_f0 = param_3;
    local_e8 = param_4;
    _CGRectGetWidth();
    uVar4 = local_d0[0];
    local_e0 = param_1;
    FUN_001442b4();
    _objc_retainAutoreleasedReturnValue();
    local_108 = uVar4;
    _memset(auStack_178,0,0x70);
    uVar4 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
    if (uVar4 == 0) {
      lVar6 = *(long *)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_d0[0];
      local_208 = lVar6;
      local_1f8 = lVar6;
      FUN_00145238(local_d0[0],&local_208);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_1f8,local_208);
      local_200 = uVar4;
      if ((uVar4 == 0) ||
         (lVar6 = local_1f8, (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0),
         lVar6 == 0)) {
        local_b4 = 1;
      }
      else {
        uVar4 = local_d0[0];
        FUN_00145710();
        _objc_retainAutoreleasedReturnValue();
        local_210 = uVar4;
        _memset(auStack_258,0,0x40);
        uVar4 = local_210;
        (*(code *)PTR__objc_retain_02578638)();
        local_470 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10
                  );
        if (local_470 != 0) {
          lVar6 = *local_248;
          local_478 = 0;
          do {
            do {
              if (*local_248 - lVar6 != 0) {
                _objc_enumerationMutation(*local_248 - lVar6,uVar4);
              }
              local_218 = *(long *)(local_250 + local_478 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_bounds_026ca548);
              local_280 = param_1;
              local_278 = param_2;
              local_270 = param_3;
              local_268 = param_4;
              _CGRectGetWidth(param_1,param_2);
              param_2 = 0x3ff0000000000000;
              local_260 = param_1;
              if (param_1 <= 1.0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_frame_026ca640);
                local_2a0 = param_1;
                local_298 = param_2;
                local_290 = param_3;
                local_288 = param_4;
                _CGRectGetWidth();
                local_260 = param_1;
              }
              lVar7 = local_218;
              param_1 = local_260;
              FUN_001442b4();
              _objc_retainAutoreleasedReturnValue();
              local_2a8 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_count_0269cfe0);
              if (lVar7 != 0) {
                FUN_00144988(lVar7,local_2a8,local_b0);
              }
              _objc_storeStrong(&local_2a8,0);
              local_478 = local_478 + 1;
            } while (local_478 < local_470);
            local_470 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                       0x10);
            local_478 = 0;
          } while (local_470 != 0);
        }
        (*(code *)PTR__objc_release_02578630)();
        uVar3 = (uint)uVar4;
        FUN_00144fdc();
        uVar5 = local_d8;
        dVar9 = local_e0;
        lVar6 = local_1f8;
        uVar4 = local_200;
        if ((uVar3 & 1) == 0) {
          local_b4 = 1;
        }
        else {
          dVar8 = local_e0;
          FUN_00145078();
          dVar10 = dVar8;
          FUN_00145158();
          FUN_0013a22c(dVar9,dVar8,uVar4,lVar6,uVar5,auStack_178);
          uVar4 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0);
          if ((1 < uVar4) && (1.0 < local_e0)) {
            uVar4 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_210,PTR_s_objectAtIndexedSubscript__0269cc78,1);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = 0x403c000000000000;
            dVar8 = local_e0 + 28.0;
            dVar9 = dVar8;
            local_2b8 = dVar8;
            local_2b0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_frame_026ca640);
            local_2c0 = dVar8 - dVar9;
            local_2e0 = dVar9;
            local_2d8 = uVar11;
            local_2d0 = dVar10;
            local_2c8 = param_4;
            if (0.5 < local_2c0) {
              local_2c0 = (double)(long)(local_2c0 * 10.0) / 10.0;
              for (local_2e8 = 1; lVar6 = local_2e8, uVar4 = local_210,
                  (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0),
                  lVar6 < (long)uVar4; local_2e8 = local_2e8 + 1) {
                uVar4 = local_210;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_210,PTR_s_objectAtIndexedSubscript__0269cc78,local_2e8);
                _objc_retainAutoreleasedReturnValue();
                local_2f0 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_frame_026ca640);
                (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_setFrame__026ca960);
                _objc_storeStrong(&local_2f0,0);
              }
            }
            _objc_storeStrong(&local_2b0,0);
          }
          local_b4 = 0;
        }
        _objc_storeStrong(&local_210,0);
      }
      _objc_storeStrong(&local_200);
      _objc_storeStrong(&local_1f8,0);
      if (local_b4 == 0) goto LAB_001438a4;
    }
    else {
      uVar5 = local_108;
      FUN_00144988(uVar4,local_108,local_b0);
      uVar3 = (uint)uVar5;
      FUN_00144fdc();
      uVar1 = local_d0[0];
      uVar5 = local_d8;
      dVar9 = local_e0;
      uVar4 = local_108;
      if ((uVar3 & 1) == 0) {
        local_b4 = 1;
      }
      else {
        dVar8 = local_e0;
        FUN_00145078();
        dVar10 = dVar8;
        FUN_00145158();
        FUN_0013a22c(dVar9,dVar8,dVar10,uVar1,uVar4,uVar5,auStack_178);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_contentSize_026ca5a0);
        local_118 = local_118 + 8.0;
        local_3f8 = dVar9;
        if (dVar9 < local_118) {
          local_3f8 = local_118;
        }
        local_1a8 = local_3f8;
        local_180 = local_3f8;
        bVar2 = false;
        dVar10 = local_118;
        local_1a0 = local_118;
        local_198 = dVar9;
        local_190 = dVar8;
        local_188 = dVar9;
        if (0.0 < local_3f8) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_contentSize_026ca5a0);
          dVar10 = 0.5;
          bVar2 = 0.5 <= ABS(local_3f8 - local_180);
          local_1b8 = local_3f8;
          local_1b0 = local_118;
        }
        dVar9 = local_180;
        if (bVar2) {
          dVar8 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_contentSize_026ca5a0);
          local_1d8 = dVar8;
          local_1d0 = dVar10;
          FUN_0013b3dc();
          local_1f0 = dVar9;
          dStack_1e8 = dVar10;
          local_1c8 = dVar9;
          dStack_1c0 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar9,dVar10,local_d0[0],PTR_s_setContentSize__026ca8e8);
        }
LAB_001438a4:
        local_b4 = 0;
      }
    }
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(local_d0,0);
LAB_001438cc:
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

