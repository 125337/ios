// FUN_00f839c4 @ 00f839c4

double FUN_00f839c4(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double local_3f8;
  double local_3f0;
  undefined *local_388;
  undefined *local_380;
  ulong local_260;
  double local_258;
  double local_250;
  undefined8 local_248;
  double local_240;
  double local_238;
  undefined8 local_230;
  undefined8 local_228;
  double local_220;
  char local_211;
  double local_210;
  undefined1 local_201;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  undefined1 local_1ba;
  byte local_1b9;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  undefined *local_168;
  undefined *local_160;
  byte local_151;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  long *local_100;
  ulong local_f8;
  undefined4 local_ec;
  long local_e8;
  long local_e0;
  ulong local_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double dStack_b8;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_5);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_6);
  lVar4 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
  local_d0 = param_1;
  uStack_c8 = param_2;
  local_c0 = param_3;
  dStack_b8 = param_4;
  if (local_e8 == 0) {
    local_ec = 1;
  }
  else {
    uVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_getReferView_026acc38);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_getReferView_026acc38);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_f8 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar5 & 1) != 0) {
        param_1 = 4.0;
        FUN_00f89938(&local_d0,local_f8,local_e8);
      }
      _objc_storeStrong(&local_f8,0);
    }
    for (local_100 = &DAT_0280e100; *local_100 != 0; local_100 = local_100 + 1) {
      uVar5 = local_d8;
      FUN_00f877ac(local_d8,*local_100);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 4.0;
      FUN_00f89938(&local_d0,uVar5,local_e8);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
    local_128 = param_1;
    local_120 = param_2;
    local_118 = param_3;
    local_110 = param_4;
    _CGRectGetMinX(param_1,param_2);
    uVar8 = 0x4028000000000000;
    param_1 = param_1 - 12.0;
    local_108 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
    local_150 = param_1;
    local_148 = uVar8;
    local_140 = param_3;
    local_138 = param_4;
    _CGRectGetMaxX(param_1,uVar8);
    local_3f8 = param_1 + 12.0;
    uVar5 = local_d8;
    local_130 = local_3f8;
    FUN_00f89c1c();
    local_151 = (byte)uVar5;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_d8);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    while (puVar3 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0)
          , puVar3 != (undefined *)0x0) {
      puVar3 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_removeLastObject_0269e830);
      if (((long)local_168 - local_d8 == 0) ||
         (puVar3 = local_168, FUN_00f89624((long)local_168 - local_d8), ((ulong)puVar3 & 1) == 0)) {
        _memset(auStack_1b0,0,0x40);
        puVar3 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_380 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_380 != (undefined *)0x0) {
          lVar4 = *local_1a0;
          local_388 = (undefined *)0x0;
          do {
            do {
              if (*local_1a0 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1a0 - lVar4,puVar3);
              }
              uVar5 = *(ulong *)(local_1a8 + (long)local_388 * 8);
              local_170 = uVar5;
              if ((uVar5 - local_e0 != 0) && (FUN_00f89624(uVar5 - local_e0), (uVar5 & 1) == 0)) {
                uVar5 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                local_1b8 = uVar5;
                FUN_00f8984c();
                local_1b9 = (byte)uVar5;
                uVar5 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_containsString__0269d0b0,&cf_RichText);
                local_1ba = (undefined1)uVar5;
                if ((((local_1b9 & 1) != 0) || (((local_151 & 1) != 0 && ((uVar5 & 1) != 0)))) &&
                   ((uVar5 = local_170,
                    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_isHidden_026ca768),
                    (uVar5 & 1) == 0 &&
                    ((*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_alpha_026ca4d8),
                    uVar5 = local_170, DAT_02323d38 <= local_3f8)))) {
                  dVar7 = DAT_02323d38;
                  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_bounds_026ca548);
                  local_200 = local_3f8;
                  local_1f8 = dVar7;
                  local_1f0 = param_3;
                  local_1e8 = param_4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_convertRect_toView__0269ded8,local_e8);
                  local_1e0 = local_3f8;
                  local_1d8 = dVar7;
                  local_1d0 = param_3;
                  local_1c8 = param_4;
                  _CGRectGetMaxX(local_3f8,dVar7);
                  bVar2 = false;
                  if (local_108 <= local_3f8) {
                    local_3f8 = local_1e0;
                    param_3 = local_1d0;
                    param_4 = local_1c8;
                    _CGRectGetMinX(local_1e0,local_1d8);
                    bVar2 = local_3f8 <= local_130;
                  }
                  local_201 = bVar2;
                  if (((bool)local_201 != false) &&
                     (local_3f8 = local_1e0, param_3 = local_1d0, param_4 = local_1c8,
                     _CGRectIsEmpty(local_1e0,local_1d8), (uVar5 & 1) == 0)) {
                    dVar7 = local_1e0;
                    _CGRectGetMinY(local_1e0,local_1d8,local_1d0,local_1c8);
                    dVar6 = local_d0;
                    _CGRectGetMaxY(local_d0,uStack_c8,local_c0,dStack_b8);
                    local_210 = dVar7 - dVar6;
                    local_3f8 = local_d0;
                    uVar8 = uStack_c8;
                    param_3 = local_c0;
                    param_4 = dStack_b8;
                    _CGRectInset();
                    local_238 = local_3f8;
                    local_230 = uVar8;
                    local_228 = param_3;
                    local_220 = param_4;
                    _CGRectIntersectsRect
                              (local_3f8,uVar8,param_3,param_4,local_1e0,local_1d8,local_1d0,
                               local_1c8);
                    bVar2 = true;
                    if (((uVar5 & 1) == 0) &&
                       ((bVar2 = false, (local_1b9 & 1) != 0 &&
                        (local_3f8 = local_210, bVar2 = false, local_210 < 40.0)))) {
                      local_3f8 = local_1e0;
                      dVar6 = local_1d8;
                      uVar8 = local_1d0;
                      param_4 = local_1c8;
                      _CGRectGetMinY();
                      dVar7 = local_3f8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
                      local_258 = dVar7;
                      local_250 = dVar6;
                      local_248 = uVar8;
                      local_240 = param_4;
                      _CGRectGetMinY(dVar7,dVar6,uVar8);
                      param_3 = 0x4020000000000000;
                      bVar2 = dVar7 - 8.0 <= local_3f8;
                    }
                    local_211 = bVar2;
                    if ((bool)local_211 != false) {
                      uVar8 = 0;
                      dVar7 = 4.0;
                      if ((local_1b9 & 1) == 0) {
                        dVar7 = 0.0;
                      }
                      FUN_00f89938(local_1b9 & 1,&local_d0,local_170,local_e8);
                      uVar5 = local_170;
                      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_superview_026cab50);
                      _objc_retainAutoreleasedReturnValue();
                      local_260 = uVar5;
                      if ((((uVar5 != 0) && (uVar5 != local_d8)) && (uVar5 - local_e8 != 0)) &&
                         (FUN_00f89624(uVar5 - local_e8), uVar1 = local_260, (uVar5 & 1) == 0)) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_bounds_026ca548);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar1,PTR_s_convertRect_toView__0269ded8,local_e8);
                        dVar6 = param_4;
                        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
                        if (((param_4 < dVar6 * DAT_02323d00) &&
                            (dVar6 = dVar7, _CGRectGetMaxX(dVar7,uVar8,param_3,param_4),
                            local_108 <= dVar6)) &&
                           (_CGRectGetMinX(dVar7,uVar8,param_3,param_4), dVar7 <= local_130)) {
                          _CGRectInset();
                          _CGRectUnion();
                        }
                      }
                      dVar6 = local_108;
                      local_3f0 = local_d0;
                      _CGRectGetMinX(local_d0,uStack_c8,local_c0,dStack_b8);
                      dVar7 = local_130;
                      local_3f0 = local_3f0 - 12.0;
                      if (dVar6 < local_3f0) {
                        local_3f0 = dVar6;
                      }
                      local_108 = local_3f0;
                      local_3f8 = local_d0;
                      param_3 = local_c0;
                      param_4 = dStack_b8;
                      _CGRectGetMaxX(local_d0,uStack_c8);
                      local_3f8 = local_3f8 + 12.0;
                      if (local_3f8 <= dVar7) {
                        local_3f8 = dVar7;
                      }
                      local_130 = local_3f8;
                      _objc_storeStrong(&local_260,0);
                    }
                  }
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_170)
                ;
                _objc_storeStrong(&local_1b8,0);
              }
              local_388 = local_388 + 1;
            } while (local_388 < local_380);
            local_380 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8
                       ,0x10);
            local_388 = (undefined *)0x0;
          } while (local_380 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_ec = 0;
      }
      else {
        local_ec = 5;
      }
      _objc_storeStrong(&local_168,0);
    }
    local_ec = 1;
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_d0;
}

