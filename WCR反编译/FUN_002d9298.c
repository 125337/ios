// FUN_002d9298 @ 002d9298

byte FUN_002d9298(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_268;
  ulong local_260;
  undefined *local_210;
  undefined *local_208;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  undefined *local_138;
  byte local_129;
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
  local_208 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_208 != (undefined *)0x0) {
    lVar5 = *local_170;
    local_210 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,puVar3);
        }
        uVar8 = *(ulong *)(local_178 + (long)local_210 * 8);
        puVar4 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_140 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar8 & 1) != 0) {
          _memset(auStack_1d8,0,0x40);
          uVar8 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_260 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_260 != 0) {
            lVar6 = *local_1c8;
            local_268 = 0;
            do {
              do {
                if (*local_1c8 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1c8 - lVar6,uVar8);
                }
                uVar7 = *(ulong *)(local_1d0 + local_268 * 8);
                local_198 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768);
                if (((uVar7 & 1) == 0) && (uVar7 = local_198, FUN_002c93b8(), (uVar7 & 1) != 0)) {
                  local_129 = 1;
                  bVar1 = true;
                  goto LAB_002d962c;
                }
                local_268 = local_268 + 1;
              } while (local_268 < local_260);
              local_260 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                         auStack_128,0x10);
              local_268 = 0;
            } while (local_260 != 0);
          }
          bVar1 = false;
LAB_002d962c:
          (*(code *)PTR__objc_release_02578630)(uVar8);
          bVar2 = true;
          if (bVar1) goto LAB_002d96c0;
        }
        local_210 = local_210 + 1;
      } while (local_210 < local_208);
      local_208 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_210 = (undefined *)0x0;
    } while (local_208 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_002d96c0:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    local_129 = 0;
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

