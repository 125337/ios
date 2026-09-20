// FUN_005ba6bc @ 005ba6bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005ba6bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_270;
  ulong local_268;
  undefined *local_218;
  undefined *local_210;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (undefined *)0x0;
  _memset(auStack_178,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_210 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
  if (local_210 != (undefined *)0x0) {
    lVar4 = *local_168;
    local_218 = (undefined *)0x0;
    do {
      do {
        if (*local_168 - lVar4 != 0) {
          _objc_enumerationMutation(*local_168 - lVar4,puVar2);
        }
        uVar7 = *(ulong *)(local_170 + (long)local_218 * 8);
        puVar1 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_138 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar7 & 1) != 0) {
          _memset(auStack_1d0,0,0x40);
          uVar7 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_268 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_268 != 0) {
            lVar5 = *local_1c0;
            local_270 = 0;
            do {
              do {
                if (*local_1c0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1c0 - lVar5,uVar7);
                }
                uVar6 = *(ulong *)(local_1c8 + local_270 * 8);
                local_190 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKeyWindow_0269cd70);
                if ((uVar6 & 1) != 0) {
                  _objc_storeStrong(&local_130,local_190);
                  goto LAB_005baa7c;
                }
                local_270 = local_270 + 1;
              } while (local_270 < local_268);
              local_268 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,
                         auStack_128,0x10);
              local_270 = 0;
            } while (local_268 != 0);
          }
LAB_005baa7c:
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if (local_130 != (undefined *)0x0) goto LAB_005bab30;
        }
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10)
      ;
      local_218 = (undefined *)0x0;
    } while (local_210 != (undefined *)0x0);
  }
LAB_005bab30:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_130 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_130;
    local_130 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}

