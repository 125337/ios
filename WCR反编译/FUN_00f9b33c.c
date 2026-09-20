// FUN_00f9b33c @ 00f9b33c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f9b33c(double param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_2c0;
  undefined *local_2b0;
  ulong local_280;
  ulong local_278;
  undefined *local_238;
  undefined *local_230;
  undefined *local_1f8;
  undefined *local_1e8;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  local_140 = (undefined *)0x0;
  _memset(auStack_188,0,0x40);
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_230 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_230 != (undefined *)0x0) {
    lVar5 = *local_178;
    local_238 = (undefined *)0x0;
    do {
      do {
        if (*local_178 - lVar5 != 0) {
          _objc_enumerationMutation(*local_178 - lVar5,puVar4);
        }
        uVar8 = *(ulong *)(local_180 + (long)local_238 * 8);
        puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_148 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((uVar8 & 1) != 0) &&
           (uVar8 = local_148,
           (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_activationState_026ca490),
           uVar8 == 0)) {
          _memset(auStack_1d0,0,0x40);
          uVar8 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_278 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_278 != 0) {
            lVar6 = *local_1c0;
            local_280 = 0;
            do {
              do {
                if (*local_1c0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1c0 - lVar6,uVar8);
                }
                uVar7 = *(ulong *)(local_1c8 + local_280 * 8);
                local_190 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768);
                bVar1 = false;
                bVar2 = true;
                if ((uVar7 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_alpha_026ca4d8);
                  bVar2 = true;
                  if (DAT_02323d38 <= param_1) {
                    local_1d8 = local_190;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_190,PTR_s_rootViewController_026ca820);
                    _objc_retainAutoreleasedReturnValue();
                    bVar1 = true;
                    bVar2 = local_1d8 == 0;
                  }
                }
                if (bVar1) {
                  (*(code *)PTR__objc_release_02578630)(local_1d8);
                }
                if ((!bVar2) &&
                   ((*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_windowLevel_026a0f70),
                   param_1 == *(double *)PTR__UIWindowLevelNormal_02578238)) {
                  uVar7 = local_190;
                  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_isKeyWindow_0269cd70);
                  if ((uVar7 & 1) != 0) {
                    _objc_storeStrong(&local_138,local_190);
                    goto LAB_00f9b7a8;
                  }
                  if (local_140 == (undefined *)0x0) {
                    _objc_storeStrong(&local_140,local_190);
                  }
                }
                local_280 = local_280 + 1;
              } while (local_280 < local_278);
              local_278 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,
                         auStack_128,0x10);
              local_280 = 0;
            } while (local_278 != 0);
          }
LAB_00f9b7a8:
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if (local_138 != (undefined *)0x0) goto LAB_00f9b850;
        }
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10)
      ;
      local_238 = (undefined *)0x0;
    } while (local_230 != (undefined *)0x0);
  }
LAB_00f9b850:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_2b0 = local_138;
  bVar1 = false;
  if (local_138 == (undefined *)0x0) {
    local_2c0 = local_140;
    bVar1 = local_140 == (undefined *)0x0;
    if (bVar1) {
      local_1e8 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      local_2c0 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = local_2c0;
    }
    local_2b0 = local_2c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_2b0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_1f8);
    (*(code *)PTR__objc_release_02578630)(local_1e8);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

