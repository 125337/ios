// FUN_002c963c @ 002c963c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c963c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8,ulong param_9
                 )

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_420;
  ulong local_418;
  byte local_348;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  double local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  double local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  double local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1b9;
  double local_1b8;
  double local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  double local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_129;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulong local_108;
  undefined4 local_100;
  ulong local_f0;
  ulong local_e8;
  byte local_d9;
  long local_d8;
  ulong local_d0;
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong uVar4;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_1;
  uStack_c0 = param_2;
  local_b8 = param_3;
  uStack_b0 = param_4;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  local_e8 = 0;
  local_d9 = param_7;
  _objc_storeStrong(&local_e8,param_8);
  local_f0 = param_9;
  if ((((local_d0 == 0) || (local_d8 == 0)) || (9 < param_9)) ||
     (uVar3 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0),
     0x30 < uVar3)) {
    local_100 = 1;
  }
  else {
    uVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tag_026cab98);
    if (uVar3 == 0x24f753) {
      local_100 = 1;
    }
    else {
      uVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_d0;
      local_108 = uVar3;
      FUN_002ca6ec(local_d0,local_d8);
      uVar1 = (uint)uVar4;
      local_150 = param_1;
      uStack_148 = param_2;
      local_140 = param_3;
      uStack_138 = param_4;
      local_128 = param_1;
      uStack_120 = param_2;
      local_118 = param_3;
      uStack_110 = param_4;
      _CGRectIsNull(param_1,param_2,param_3,param_4);
      uVar2 = 0;
      local_348 = 0;
      if ((uVar1 & 1) == 0) {
        uStack_168 = uStack_120;
        local_170 = local_128;
        uStack_158 = uStack_110;
        local_160 = local_118;
        _CGRectIsEmpty(local_128,uStack_120,local_118,uStack_110);
        local_348 = 0;
        if ((uVar2 & 1) == 0) {
          uStack_188 = uStack_120;
          local_190 = local_128;
          uStack_178 = uStack_110;
          local_180 = local_118;
          uStack_1a8 = uStack_c0;
          local_1b0 = local_c8;
          uStack_198 = uStack_b0;
          local_1a0 = local_b8;
          local_348 = 0;
          _CGRectIntersectsRect
                    (local_128,uStack_120,local_118,uStack_110,local_c8,uStack_c0,local_b8,uStack_b0
                    );
        }
      }
      local_129 = local_348 & 1;
      dVar8 = 200.0;
      if ((local_d9 & 1) == 0) {
        dVar8 = 140.0;
      }
      uVar3 = local_108;
      local_1b8 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_containsString__0269d0b0,&cf_Replicant);
      local_1b9 = false;
      if (((uVar3 & 1) != 0) && (local_1b9 = false, (local_129 & 1) != 0)) {
        uStack_1d8 = uStack_120;
        local_1e0 = local_128;
        uStack_1c8 = uStack_110;
        local_1d0 = local_118;
        dVar8 = local_128;
        _CGRectGetHeight(local_128,uStack_120,local_118,uStack_110);
        local_1b9 = false;
        if (dVar8 <= local_1b8) {
          uStack_1f8 = uStack_120;
          local_200 = local_128;
          uStack_1e8 = uStack_110;
          local_1f0 = local_118;
          dVar8 = local_128;
          _CGRectGetWidth(local_128,uStack_120,local_118,uStack_110);
          local_1b9 = false;
          if (20.0 <= dVar8) {
            uStack_218 = uStack_120;
            local_220 = local_128;
            uStack_208 = uStack_110;
            local_210 = local_118;
            dVar8 = local_128;
            uVar10 = uStack_120;
            uVar11 = local_118;
            uVar12 = uStack_110;
            _CGRectGetWidth();
            dVar9 = dVar8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
            local_240 = dVar9;
            local_238 = uVar10;
            local_230 = uVar11;
            local_228 = uVar12;
            _CGRectGetWidth(dVar9,uVar10,uVar11,uVar12);
            local_1b9 = dVar8 <= dVar9 + 90.0;
          }
        }
      }
      if (((bool)local_1b9 == false) ||
         (uVar3 = local_d0, FUN_002ca9fc(local_d0,0x24f753), (uVar3 & 1) != 0)) {
        _memset(auStack_2a8,0,0x40);
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_418 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_418 != 0) {
          lVar7 = *local_298;
          local_420 = 0;
          do {
            do {
              if (*local_298 - lVar7 != 0) {
                _objc_enumerationMutation(*local_298 - lVar7,uVar3);
              }
              local_268 = *(undefined8 *)(local_2a0 + local_420 * 8);
              FUN_002c963c(local_c8,uStack_c0,local_b8,uStack_b0,local_268,local_d8,local_d9 & 1,
                           local_e8,local_f0 + 1);
              local_420 = local_420 + 1;
            } while (local_420 < local_418);
            local_418 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_a8,
                       0x10);
            local_420 = 0;
          } while (local_418 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_100 = 0;
      }
      else {
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isHidden_026ca768);
        if (((uVar3 & 1) == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_alpha_026ca4d8),
           DAT_02323db0 < dVar8)) {
          uVar3 = local_e8;
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          uVar4 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_alpha_026ca4d8);
          uStack_258 = uStack_120;
          local_260 = local_128;
          uStack_248 = uStack_110;
          local_250 = local_118;
          _NSStringFromCGRect(local_128,uStack_120,local_118,uStack_110);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_d0;
          FUN_002caba4();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_stringWithFormat__0269cca8,&cf___a___2ff___chain___);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)(0,local_d0,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setUserInteractionEnabled__026caad8,0);
        local_100 = 1;
      }
      _objc_storeStrong(&local_108,0);
    }
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

