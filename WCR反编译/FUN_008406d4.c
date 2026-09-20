// FUN_008406d4 @ 008406d4

void FUN_008406d4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong local_370;
  ulong local_2e0;
  ulong local_2d8;
  double local_298;
  ulong local_1a8;
  double local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_110;
  undefined8 local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  double local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = param_5;
  local_b8 = param_5;
  local_b0 = param_5;
  _objc_autoreleasePoolPush();
  _CFAbsoluteTimeGetCurrent();
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar7 = param_3;
  local_110 = param_1;
  local_108 = param_2;
  local_100 = param_3;
  local_f8 = param_4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_f0 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_148 = param_3;
  local_140 = dVar7;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_298 = param_1;
  if (param_1 <= local_f0) {
    local_298 = local_f0;
  }
  local_150 = local_298;
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  dVar7 = local_298;
  local_128 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_e8 = local_298 * dVar7;
  if (local_298 * dVar7 < 1.0) {
    local_e8 = 3537.0;
  }
  dVar7 = local_e8;
  _memset(auStack_198,0,0x40);
  uVar3 = *(ulong *)(param_5 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_2d8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_2d8 != 0) {
    lVar6 = *local_188;
    local_2e0 = 0;
    do {
      do {
        uVar4 = local_2d8;
        if (*local_188 - lVar6 != 0) {
          uVar4 = uVar3;
          _objc_enumerationMutation(*local_188 - lVar6);
        }
        local_158 = *(ulong *)(local_190 + local_2e0 * 8);
        FUN_0082ba38();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if (uVar5 == 0) {
          _CFAbsoluteTimeGetCurrent();
          uVar4 = local_158;
          dVar9 = local_e8;
          local_1a0 = dVar7;
          FUN_0082c88c();
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = uVar4;
          _CFAbsoluteTimeGetCurrent();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          dVar7 = (dVar9 - local_1a0) * 1000.0;
          if (local_1a8 == 0) {
            local_d8 = local_d8 + 1;
            uVar4 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_action_failpath___decodeMs___1f);
            _objc_retainAutoreleasedReturnValue();
            FUN_00840570(&cf_prefetch_item);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          else {
            uVar4 = local_1a8;
            dVar9 = dVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_images_026ca698);
            _objc_retainAutoreleasedReturnValue();
            local_370 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            if (local_370 < 2) {
              local_370 = 1;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_size_026cab00);
            dVar8 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_scale_026ca830);
            dVar9 = dVar9 * dVar8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_size_026cab00);
            dVar9 = dVar9 * dVar8;
            uVar4 = local_1a8;
            dVar8 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_scale_026ca830);
            dVar10 = (double)NEON_ucvtf(local_370);
            FUN_0082ba38();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_c8 = local_c8 + 1;
            local_e0 = local_e0 + (long)(dVar9 * dVar8 * 4.0 * dVar10);
            uVar4 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_size_026cab00);
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_size_026cab00);
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_scale_026ca830);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_stringWithFormat__0269cca8,
                       &cf_action_decodepath___decodeMs___1fcostKB__lupx___0fx__0f___0f);
            _objc_retainAutoreleasedReturnValue();
            FUN_00840570(&cf_prefetch_item);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          _objc_storeStrong(&local_1a8,0);
        }
        else {
          local_d0 = local_d0 + 1;
        }
        local_2e0 = local_2e0 + 1;
      } while (local_2e0 < local_2d8);
      local_2d8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_2e0 = 0;
    } while (local_2d8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  _CFAbsoluteTimeGetCurrent();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_stringWithFormat__0269cca8,
             &cf_decoded__luskipped__lufailed__luelapsedMs___1ftotalCostKB__llu);
  _objc_retainAutoreleasedReturnValue();
  FUN_00840570(&cf_prefetch_end);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_autoreleasePoolPop(lVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

