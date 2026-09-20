// FUN_00004e6c @ 00004e6c

void FUN_00004e6c(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_158;
  undefined *local_150;
  ulong local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _memset(auStack_100,0,0x40);
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_150 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_150 != (undefined *)0x0) {
    lVar6 = *local_f0;
    local_158 = (undefined *)0x0;
    do {
      do {
        if (*local_f0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar6,puVar4);
        }
        uVar7 = *(ulong *)(local_f8 + (long)local_158 * 8);
        puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_c0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar5 = local_c0;
        if ((uVar7 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_118[0] = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_activationState_026ca490);
          uVar7 = local_118[0];
          if (uVar5 == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar7;
            bVar1 = true;
          }
          else {
            if (local_b8 == 0) {
              _objc_storeStrong(&local_b8,local_118[0]);
            }
            bVar1 = false;
          }
          _objc_storeStrong(local_118,0);
          bVar2 = true;
          if (bVar1) goto LAB_00005194;
        }
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10)
      ;
      local_158 = (undefined *)0x0;
    } while (local_150 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_00005194:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar5 = local_b8;
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar5;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

