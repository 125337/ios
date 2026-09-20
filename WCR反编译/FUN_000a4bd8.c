// FUN_000a4bd8 @ 000a4bd8

void FUN_000a4bd8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_330;
  double local_328;
  double local_320;
  ulong local_2f8;
  ulong local_2f0;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined1 auStack_278 [48];
  undefined1 auStack_248 [48];
  double local_218;
  double local_210;
  double local_208;
  undefined4 local_1fc;
  double local_1f8;
  undefined4 local_1ec;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined4 local_154;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  undefined8 local_128;
  double local_120;
  float local_114;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  float local_d4;
  double local_d0;
  undefined4 local_c4;
  ulong local_c0;
  double local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02323cb8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  uVar2 = local_b0;
  local_b8 = param_1;
  _objc_getAssociatedObject(local_b0,&DAT_028c806c);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    local_c4 = 1;
  }
  else {
    dVar7 = 5.26354424712089e-315;
    local_d4 = 1.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
    local_100 = dVar7;
    local_f8 = param_2;
    local_f0 = param_3;
    local_e8 = param_4;
    _CGRectGetWidth(dVar7,param_2);
    local_2b8 = dVar7;
    if (dVar7 <= (double)local_d4) {
      local_2b8 = (double)local_d4;
    }
    local_108 = local_2b8;
    local_d0 = local_2b8;
    dVar5 = 5.26354424712089e-315;
    local_114 = 1.0;
    local_e0 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
    local_140 = dVar5;
    local_138 = dVar7;
    local_130 = param_3;
    local_128 = param_4;
    _CGRectGetHeight(dVar5,dVar7,param_3,param_4);
    local_2c0 = dVar5;
    if (dVar5 <= (double)local_114) {
      local_2c0 = (double)local_114;
    }
    local_148 = local_2c0;
    local_110 = local_2c0;
    local_154 = 0x3f800000;
    local_160 = local_b8 / dVar1;
    local_2c8 = local_160;
    if (1.0 < local_160) {
      local_2c8 = 1.0;
    }
    local_168 = local_2c8;
    local_150 = local_2c8;
    if (dVar1 < local_b8) {
      local_2d0 = (local_b8 - dVar1) / DAT_02323d30;
    }
    else {
      local_2d0 = 0.0;
    }
    local_170 = local_2d0;
    dVar6 = local_d0 * DAT_02323d28;
    dVar7 = DAT_02323d28;
    local_178 = dVar6;
    local_120 = dVar5;
    _memset(auStack_1c0,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_2f0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
    if (local_2f0 != 0) {
      lVar3 = *local_1b0;
      local_2f8 = 0;
      do {
        do {
          if (*local_1b0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar3,uVar2);
          }
          uVar4 = *(undefined8 *)(local_1b8 + local_2f8 * 8);
          local_180 = uVar4;
          _objc_getAssociatedObject(uVar4,&DAT_028c806b);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1d0 = dVar6;
          local_1c8 = dVar7;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          local_1d8 = local_1c8 / local_110;
          dVar7 = DAT_02323cb0 * ABS(local_170 - local_1d8);
          _cos();
          local_1e0 = DAT_02323d20 + dVar7 * -0.49000000953674316;
          local_320 = local_1e0;
          if (local_b8 <= dVar1) {
            local_320 = local_150 * (local_1e0 - 1.0) + 1.0;
          }
          local_1ec = 0x3ca3d70a;
          local_1fc = 0x3f800000;
          local_208 = local_320;
          if (local_320 <= 1.0) {
            local_328 = local_320;
          }
          else {
            local_328 = 1.0;
          }
          local_210 = local_328;
          local_1f8 = local_328;
          if (local_328 <= 0.019999999552965164) {
            local_330 = 0.019999999552965164;
          }
          else {
            local_330 = local_328;
          }
          local_218 = local_330;
          local_1e8 = local_330;
          _CGAffineTransformMakeScale(local_330);
          uVar4 = local_180;
          _memcpy(auStack_278,auStack_248,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_278);
          dVar6 = local_1d0 + (1.0 - local_1e8) * (local_178 - local_1d0);
          dVar7 = local_1c8 - local_170 * local_110;
          FUN_000a51f0();
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setCenter__026ca8c0);
          local_2f8 = local_2f8 + 1;
        } while (local_2f8 < local_2f0);
        local_2f0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10
                  );
        local_2f8 = 0;
      } while (local_2f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

