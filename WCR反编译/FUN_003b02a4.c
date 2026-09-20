// FUN_003b02a4 @ 003b02a4

void FUN_003b02a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,double *param_7,undefined8 param_8,
                 long param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  ulong local_2a0;
  ulong local_298;
  double local_248;
  double local_240;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  char local_16a;
  byte local_169;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  long local_d0;
  ulong local_c8;
  double *local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  local_c8 = 0;
  local_c0 = param_7;
  _objc_storeStrong(&local_c8,param_8);
  local_d0 = param_9;
  if (((((local_b0 == 0) || (local_b8 == 0)) || (local_c0 == (double *)0x0)) ||
      ((param_9 < 0 ||
       (uVar1 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isHidden_026ca768),
       (uVar1 & 1) != 0)))) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_alpha_026ca4d8), param_1 < DAT_02323c88))
  {
    local_d4 = 1;
  }
  else {
    uVar1 = local_b0;
    dVar6 = DAT_02323c88;
    FUN_003b0940();
    if ((uVar1 & 1) != 0) {
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
      local_118 = param_1;
      local_110 = dVar6;
      local_108 = param_3;
      local_100 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_convertRect_toView__0269ded8,local_b8);
      local_f8 = param_1;
      local_f0 = dVar6;
      local_e8 = param_3;
      local_e0 = param_4;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
      local_140 = param_1;
      local_138 = dVar6;
      local_130 = param_3;
      local_128 = param_4;
      _CGRectGetHeight();
      local_120 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
      local_168 = param_1;
      local_160 = dVar6;
      local_158 = param_3;
      local_150 = param_4;
      _CGRectGetWidth(param_1,dVar6,param_3,param_4);
      dVar6 = local_f8;
      local_148 = param_1;
      _CGRectGetMaxY(local_f8,local_f0,local_e8,local_e0);
      local_169 = local_120 * DAT_02323d60 < dVar6;
      dVar6 = local_f8;
      _CGRectGetMaxX(local_f8,local_f0,local_e8,local_e0);
      local_16a = false;
      if (0.0 < dVar6) {
        dVar6 = local_f8;
        _CGRectGetMinX(local_f8,local_f0,local_e8,local_e0);
        local_16a = dVar6 < local_148;
      }
      dVar6 = local_120;
      if (((local_169 & 1) != 0) && ((bool)local_16a != false)) {
        local_180 = 0.0;
        dVar7 = local_f8;
        _CGRectGetMinY(local_f8,local_f0,local_e8,local_e0);
        local_188 = (dVar6 - dVar7) + 12.0;
        local_240 = local_188;
        if (local_188 <= local_180) {
          local_240 = local_180;
        }
        local_190 = local_240;
        local_178 = local_240;
        local_198 = *local_c0;
        local_1a0 = local_240;
        local_248 = local_198;
        if (local_198 < local_240) {
          local_248 = local_240;
        }
        local_1a8 = local_248;
        *local_c0 = local_248;
        uVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
        uVar1 = local_c8;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (uVar2 < 8) {
          uVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tag_026cab98);
          FUN_003b0c48(local_f8,local_f0,local_e8,local_e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_stringWithFormat__0269cca8,&cf___tag__ldframe___clearance___1f);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
      }
    }
    _memset(auStack_1f0,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_298 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_298 != 0) {
      lVar5 = *local_1e0;
      local_2a0 = 0;
      do {
        do {
          if (*local_1e0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1e0 - lVar5,uVar1);
          }
          local_1b0 = *(undefined8 *)(local_1e8 + local_2a0 * 8);
          FUN_003b02a4(local_1b0,local_b8,local_c0,local_c8,local_d0 + -1);
          local_2a0 = local_2a0 + 1;
        } while (local_2a0 < local_298);
        local_298 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10
                  );
        local_2a0 = 0;
      } while (local_298 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

