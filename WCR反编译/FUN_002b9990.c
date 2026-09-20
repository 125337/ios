// FUN_002b9990 @ 002b9990

byte FUN_002b9990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  ulong local_320;
  ulong local_318;
  double local_278;
  double local_248;
  ulong local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  byte local_159;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulong local_d8;
  int local_d0;
  ulong local_c0;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_6);
  if (((local_b8 == 0) || (local_c0 == 0)) || (uVar1 = local_c0, FUN_002ba2a0(), (uVar1 & 1) != 0))
  {
    local_a9 = 0;
    local_d0 = 1;
    goto LAB_002ba21c;
  }
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 1.0;
  local_e8 = 1.0;
  local_d8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
  local_110 = dVar6;
  local_108 = param_2;
  local_100 = param_3;
  local_f8 = param_4;
  _CGRectGetWidth(dVar6,param_2);
  local_248 = dVar6;
  if (dVar6 <= local_e8) {
    local_248 = local_e8;
  }
  local_118 = local_248;
  local_e0 = local_248;
  dVar7 = 1.0;
  local_128 = 1.0;
  local_f0 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
  local_150 = dVar7;
  local_148 = dVar6;
  local_140 = param_3;
  local_138 = param_4;
  _CGRectGetHeight(dVar7,dVar6);
  local_278 = dVar7;
  if (dVar7 <= local_128) {
    local_278 = local_128;
  }
  local_158 = local_278;
  local_120 = local_278;
  local_130 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_frame_026ca640);
  local_180 = local_278;
  local_178 = dVar7;
  local_170 = param_3;
  local_168 = param_4;
  _CGRectGetWidth(local_278,dVar7,param_3);
  dVar6 = local_e0 * DAT_02323c78;
  local_159 = false;
  if (dVar6 <= local_278) {
    dVar7 = DAT_02323c78;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_frame_026ca640);
    local_1a0 = local_278;
    local_198 = dVar6;
    local_190 = dVar7;
    local_188 = param_4;
    _CGRectGetHeight(local_278,dVar6,dVar7,param_4);
    local_159 = local_120 * 0.35 <= local_278;
  }
  uVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_isEqualToString__0269ccc8,&cf__UIBarBackground);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = local_d8,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_containsString__0269d0b0,&cf_BarBackground), (uVar1 & 1) == 0)) &&
     (uVar2 = local_d8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_d8,PTR_s_containsString__0269d0b0,&cf_VisualProvider), uVar1 = local_c0,
     (uVar2 & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar1 & 1) == 0) || ((local_159 & 1) == 0)) {
      uVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,&cf_UIView);
      if (((uVar1 & 1) != 0) && ((local_159 & 1) != 0)) {
        _memset(auStack_1e8,0,0x40);
        uVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_318 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_318 != 0) {
          lVar4 = *local_1d8;
          local_320 = 0;
          do {
            do {
              if (*local_1d8 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1d8 - lVar4,uVar1);
              }
              uVar5 = *(ulong *)(local_1e0 + local_320 * 8);
              local_1a8 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_1a8;
              puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
              local_1f0 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((((uVar2 & 1) == 0) &&
                  (uVar2 = local_1f0,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_containsString__0269d0b0,&cf_Backdrop),
                  (uVar2 & 1) == 0)) &&
                 (uVar5 = local_1f0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_1f0,PTR_s_containsString__0269d0b0,&cf_VisualEffect),
                 uVar2 = local_1a8, (uVar5 & 1) == 0)) {
                puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
                if ((uVar2 & 1) != 0) goto LAB_002ba0d0;
                local_d0 = 0;
              }
              else {
LAB_002ba0d0:
                local_a9 = 1;
                local_d0 = 1;
              }
              _objc_storeStrong(&local_1f0,0);
              if (local_d0 != 0) goto LAB_002ba1a8;
              local_320 = local_320 + 1;
            } while (local_320 < local_318);
            local_318 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,
                       0x10);
            local_320 = 0;
          } while (local_318 != 0);
        }
        local_d0 = 0;
LAB_002ba1a8:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_d0 != 0) goto LAB_002ba1fc;
      }
      local_a9 = 0;
      local_d0 = 1;
    }
    else {
      local_a9 = 1;
      local_d0 = 1;
    }
  }
  else {
    local_a9 = 1;
    local_d0 = 1;
  }
LAB_002ba1fc:
  _objc_storeStrong(&local_d8,0);
LAB_002ba21c:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

