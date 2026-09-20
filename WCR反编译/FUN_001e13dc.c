// FUN_001e13dc @ 001e13dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_001e13dc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulong local_410;
  ulong local_408;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  double local_110;
  byte local_104;
  byte local_103;
  byte local_102;
  byte local_101;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  ulong local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_5);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_6);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_7);
  uVar3 = local_c8;
  puVar4 = PTR_s_count_0269cfe0;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (uVar3 == 0 || uVar3 - 1 == 0) {
    FUN_001e3ac4();
    local_b8 = uVar3;
    local_b0 = puVar4;
  }
  else {
    FUN_001e3b0c(uVar3 - 1);
    local_b8 = uVar3;
    local_b0 = puVar4;
    FUN_001e25f4(local_c0,local_d0);
    local_101 = 0;
    local_102 = 0;
    local_103 = 0;
    local_104 = 0;
    dVar7 = 6.0;
    local_110 = 6.0;
    local_100 = param_1;
    dStack_f8 = param_2;
    local_f0 = param_3;
    dStack_e8 = param_4;
    _memset(auStack_158,0,0x40);
    uVar3 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_408 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_408 != 0) {
      lVar5 = *local_148;
      local_410 = 0;
      do {
        do {
          dVar8 = dVar7;
          dVar11 = param_3;
          dVar12 = param_2;
          dVar13 = param_1;
          if (*local_148 - lVar5 != 0) {
            _objc_enumerationMutation(*local_148 - lVar5,uVar3);
            dVar8 = dVar7;
            dVar11 = param_3;
            dVar12 = param_2;
            dVar13 = param_1;
          }
          lVar6 = *(long *)(local_150 + local_410 * 8);
          dVar7 = dVar8;
          param_3 = dVar11;
          param_2 = dVar12;
          param_1 = dVar13;
          local_118 = lVar6;
          if (lVar6 - local_c0 != 0) {
            FUN_001e25f4(lVar6 - local_c0,lVar6,local_d0);
            uVar2 = (uint)lVar6;
            dVar7 = dVar8;
            _CGRectGetMaxX(dVar8,dVar11,dVar12,dVar13);
            dVar9 = local_100;
            _CGRectGetMinX(local_100,dStack_f8,local_f0,dStack_e8);
            if ((ABS(dVar7 - dVar9) <= local_110) &&
               (FUN_001e3b34(dVar8,dVar11,dVar12,dVar13,local_100,dStack_f8,local_f0,dStack_e8),
               (uVar2 & 1) != 0)) {
              local_101 = 1;
            }
            dVar7 = dVar8;
            _CGRectGetMinX(dVar8,dVar11,dVar12,dVar13);
            dVar9 = local_100;
            _CGRectGetMaxX(local_100,dStack_f8,local_f0,dStack_e8);
            if ((ABS(dVar7 - dVar9) <= local_110) &&
               (FUN_001e3b34(dVar8,dVar11,dVar12,dVar13,local_100,dStack_f8,local_f0,dStack_e8),
               (uVar2 & 1) != 0)) {
              local_102 = 1;
            }
            dVar7 = dVar8;
            _CGRectGetMaxY(dVar8,dVar11,dVar12,dVar13);
            dVar9 = local_100;
            _CGRectGetMinY(local_100,dStack_f8,local_f0,dStack_e8);
            if ((ABS(dVar7 - dVar9) <= local_110) &&
               (FUN_001e3c60(dVar8,dVar11,dVar12,dVar13,local_100,dStack_f8,local_f0,dStack_e8),
               (uVar2 & 1) != 0)) {
              local_103 = 1;
            }
            dVar9 = dVar8;
            _CGRectGetMinY(dVar8,dVar11,dVar12,dVar13);
            dVar10 = local_100;
            param_2 = local_f0;
            param_1 = dStack_e8;
            _CGRectGetMaxY(local_100,dStack_f8);
            dVar7 = ABS(dVar9 - dVar10);
            param_3 = local_110;
            if ((ABS(dVar9 - dVar10) <= local_110) &&
               (FUN_001e3c60(), dVar7 = dVar8, param_3 = dVar11, param_2 = dVar12, param_1 = dVar13,
               (uVar2 & 1) != 0)) {
              local_104 = 1;
            }
          }
          local_410 = local_410 + 1;
        } while (local_410 < local_408);
        local_408 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_410 = 0;
      } while (local_408 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_b8 = (CONCAT71(local_b8._1_7_,local_103) ^ 1) & 0xffffffffffffff01;
    local_b8 = (CONCAT62(local_b8._2_6_,CONCAT11(local_101,(undefined1)local_b8)) ^ 0x100) &
               0xffffffffffff01ff;
    local_b8 = (CONCAT53(local_b8._3_5_,CONCAT12(local_104,(undefined2)local_b8)) ^ 0x10000) &
               0xffffffffff01ffff;
    local_b8 = (CONCAT44(local_b8._4_4_,CONCAT13(local_102,(undefined3)local_b8)) ^ 0x1000000) &
               0xffffffff01ffffff;
    if (((local_101 & 1) == 0) && ((local_103 & 1) == 0)) {
      local_b0 = (undefined *)((ulong)local_b0 | 1);
    }
    if (((local_102 & 1) == 0) && ((local_103 & 1) == 0)) {
      local_b0 = (undefined *)((ulong)local_b0 | 2);
    }
    if (((local_101 & 1) == 0) && ((local_104 & 1) == 0)) {
      local_b0 = (undefined *)((ulong)local_b0 | 4);
    }
    if (((local_102 & 1) == 0) && ((local_104 & 1) == 0)) {
      local_b0 = (undefined *)((ulong)local_b0 | 8);
    }
  }
  local_e0 = 1;
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  auVar1._8_8_ = local_b0;
  auVar1._0_8_ = local_b8;
  return auVar1;
}

