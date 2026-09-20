// FUN_01ed40a8 @ 01ed40a8

void FUN_01ed40a8(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *local_298;
  ulong local_268;
  ulong local_260;
  undefined *local_220;
  undefined *local_218;
  undefined *local_1e8;
  undefined *local_1d8;
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
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar3;
  _memset(auStack_180,0,0x40);
  puVar3 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_connectedScenes_026ca590);
  _objc_retainAutoreleasedReturnValue();
  local_218 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_218 != (undefined *)0x0) {
    lVar6 = *local_170;
    local_220 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar6 != 0) {
          _objc_enumerationMutation(*local_170 - lVar6,puVar3);
        }
        uVar9 = *(ulong *)(local_178 + (long)local_220 * 8);
        local_140 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_activationState_026ca490);
        uVar5 = local_140;
        if (uVar9 == 0) {
          puVar4 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar5 & 1) != 0) {
            _memset(auStack_1c8,0,0x40);
            uVar5 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_260 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_260 != 0) {
              lVar7 = *local_1b8;
              local_268 = 0;
              do {
                do {
                  if (*local_1b8 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_1b8 - lVar7,uVar5);
                  }
                  puVar8 = *(undefined **)(local_1c0 + local_268 * 8);
                  local_188 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_isKeyWindow_0269cd70);
                  puVar4 = local_188;
                  if (((ulong)puVar8 & 1) != 0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_130 = puVar4;
                    bVar1 = true;
                    goto LAB_01ed43cc;
                  }
                  local_268 = local_268 + 1;
                } while (local_268 < local_260);
                local_260 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,
                           auStack_128,0x10);
                local_268 = 0;
              } while (local_260 != 0);
            }
            bVar1 = false;
LAB_01ed43cc:
            (*(code *)PTR__objc_release_02578630)(uVar5);
            bVar2 = true;
            if (bVar1) goto LAB_01ed4454;
          }
        }
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_220 = (undefined *)0x0;
    } while (local_218 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_01ed4454:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    puVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_keyWindow_0269d308);
    _objc_retainAutoreleasedReturnValue();
    local_298 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_1d8 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_windows_0269dde0);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_298 = local_1e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_298;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_1e8);
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

