// FUN_007a53b0 @ 007a53b0

byte FUN_007a53b0(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_158;
  undefined *local_150;
  uint local_11c;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_007a5e60();
  if ((param_1 & 1) == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar2 = (uint)puVar4;
    local_11c = 1;
    if (((ulong)puVar4 & 1) != 0) {
      _WCRefineHomeGroupingRegularGateAllowed();
      local_11c = uVar2 ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_11c & 1) == 0) {
      _memset(auStack_108,0,0x40);
      puVar3 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_150 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      if (local_150 != (undefined *)0x0) {
        lVar5 = *local_f8;
        local_158 = (undefined *)0x0;
        do {
          do {
            if (*local_f8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar5,puVar4);
            }
            uVar6 = *(ulong *)(local_100 + (long)local_158 * 8);
            local_c8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_disabled_026a2c20);
            if ((((uVar6 & 1) == 0) &&
                (uVar6 = local_c8,
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_kind_026a27e8), uVar6 == 3)) &&
               (uVar6 = local_c8,
               (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_scope_0269ea90), uVar6 == 0x20))
            {
              local_a9 = 1;
              bVar1 = true;
              goto LAB_007a5738;
            }
            local_158 = local_158 + 1;
          } while (local_158 < local_150);
          local_150 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                     0x10);
          local_158 = (undefined *)0x0;
        } while (local_150 != (undefined *)0x0);
      }
      bVar1 = false;
LAB_007a5738:
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (!bVar1) {
        local_a9 = 0;
      }
    }
    else {
      local_a9 = 0;
    }
  }
  else {
    local_a9 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

