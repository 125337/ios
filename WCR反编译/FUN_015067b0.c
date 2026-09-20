// FUN_015067b0 @ 015067b0

void FUN_015067b0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong local_198;
  void *local_170;
  void *local_168;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  byte local_c9;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  _WCRSideloadReadEffectiveEntitlements();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01506040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c9 = 0;
  local_140 = uVar3;
  if (uVar3 == 0) {
    local_140 = *(ulong *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_mutableCopy_0269d8a0);
    local_c8 = local_140;
  }
  local_c9 = uVar3 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_140;
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pvVar4 = _memset(auStack_118,0,0x40);
  FUN_01506378();
  _objc_retainAutoreleasedReturnValue();
  local_168 = pvVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_168 != (void *)0x0) {
    lVar5 = *local_108;
    local_170 = (void *)0x0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,pvVar4);
        }
        local_d8 = *(undefined8 *)(local_110 + (long)local_170 * 8);
        uVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsObject__0269cbb8,local_d8);
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_d8);
        }
        local_170 = (void *)((long)local_170 + 1);
      } while (local_170 < local_168);
      local_168 = pvVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_170 = (void *)0x0;
    } while (local_168 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar4);
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  local_198 = uVar1;
  if (uVar1 == 0) {
    local_198 = *(ulong *)PTR____NSArray0___02578280;
  }
  _objc_storeStrong(&DAT_028e3828,local_198);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

