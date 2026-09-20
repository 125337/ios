// FUN_0079c52c @ 0079c52c

byte FUN_0079c52c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulong local_348;
  ulong local_340;
  ulong local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  ulong local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b1;
  ulong local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  ulong local_d0;
  uint local_c4;
  double local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = param_1;
  if (local_b8 == 0) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
    if (uVar2 == 0) {
      local_a9 = 0;
      local_c4 = 1;
    }
    else {
      local_e8 = local_c0;
      dVar11 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
      dVar13 = 2.0;
      dVar8 = param_3 - local_c0 * 2.0;
      local_110 = dVar11;
      local_108 = param_2;
      local_100 = param_3;
      local_f8 = param_4;
      local_f0 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
      dVar9 = 1.0;
      local_140 = 1.0;
      local_138 = dVar8;
      local_130 = dVar13;
      local_128 = param_3;
      local_120 = dVar11;
      local_118 = param_3;
      _memset(auStack_188,0,0x40);
      uVar2 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_340 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      if (local_340 != 0) {
        lVar6 = *local_178;
        local_348 = 0;
        do {
          do {
            dVar11 = dVar9;
            dVar14 = param_3;
            if (*local_178 - lVar6 != 0) {
              _objc_enumerationMutation(*local_178 - lVar6,uVar2);
              dVar11 = dVar9;
              dVar14 = param_3;
            }
            uVar7 = *(ulong *)(local_180 + local_348 * 8);
            puVar3 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
            local_148 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            bVar1 = true;
            dVar9 = dVar11;
            param_3 = dVar14;
            if ((uVar7 & 1) != 0) {
              uVar7 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isHidden_026ca768);
              bVar1 = true;
              dVar9 = dVar11;
              param_3 = dVar14;
              if ((uVar7 & 1) == 0) {
                param_3 = dVar13;
                dVar9 = dVar8;
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
                bVar1 = dVar9 <= 0.0;
                dVar13 = dVar14;
                dVar8 = dVar11;
                local_1a8 = dVar11;
                local_1a0 = dVar14;
                local_198 = param_3;
                local_190 = dVar9;
              }
            }
            if (!bVar1) {
              uVar7 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_indexPathForCell__0269e208,local_148);
              _objc_retainAutoreleasedReturnValue();
              local_1b0 = uVar7;
              if (uVar7 == 0) {
                local_a9 = 0;
                local_c4 = 1;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
                dVar10 = ABS(dVar9 - local_e8);
                dVar11 = dVar10;
                dVar14 = param_3;
                dVar15 = dVar9;
                local_1d8 = dVar9;
                local_1d0 = param_3;
                local_1c8 = dVar13;
                local_1c0 = dVar8;
                if (local_140 < dVar10) {
LAB_0079ca00:
                  dVar10 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
                  dVar12 = ABS(dVar11);
                  dVar9 = dVar12;
                  dVar13 = dVar10;
                  dVar8 = dVar11;
                  local_218 = dVar11;
                  local_210 = dVar10;
                  local_208 = dVar14;
                  local_200 = dVar15;
                  bVar1 = false;
                  if (dVar12 <= local_140) {
                    dVar13 = local_140;
                    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
                    dVar9 = ABS(dVar10 - local_118);
                    dVar8 = dVar12;
                    local_238 = dVar12;
                    local_230 = dVar13;
                    local_228 = dVar10;
                    local_220 = dVar11;
                    bVar1 = dVar9 <= local_140;
                  }
                }
                else {
                  dVar14 = local_140;
                  dVar12 = dVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
                  dVar11 = ABS(param_3 - local_f0);
                  dVar9 = dVar11;
                  dVar13 = dVar14;
                  dVar8 = dVar10;
                  dVar15 = dVar10;
                  local_1f8 = dVar10;
                  local_1f0 = dVar14;
                  local_1e8 = param_3;
                  local_1e0 = dVar12;
                  bVar1 = true;
                  if (local_140 < dVar11) goto LAB_0079ca00;
                }
                local_1b1 = bVar1;
                if ((bool)local_1b1 == false) {
                  local_a9 = 0;
                  local_c4 = 1;
                  param_3 = local_140;
                }
                else {
                  uVar7 = local_148;
                  dVar14 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_240 = uVar4;
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                  uVar7 = local_240;
                  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                  bVar1 = false;
                  dVar11 = dVar9;
                  dVar15 = dVar14;
                  dVar10 = dVar13;
                  if ((uVar7 & 1) != 0) {
                    dVar11 = dVar8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_bounds_026ca548);
                    bVar1 = false;
                    dVar15 = dVar13;
                    dVar10 = dVar14;
                    dVar8 = dVar9;
                    local_260 = dVar9;
                    local_258 = dVar14;
                    local_250 = dVar13;
                    local_248 = dVar11;
                    if (0.0 < dVar11) {
                      (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_bounds_026ca548);
                      local_280 = dVar11;
                      local_278 = dVar13;
                      local_270 = dVar14;
                      local_268 = dVar9;
                      _CGRectGetWidth(dVar11,dVar13);
                      dVar11 = ABS(dVar11 - local_f0);
                      bVar1 = local_140 < dVar11;
                      dVar15 = local_140;
                      dVar10 = dVar14;
                      dVar8 = dVar9;
                    }
                  }
                  if (bVar1) {
                    local_a9 = 0;
                    local_c4 = 1;
                    dVar9 = dVar11;
                    param_3 = dVar15;
                    dVar13 = dVar10;
                  }
                  else {
                    uVar7 = local_148;
                    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_contentView_026ca5a8);
                    _objc_retainAutoreleasedReturnValue();
                    uVar4 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    uVar5 = uVar4;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_288 = uVar5;
                    (*(code *)PTR__objc_release_02578630)(uVar4);
                    (*(code *)PTR__objc_release_02578630)(uVar7);
                    uVar7 = local_288;
                    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                    bVar1 = false;
                    dVar9 = dVar11;
                    param_3 = dVar15;
                    dVar13 = dVar10;
                    if ((uVar7 & 1) != 0) {
                      dVar9 = dVar8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_bounds_026ca548);
                      bVar1 = false;
                      param_3 = dVar10;
                      dVar13 = dVar15;
                      dVar8 = dVar11;
                      if (0.0 < dVar9) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_bounds_026ca548);
                        _CGRectGetWidth(dVar9,dVar10);
                        dVar9 = ABS(dVar9 - local_f0);
                        bVar1 = local_140 < dVar9;
                        param_3 = local_140;
                        dVar13 = dVar15;
                        dVar8 = dVar11;
                      }
                    }
                    if (bVar1) {
                      local_a9 = 0;
                    }
                    local_c4 = (uint)bVar1;
                    _objc_storeStrong(&local_288,0);
                  }
                  _objc_storeStrong(&local_240,0);
                }
              }
              _objc_storeStrong(&local_1b0,0);
              if (local_c4 != 0) goto LAB_0079d084;
            }
            local_348 = local_348 + 1;
          } while (local_348 < local_340);
          local_340 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                     0x10);
          local_348 = 0;
        } while (local_340 != 0);
      }
      local_c4 = 0;
LAB_0079d084:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_c4 == 0) {
        local_a9 = 1;
        local_c4 = 1;
      }
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

