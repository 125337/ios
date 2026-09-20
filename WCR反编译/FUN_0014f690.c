// FUN_0014f690 @ 0014f690

void FUN_0014f690(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_3a0;
  ulong local_340;
  ulong local_338;
  double local_318;
  double local_2d0;
  long local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  long local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  byte local_111;
  undefined *local_110;
  byte local_101;
  ulong local_100;
  byte local_f1;
  ulong local_f0;
  double local_e8;
  undefined4 local_e0;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  bVar1 = true;
  local_2d0 = param_1;
  dVar11 = param_4;
  if (local_b0 != 0) {
    local_2d0 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
    bVar1 = local_2d0 <= 0.0;
    param_3 = param_2;
    dVar11 = param_1;
    local_d0 = param_1;
    local_c8 = param_2;
    local_c0 = local_2d0;
    local_b8 = param_4;
  }
  if (bVar1) {
    local_e0 = 1;
  }
  else {
    local_f1 = 0;
    local_101 = 0;
    local_111 = 0;
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2d0 <= 0.0) {
      puVar6 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      local_111 = 1;
      local_110 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    else {
      uVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_101 = 1;
      local_100 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_e8 = local_2d0;
    if (local_2d0 <= 0.0) {
      local_e8 = 1.0;
    }
    dVar9 = 1.0 / local_e8;
    dVar10 = local_e8;
    local_120 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
    local_148 = dVar9;
    local_140 = dVar10;
    local_138 = param_3;
    local_130 = dVar11;
    _CGRectGetWidth(dVar9,dVar10);
    local_158 = 0x3fc3333333333333;
    dVar10 = local_120 * 0.25;
    local_318 = dVar10;
    if (dVar10 <= 0.15) {
      local_318 = 0.15;
    }
    local_168 = local_318;
    local_150 = local_318;
    local_160 = dVar10;
    local_128 = dVar9;
    _memset(auStack_1b0,0,0x40);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_338 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_338 != 0) {
      lVar8 = *local_1a0;
      local_340 = 0;
      do {
        do {
          if (*local_1a0 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar8,uVar3);
          }
          local_170 = *(long *)(local_1a8 + local_340 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_frame_026ca640);
          lVar7 = local_170;
          local_1d0 = local_318;
          dStack_1c8 = dVar10;
          local_1c0 = param_3;
          dStack_1b8 = dVar11;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_backgroundColor_026ca518);
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = lVar7;
          if (lVar7 == 0) {
            local_3a0 = 0.0;
          }
          else {
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_CGColor_026ca470);
            _CGColorGetAlpha(lVar7);
            local_3a0 = dVar11;
          }
          dVar9 = local_1d0;
          param_3 = local_1c0;
          dVar11 = dStack_1b8;
          _CGRectGetMinY(local_1d0,dStack_1c8);
          dVar2 = ABS(dVar9);
          dVar10 = 0.5;
          if (0.5 < ABS(dVar9)) {
LAB_0014fe84:
            local_3a0 = dVar2;
            local_e0 = 3;
          }
          else {
            dVar9 = local_1d0;
            param_3 = local_1c0;
            dVar11 = dStack_1b8;
            _CGRectGetMinX(local_1d0,dStack_1c8);
            dVar2 = ABS(dVar9);
            dVar10 = 1.0;
            if (1.0 < ABS(dVar9)) goto LAB_0014fe84;
            dVar9 = local_1d0;
            param_3 = local_1c0;
            dVar11 = dStack_1b8;
            _CGRectGetWidth(local_1d0,dStack_1c8);
            dVar2 = ABS(dVar9 - local_128);
            dVar10 = 1.0;
            if (1.0 < ABS(dVar9 - local_128)) goto LAB_0014fe84;
            dVar9 = local_1d0;
            param_3 = local_1c0;
            dVar11 = dStack_1b8;
            _CGRectGetHeight(local_1d0,dStack_1c8);
            dVar2 = ABS(dVar9 - local_120);
            dVar10 = local_150;
            if ((local_150 < ABS(dVar9 - local_120)) ||
               (dVar2 = local_3a0, dVar10 = DAT_02323d38, local_3a0 <= DAT_02323d38))
            goto LAB_0014fe84;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setHidden__026ca970,1);
            local_e0 = 0;
          }
          _objc_storeStrong(&local_1d8,0);
          local_340 = local_340 + 1;
          local_318 = local_3a0;
        } while (local_340 < local_338);
        local_338 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10
                  );
        local_340 = 0;
        local_318 = local_3a0;
      } while (local_338 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_e0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

