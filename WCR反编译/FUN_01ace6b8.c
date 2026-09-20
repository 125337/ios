// FUN_01ace6b8 @ 01ace6b8

byte FUN_01ace6b8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_130;
  undefined *local_128;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _memset(auStack_f8,0,0x40);
  puVar2 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_128 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
  if (local_128 != (undefined *)0x0) {
    lVar4 = *local_e8;
    local_130 = (undefined *)0x0;
    do {
      do {
        if (*local_e8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar4,puVar3);
        }
        uVar5 = *(ulong *)(local_f0 + (long)local_130 * 8);
        local_b8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_disabled_026a2c20);
        if ((((uVar5 & 1) == 0) &&
            (uVar5 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_kind_026a27e8),
            uVar5 == 3)) &&
           (uVar5 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_scope_0269ea90),
           uVar5 == 0x20)) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_01ace8c4;
        }
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_130 = (undefined *)0x0;
    } while (local_128 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_01ace8c4:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    local_a9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

