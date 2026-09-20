// FUN_0168773c @ 0168773c

void FUN_0168773c(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  undefined *local_260;
  undefined *local_258;
  undefined *local_210;
  undefined *local_208;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  ulong local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01688b74();
  _objc_retainAutoreleasedReturnValue();
  local_130 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_windows_0269dde0);
  _objc_retainAutoreleasedReturnValue();
  local_138 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_count_0269cfe0);
  if (param_2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_138;
    local_138 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  local_140 = 0;
  _memset(auStack_188,0,0x40);
  puVar1 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_208 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_208 != (undefined *)0x0) {
    lVar4 = *local_178;
    local_210 = (undefined *)0x0;
    do {
      do {
        if (*local_178 - lVar4 != 0) {
          _objc_enumerationMutation(*local_178 - lVar4,puVar1);
        }
        uVar5 = *(ulong *)(local_180 + (long)local_210 * 8);
        local_148 = uVar5;
        FUN_01688e80();
        if (((((uVar5 & 1) == 0) &&
             (uVar5 = local_148,
             (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isHidden_026ca768),
             (uVar5 & 1) == 0)) &&
            ((*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_alpha_026ca4d8),
            DAT_02323d38 <= param_1)) &&
           ((*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_windowLevel_026a0f70),
           param_1 <= *(double *)PTR__UIWindowLevelNormal_02578238 + 1.0)) {
          if (local_140 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_windowLevel_026a0f70);
            dVar6 = param_1;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_windowLevel_026a0f70);
            if ((param_1 <= dVar6) &&
               (uVar5 = local_148,
               (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isKeyWindow_0269cd70),
               (uVar5 & 1) == 0)) goto LAB_01687a4c;
          }
          _objc_storeStrong(&local_140,local_148);
        }
LAB_01687a4c:
        local_210 = local_210 + 1;
      } while (local_210 < local_208);
      local_208 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10)
      ;
      local_210 = (undefined *)0x0;
    } while (local_208 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_140 == 0) {
    _memset(auStack_1d0,0,0x40);
    puVar1 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,0x10);
    if (local_258 != (undefined *)0x0) {
      lVar4 = *local_1c0;
      local_260 = (undefined *)0x0;
      do {
        do {
          if (*local_1c0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar4,puVar1);
          }
          uVar5 = *(ulong *)(local_1c8 + (long)local_260 * 8);
          local_190 = uVar5;
          FUN_01688e80();
          if (((uVar5 & 1) == 0) &&
             (uVar5 = local_190,
             (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_isHidden_026ca768),
             (uVar5 & 1) == 0)) {
            _objc_storeStrong(&local_140,local_190);
            goto LAB_01687c40;
          }
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,
                   0x10);
        local_260 = (undefined *)0x0;
      } while (local_258 != (undefined *)0x0);
    }
LAB_01687c40:
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_140 != 0) &&
     (uVar5 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isKeyWindow_0269cd70)
     , (uVar5 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_makeKeyWindow_026ad4d0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_layoutIfNeeded_026ca790);
  uVar5 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

