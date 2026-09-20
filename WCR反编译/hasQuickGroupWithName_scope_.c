// hasQuickGroupWithName:scope: @ 01ab56b8

/* Function Stack Size: 0x20 bytes */

bool WCRGroupListViewController::hasQuickGroupWithName_scope_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  undefined *local_180;
  undefined *local_178;
  cfstringStruct *local_148;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  cfstringStruct *local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  if (local_c8 == (cfstringStruct *)0x0) {
    local_148 = &::cf___;
  }
  else {
    local_148 = local_c8;
  }
  local_d0 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_148;
  _memset(auStack_120,0,0x40);
  puVar2 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_178 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_178 != (undefined *)0x0) {
    lVar5 = *local_110;
    local_180 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,puVar3);
        }
        uVar6 = *(ulong *)(local_118 + (long)local_180 * 8);
        local_e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_scope_0269ea90);
        bVar1 = false;
        local_19c = 0;
        if (uVar6 == local_d0) {
          uVar6 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_kind_026a27e8);
          local_1a0 = 1;
          if (uVar6 != 3) {
            local_128 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            uVar6 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1a0 = 1;
            if ((uVar6 & 1) == 0) {
              pcVar4 = local_d8;
              FUN_01ab5aa4();
              local_1a4 = 0;
              if (((ulong)pcVar4 & 1) != 0) {
                uVar6 = local_e0;
                FUN_01ab51b4();
                local_1a4 = (uint)uVar6;
              }
              local_1a0 = local_1a4;
            }
          }
          local_19c = local_1a0;
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        if ((local_19c & 1) != 0) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_01ab5a0c;
        }
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_180 = (undefined *)0x0;
    } while (local_178 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_01ab5a0c:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

