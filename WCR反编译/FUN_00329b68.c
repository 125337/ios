// FUN_00329b68 @ 00329b68

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00329b68(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_600;
  ulong local_560;
  ulong local_558;
  ulong local_518;
  ulong local_510;
  double local_4e0;
  double local_4b8;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  undefined8 local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  ulong local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  float local_234;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  float local_1f4;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  int local_150;
  double local_140;
  double local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_5);
  bVar1 = true;
  dVar10 = param_1;
  if (local_130 != 0) {
    dVar10 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_contentSize_026ca5a0);
    bVar1 = dVar10 <= 0.0;
    param_2 = param_1;
    local_140 = param_1;
    local_138 = dVar10;
  }
  if (bVar1) {
    local_150 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
    dVar13 = param_3;
    local_178 = dVar10;
    local_170 = param_2;
    local_168 = param_3;
    local_160 = param_4;
    local_158 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_contentOffset_0269dd18);
    dVar8 = dVar13;
    local_1a8 = param_3;
    local_1a0 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
    dVar11 = param_2;
    dVar12 = param_2;
    local_1c8 = dVar8;
    local_1c0 = param_3;
    local_1b8 = param_2;
    local_1b0 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
    uVar9 = 0;
    local_1e8 = dVar11;
    local_1e0 = dVar12;
    local_1d8 = param_3;
    local_1d0 = dVar8;
    FUN_00314638();
    dVar10 = 5.55754634950683e-315;
    local_1f4 = 140.0;
    local_198 = uVar9;
    dStack_190 = dVar13;
    local_188 = param_2;
    dStack_180 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
    dVar11 = dVar8 * DAT_02324008;
    local_4b8 = dVar11;
    if ((double)local_1f4 < dVar11) {
      local_4b8 = (double)local_1f4;
    }
    local_228 = local_4b8;
    local_1f0 = local_4b8;
    dVar12 = 5.57697380120634e-315;
    local_234 = 200.0;
    local_220 = dVar10;
    local_218 = dVar13;
    local_210 = param_2;
    local_208 = dVar8;
    local_200 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
    local_600 = dVar10 * DAT_02323d30;
    local_4e0 = local_600;
    if (local_600 <= (double)local_234) {
      local_4e0 = (double)local_234;
    }
    local_268 = local_4e0;
    local_230 = local_4e0;
    local_260 = dVar12;
    local_258 = dVar11;
    local_250 = dVar13;
    local_248 = dVar10;
    local_240 = local_600;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_contentSize_026ca5a0);
    local_280 = local_4e0;
    local_278 = local_600;
    local_270 = local_600;
    _memset(auStack_2c8,0,0x40);
    uVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_510 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_510 != 0) {
      lVar6 = *local_2b8;
      local_518 = 0;
      do {
        do {
          if (*local_2b8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_2b8 - lVar6,uVar4);
          }
          local_288 = *(ulong *)(local_2c0 + local_518 * 8);
          uVar3 = (uint)local_288;
          FUN_0032adb8();
          if ((uVar3 & 1) != 0) {
            _memset(auStack_310,0,0x40);
            uVar5 = local_288;
            (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_558 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar10 = dVar12;
            if (local_558 != 0) {
              lVar7 = *local_300;
              local_560 = 0;
              do {
                do {
                  if (*local_300 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_300 - lVar7,uVar5);
                  }
                  local_2d0 = *(undefined8 *)(local_308 + local_560 * 8);
                  uVar3 = (uint)local_2d0;
                  FUN_0032adb8();
                  if ((uVar3 & 1) != 0) {
                    uVar9 = local_2d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_superview_026cab50);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_frame_026ca640);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar9,PTR_s_convertRect_toView__0269ded8,local_130);
                    (*(code *)PTR__objc_release_02578630)();
                    uVar3 = (uint)uVar9;
                    bVar1 = local_270 - 6.0 <= local_4e0;
                    bVar2 = local_230 <= dVar12;
                    dVar8 = dVar11 - local_158;
                    _CGRectIntersection();
                    dVar10 = dVar12;
                    _CGRectIsNull(local_600,local_4e0);
                    local_600 = dVar12;
                    if ((uVar3 & 1) != 0) {
                      local_600 = 0.0;
                    }
                    local_4e0 = 0.5;
                    if (0.5 < local_600) {
                      local_4e0 = local_1f0;
                    }
                    dVar12 = dVar10;
                    if ((((bVar1) && (bVar2)) && (ABS(dVar8) <= 2.0)) &&
                       (0.5 < local_600 && local_600 <= local_1f0)) {
                      FUN_0031bdd8(local_2d0);
                      local_150 = 1;
                      goto LAB_0032a504;
                    }
                  }
                  local_560 = local_560 + 1;
                } while (local_560 < local_558);
                local_558 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,
                           auStack_128,0x10);
                local_560 = 0;
                dVar10 = dVar12;
              } while (local_558 != 0);
            }
            local_150 = 0;
LAB_0032a504:
            (*(code *)PTR__objc_release_02578630)(uVar5);
            dVar12 = dVar10;
            if (local_150 != 0) goto LAB_0032a5a0;
          }
          local_518 = local_518 + 1;
        } while (local_518 < local_510);
        local_510 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_a8,0x10
                  );
        local_518 = 0;
      } while (local_510 != 0);
    }
    local_150 = 0;
LAB_0032a5a0:
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_150 == 0) {
      local_150 = 0;
    }
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

