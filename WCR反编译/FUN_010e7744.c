// FUN_010e7744 @ 010e7744

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010e7744(double param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong local_250;
  ulong local_248;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _memset(auStack_180,0,0x40);
  puVar8 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar8);
  local_200 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_200 != (undefined *)0x0) {
    lVar6 = *local_170;
    local_208 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar6 != 0) {
          _objc_enumerationMutation(*local_170 - lVar6,puVar3);
        }
        uVar9 = *(ulong *)(local_178 + (long)local_208 * 8);
        local_140 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_activationState_026ca490);
        uVar4 = local_140;
        if (uVar9 == 0) {
          puVar8 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar8);
          if ((uVar4 & 1) != 0) {
            _memset(auStack_1c8,0,0x40);
            uVar4 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_248 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_248 != 0) {
              lVar7 = *local_1b8;
              local_250 = 0;
              do {
                do {
                  if (*local_1b8 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_1b8 - lVar7,uVar4);
                  }
                  puVar8 = *(undefined **)(local_1c0 + local_250 * 8);
                  local_188 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_isHidden_026ca768);
                  if ((((ulong)puVar8 & 1) == 0) &&
                     ((*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_alpha_026ca4d8),
                     DAT_02323d38 <= param_1)) {
                    puVar5 = local_188;
                    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKeyWindow_0269cd70);
                    puVar8 = local_188;
                    if (((ulong)puVar5 & 1) != 0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_130 = puVar8;
                      bVar1 = true;
                      goto LAB_010e7ae8;
                    }
                    if (local_138 == (undefined *)0x0) {
                      _objc_storeStrong(&local_138,local_188);
                    }
                  }
                  local_250 = local_250 + 1;
                } while (local_250 < local_248);
                local_248 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,
                           auStack_128,0x10);
                local_250 = 0;
              } while (local_248 != 0);
            }
            bVar1 = false;
LAB_010e7ae8:
            (*(code *)PTR__objc_release_02578630)(uVar4);
            bVar2 = true;
            if (bVar1) goto LAB_010e7b70;
          }
        }
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_208 = (undefined *)0x0;
    } while (local_200 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_010e7b70:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar8 = local_138;
  if (!bVar2) {
    if (local_138 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar8);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar8;
    }
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

